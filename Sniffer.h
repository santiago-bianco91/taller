/*
 * Sniffer.h
 *
 *  Created on: 09/04/2017
 *      Author: santiago
 */

#ifndef SNIFFER_H_
#define SNIFFER_H_

#include <fstream>
#include <iostream>
#include <fstream>
#include <string>


class Sniffer {
	unsigned int longitudTotal,identificador,dirOrigen,dirDestino;
	std::string datos;
	bool flag;
	std::ifstream infile;


public:
	Sniffer(const std::string nombreArchivo);
	void parsear();
	virtual ~Sniffer();


};

#endif /* SNIFFER_H_ */


