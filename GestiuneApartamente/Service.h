#pragma once
#include "Repo.h"
#include "Cheltuiala.h"
#include <iostream>
using namespace std;

class Service
{
private:
	Repo repo;
public:
	Service();
	~Service();
	void addCheltuiala(int ap, int s, char* t);
	int getPoz(int ap, int s, char* t);
	void del(int ap, int s, char* t);
	void change(int ap, int s, char* t);
	int getSize();
	Cheltuiala getCheltuiala(int poz);
	Cheltuiala* getAll();
	void update(int ap1, int s1, char* t1, int ap2, int s2, char* t2);
};
