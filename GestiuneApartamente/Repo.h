//#pragma once
#include "Cheltuiala.h"
#include <iostream>
using namespace std;

class Repo
{
private:
	Cheltuiala cheltuieli[50];
	int nrChelt;
public:
	Repo();
	void addCheltuiala(Cheltuiala& c);
	Cheltuiala getCheltuiala(int poz);
	int getSize();
};
