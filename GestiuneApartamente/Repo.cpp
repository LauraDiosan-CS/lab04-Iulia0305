#include "Repo.h"

Repo::Repo()
{
	this->nrChelt = 0;
}

void Repo::addCheltuiala(Cheltuiala &c)
{
	this->nrChelt++;
	this->cheltuieli[this->nrChelt] = c;
}

Cheltuiala Repo::getCheltuiala(int poz)
{
	return this->cheltuieli[poz];
}

int Repo::getSize()
{
	return this->nrChelt;
}