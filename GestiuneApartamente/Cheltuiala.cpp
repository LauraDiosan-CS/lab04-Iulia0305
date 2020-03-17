#include "Cheltuiala.h"
#include <iostream>
#include <string.h>
using namespace std;

Cheltuiala::Cheltuiala()
{
	this->apartament = 0;
	this->suma = 0;
	this->tip = NULL;
}

Cheltuiala::Cheltuiala(int ap, int s, char* t)
{
	this->apartament = ap;
	this->suma = s;
	this->tip = new char[strlen(t) + 1];
	strcpy_s(this->tip, sizeof this->tip, t);
}

Cheltuiala::Cheltuiala(const Cheltuiala &c)
{
	this->tip = new char[strlen(c.tip) + 1];
	strcpy_s(this->tip, sizeof this->tip, c.tip);
	this->apartament = c.apartament;
	this->suma = c.suma;
}

Cheltuiala::~Cheltuiala()
{
	if (this->tip)
	{
		delete[] this->tip;
		this->tip = NULL;
	}
		 
}

int Cheltuiala::getApartament()
{
	return this->apartament;
}

int Cheltuiala::getSuma()
{
	return this->suma;
}

char* Cheltuiala::getTip()
{
	return this->tip;
}

void Cheltuiala::setApartament(int a)
{
	this->apartament = a;
}

void Cheltuiala::setSuma(int s)
{
	this->suma = s;
}

void Cheltuiala::setTip(char* t)
{
	if (this->tip)
		delete[] this->tip;
	this->tip = new char[strlen(t) + 1];
	strcpy_s(this->tip, sizeof this->tip, t);
}

Cheltuiala& Cheltuiala::operator=(const Cheltuiala& c)
{
	this->setApartament(c.apartament);
	this->setSuma(c.suma);
	this->setTip(c.tip);
	return *this;
}

bool Cheltuiala::operator==(const Cheltuiala& c)
{
	return ((this->apartament == c.apartament) && (this->suma == c.suma) && strcmp(this->tip, c.tip));
}