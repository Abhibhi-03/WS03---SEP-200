//GenericItem.h - class declaration for generic
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS03
//Date: 06/10/2022
//=======================

#ifndef _GENERIC_H_
#define _GENERIC_H_

#include <iostream>

class Generic {
	//these are common to this class and all derived classes
	std::string title;
	double price;
	std::string* authors;
	int numAuthors;

protected://for derived classes only
	std::string GetTitle() const;
	std:: string* GetAuthors() const;
	int GetNumAuthors() const;
	double GetPrice() const;
public:
	Generic();
	Generic(std::string _title, const int _numauthors, double _price);
	void GetInfo(std::ostream& info) const;
	~Generic();
};

std::ostream& operator<<(std::ostream& os, Generic& generic);
#endif// _GENERIC_H_