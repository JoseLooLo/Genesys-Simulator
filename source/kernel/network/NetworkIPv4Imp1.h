/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NetworkIPv4Imp1.h
 * Author: José Luiz de Souza
 * Email: joseloolo@hotmail.com
 *
 * Created on 28 de Maio de 2022, 23:30
 */

#ifndef NETWORKIPV4IMP1_H
#define NETWORKIPV4IMP1_H

#include <string>

#include "Network_if.h"

class NetworkIPv4Imp1 : public Network_if {
public:
	NetworkIPv4Imp1();
	virtual ~NetworkIPv4Imp1() = default;
public: // inherited from Network_if
	// void clear();
	// void addValue(double value);
	// double getLastValue();
	// unsigned long numElements();
};

#endif /* NETWORKIPV4IMP1_H */

