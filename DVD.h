//DVD.h - class declaration for DVD
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS03
//Date: 06/10/2022
//=======================

#ifndef _DVD_H_
#define _DVD_H_

#include <iostream>
#include "GenericItem.h"

class DVD : public Generic {

public:
	DVD(std::string _name, int _numauthor, double _price);
	double CalculateCost() const;
	void GetDVDInfo(std::ostream& os) const;
};

std::ostream& operator<<(std::ostream& os, DVD& dvd);

#endif// _DVD_H_