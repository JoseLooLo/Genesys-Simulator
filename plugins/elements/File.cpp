/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File.cpp
 * Author: rlcancian
 * 
 * Created on 20 de Fileembro de 2019, 20:07
 */

#include "File.h"

File::File(Model* model, std::string name) : ModelData(model, Util::TypeOf<File>(), name) {
	//_elems = elems;
}

std::string File::show() {
	return ModelData::show() +
			"";
}

PluginInformation* File::GetPluginInformation() {
	PluginInformation* info = new PluginInformation(Util::TypeOf<File>(), &File::LoadInstance);
	return info;
}

ModelData* File::LoadInstance(Model* model, std::map<std::string, std::string>* fields) {
	File* newElement = new File(model);
	try {
		newElement->_loadInstance(fields);
	} catch (const std::exception& e) {

	}
	return newElement;
}

bool File::_loadInstance(std::map<std::string, std::string>* fields) {
	bool res = ModelData::_loadInstance(fields);
	if (res) {
		try {
			//this->_attributeName = (*fields->find("attributeName")).second;
			//this->_orderRule = static_cast<OrderRule> (std::stoi((*fields->find("orderRule")).second));
		} catch (...) {
		}
	}
	return res;
}

std::map<std::string, std::string>* File::_saveInstance(bool saveDefaultValues) {
	std::map<std::string, std::string>* fields = ModelData::_saveInstance(saveDefaultValues); //Util::TypeOf<File>());
	//SaveField(fields, "orderRule", std::to_string(static_cast<int> (this->_orderRule)));
	//SaveField(fields, "attributeName", "\""+this->_attributeName+"\"");
	return fields;
}

bool File::_check(std::string* errorMessage) {
	bool resultAll = true;
	// resultAll |= ...
	*errorMessage += "";
	return resultAll;
}

ParserChangesInformation* File::_getParserChangesInformation() {
	ParserChangesInformation* changes = new ParserChangesInformation();
	//changes->getProductionToAdd()->insert(...);
	//changes->getTokensToAdd()->insert(...);
	return changes;
}

