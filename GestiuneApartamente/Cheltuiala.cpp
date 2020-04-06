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
	if (t != NULL)
	{
		this->tip = new char[strlen(t) + 1];
		strcpy_s(this->tip, strlen(t) + 1, t);
	}
	else this->tip = NULL;
}

Cheltuiala::Cheltuiala(const Cheltuiala &c)
{
	if (c.tip != NULL)
	{
		this->tip = new char[strlen(c.tip) + 1];
		strcpy_s(this->tip, strlen(c.tip) + 1, c.tip);
	}
	else this->tip = NULL;
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
	if (this->tip != NULL)
		delete[] this->tip;
	if (t == NULL)
		this->tip = NULL;
	else
	{
		this->tip = new char[strlen(t) + 1];
		strcpy_s(this->tip, strlen(t) + 1, t);
	}
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
	if (this->tip == NULL && c.tip == NULL)
		return ((this->apartament == c.apartament) && (this->suma == c.suma));
	else
		if (this->tip == NULL or c.tip == NULL)
			return false;
		else return ((this->apartament == c.apartament) && (this->suma == c.suma) && (strcmp(this->tip, c.tip) == 0));
}