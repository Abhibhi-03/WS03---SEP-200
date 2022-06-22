//book.cpp - Function definitions for book.h
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS03
//Date: 06/10/2022
//=======================
#include "Book.h"

Book::Book(std::string _title, int _numauthor, double _price) :
	Generic(_title, _numauthor, _price) {
}

double Book::CalculateCost() const {
	double totalCost = Generic::GetPrice() * 1.23; 	  
	return totalCost;
}

void Book::GetInfo(std::ostream& os) const {
	std::string* authors = Generic::GetAuthors();
	int numAuthors = Generic::GetNumAuthors();
	Generic::GetInfo(os);
	os << "There is a 10% penalty for using paper.\n";
	os << "The real cost is $" << CalculateCost() << std::endl;
}

std::ostream& operator<<(std::ostream& os, Book& book) {
	book.GetInfo(os);
	return os;
}
