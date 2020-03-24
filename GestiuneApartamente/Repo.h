#pragma once
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
	void setSize(int nr);
	Cheltuiala* getAll();
	int getPoz(Cheltuiala& c);
	void stergere(Cheltuiala& c);
	void update(Cheltuiala c1, Cheltuiala c2);
	void change(Cheltuiala& c);
};
