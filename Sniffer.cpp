/*
 * Sniffer.cpp
 *
 *  Created on: 09/04/2017
 *      Author: santiago
 */

#include "Sniffer.h"

Sniffer::Sniffer(const std::string nombreArchivo) {
	this->infile.open("one.cap");
	this->longitudTotal =sizeof(this->infile);
	 std::string data;
	infile >> data;

	std::ifstream ifs ("one", std::ifstream::in);


	this->flag=false;
	this->dirDestino =0;
	this->dirOrigen =0;
	this->identificador =0;
	std::cout << data << "\n";
}

void parsear(){

}

Sniffer::~Sniffer() {
	// TODO Auto-generated destructor stub
}

