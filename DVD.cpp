//DVD.cpp - Class definiotns for DVD.h
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS03
//Date: 06/10/2022
//=======================
#include "DVD.h"

DVD::DVD(std::string title, int numauthor, double price) :
	Generic(title, numauthor, price) {
}

double DVD::CalculateCost() const {
	double totalCost = Generic::GetPrice() * 1.18; 
	return totalCost;
}

void DVD::GetDVDInfo(std::ostream& os) const {
	std::string* authors = Generic::GetAuthors();
	int numAuthors = Generic::GetNumAuthors();
	Generic::GetInfo(os);
	os << "There is a 5% penalty for using plastic.\n";
	os << "The real cost is $" << CalculateCost() << std::endl;
}

std::ostream& operator<<(std::ostream& os, DVD& dvd) {
	dvd.GetDVDInfo(os);
	return os;
}
