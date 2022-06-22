//Book.h - class declaration for books
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS03
//Date: 06/10/2022
//=======================

#ifndef _BOOK_H_
#define _BOOK_H_

#include <iostream>
#include "GenericItem.h"

class Book : public Generic {

public:
	Book(std::string _name, int _numauthor, double _price);
	double CalculateCost() const;
	void GetInfo(std::ostream& os) const;
};

std::ostream& operator<<(std::ostream& os, Book& book);

#endif// _BOOK_H_