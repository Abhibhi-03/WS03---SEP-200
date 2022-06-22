//GenericItem.cpp - function definitions for the generic class
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS03
//Date: 06/10/2022
//=======================

#include "GenericItem.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
Generic::Generic() {
	title = "";
	price = 0.0;
	authors = nullptr;
	numAuthors = 0;
}

Generic::Generic(std::string _title, const int _numauthors, double _price) {
	title = _title;
	price = _price;
	numAuthors = _numauthors;
	if (_numauthors > 0) {
		numAuthors = _numauthors;
		authors = new std::string[numAuthors];
		std::cin.ignore();

		for (int i = 0; i < numAuthors; ++i) {
			std::string Name = "";
			std::cout << "Enter the name of Author " << i + 1 << ": ";
			getline(std::cin, Name);
			authors[i] = Name;
		}
	}
	else authors = nullptr;
}

std::string Generic::GetTitle() const {
	return title;
}

std::string* Generic::GetAuthors() const {
	return authors;
}

int Generic::GetNumAuthors() const {
	return numAuthors;
}

double Generic::GetPrice() const {
	return price;
}

void Generic::GetInfo(std::ostream& info) const
{
	info << std::endl << std::endl;
	info << std::left << std::setw(9) << "Title:" << title << std::endl;
	info << std::left << std::setw(9) << "Authors:";
	for (int i = 0; i < numAuthors; ++i) {
		info << authors[i] << ", ";
	}
	std::cout << std::endl;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	info << std::left << std::setw(9) << "Price:" << price << std::endl;
}

Generic::~Generic()
{
	if (authors != nullptr) {
		delete[] authors;
		authors = nullptr;
	}
	title = "";
	numAuthors = 0;
	price = 0.0;
}

std::ostream& operator<<(std::ostream& os, Generic& generic) {
	generic.GetInfo(os);
	return os;
}
