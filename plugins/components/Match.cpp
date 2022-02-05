/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Match.cpp
 * Author: rlcancian
 * 
 * Created on 03 de Junho de 2019, 15:14
 */

#include "Match.h"

#include "../../kernel/simulator/Model.h"
#include "kernel/simulator/Simulator.h"

#ifdef PLUGINCONNECT_DYNAMIC

extern "C" StaticGetPluginInformation GetPluginInformation() {
	return &Match::GetPluginInformation;
}
#endif

ModelDataDefinition* Match::NewInstance(Model* model, std::string name) {
	return new Match(model, name);
}

Match::Match(Model* model, std::string name) : ModelComponent(model, Util::TypeOf<Match>(), name) {
}

std::string Match::show() {
	return ModelComponent::show() + "";
}

ModelComponent* Match::LoadInstance(Model* model, std::map<std::string, std::string>* fields) {
	Match* newComponent = new Match(model);
	try {
		newComponent->_loadInstance(fields);
	} catch (const std::exception& e) {

	}
	return newComponent;
}

void Match::_onDispatchEvent(Entity* entity, unsigned int inputNumber) {
	Waiting* waiting = new Waiting(entity, _parentModel->getSimulation()->getSimulatedTime(), this);
	_queues->getAtRank(inputNumber)->insertElement(waiting);
	unsigned int matchSize = _parentModel->parseExpression(_matchSize);
	unsigned int i = 0;
	if (_rule == Match::Rule::Any) {
		bool foundAll = true;
		while (foundAll && i < _queues->size()) {
			foundAll &= _queues->getAtRank(i++)->size() >= matchSize;
		}
		if (foundAll) {
			// release entities 
			Entity* waitingEntity;
			for (Queue* queue : *_queues->list()) {
				for (i = 0; i < matchSize; i++) {
					waiting = queue->first();
					queue->removeElement(waiting);
					// @TODO: Actualize STATISTICS about queue/wait time
					waitingEntity = waiting->getEntity();
					_parentModel->sendEntityToComponent(waitingEntity, this->getConnections()->getFrontConnection(), 0.0);
				}
			}
		}
	} else {
		// by attribute
	}
}

bool Match::_loadInstance(std::map<std::string, std::string>* fields) {
	bool res = ModelComponent::_loadInstance(fields);
	if (res) {
		// @TODO: not implemented yet
	}
	return res;
}

//void Match::_initBetweenReplications() {}

std::map<std::string, std::string>* Match::_saveInstance(bool saveDefaultValues) {
	std::map<std::string, std::string>* fields = ModelComponent::_saveInstance(saveDefaultValues);
	SaveField(fields, "rule", static_cast<int> (_rule), static_cast<int> (DEFAULT.rule), saveDefaultValues);
	SaveField(fields, "matchSize", _matchSize, DEFAULT.matchSize, saveDefaultValues);
	SaveField(fields, "attributeName", _attributeName, DEFAULT.attributeName, saveDefaultValues);
	SaveField(fields, "queues", _queues->size(), 0, saveDefaultValues);
	return fields;
}

void Match::setRule(Match::Rule _rule) {
	this->_rule = _rule;
}

Match::Rule Match::getRule() const {
	return _rule;
}

void Match::setAttributeName(std::string _attributeName) {
	this->_attributeName = _attributeName;
}

std::string Match::getAttributeName() const {
	return _attributeName;
}

void Match::setMatchSize(std::string _matchSize) {
	this->_matchSize = _matchSize;
}

std::string Match::getMatchSize() const {
	return _matchSize;
}

void Match::setNumberOfQueues(unsigned int _numberOfQueues) {
	this->_numberOfQueues = _numberOfQueues;
}

unsigned int Match::getNumberOfQueues() const {
	return _numberOfQueues;
}

bool Match::_check(std::string * errorMessage) {
	bool resultAll = true;
	// @TODO: not implemented yet
	//*errorMessage += "";
	return resultAll;
}

void Match::_createInternalData() {
	while (_queues->size() > _numberOfQueues) {
		this->_removeInternalData(_queues->last()->getName());
		_queues->remove(_queues->last());
	}
	while (_queues->size() < _numberOfQueues) {
		Queue* newQueue = _parentModel->getParentSimulator()->getPlugins()->newInstance<Queue>(_parentModel, getName() + ".Queue" + std::to_string(_queues->size()));
		this->_internalData(newQueue->getName(), newQueue);
		_queues->insert(newQueue);
	}
}

PluginInformation * Match::GetPluginInformation() {
	PluginInformation* info = new PluginInformation(Util::TypeOf<Match>(), &Match::LoadInstance, &Match::NewInstance);
	info->setCategory("Decision");
	info->setMaximumInputs(2);
	info->setMaximumInputs(99);
	//info->getDynamicLibFilenameDependencies()->insert("queue.so");
	// ...
	return info;
}

