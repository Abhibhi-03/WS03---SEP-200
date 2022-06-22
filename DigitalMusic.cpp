//DigitalMusic.cpp - Function definitions for DigitalMusic.h
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS03
//Date: 06/10/2022
//=======================
#include "DigitalMusic.h"

DigitalMusic::DigitalMusic(std::string title, int numauthor, double price) :
	Generic(title, numauthor, price) {
}

double DigitalMusic::CalculateCost() const {
	double totalCost = Generic::GetPrice() * 1.13;
	return totalCost;
}

void DigitalMusic::GetMusicInfo(std::ostream& os) const {
	std::string* authors = Generic::GetAuthors();
	int numAuthors = Generic::GetNumAuthors();
	Generic::GetInfo(os);
	std::cout<<"The real cost is $" << CalculateCost() << std::endl;
}

std::ostream& operator<<(std::ostream& os, DigitalMusic& dmusic) {
	dmusic.GetMusicInfo(os);
	return os;
}
