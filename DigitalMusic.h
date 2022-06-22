//DigitalMusic.h - class declaration for DigitalMusic
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS03
//Date: 06/10/2022
//=======================

#ifndef _DIGITALMUSIC_H_
#define _DIGITALMUSIC_H_

#include <iostream>
#include "GenericItem.h"

class DigitalMusic : public Generic {

public:
	DigitalMusic(std::string _name, int _numauthor, double _price);
	double CalculateCost() const;
	void GetMusicInfo(std::ostream& os) const;
};

std::ostream& operator<<(std::ostream& os, DigitalMusic& music);

#endif// _DVD_H_