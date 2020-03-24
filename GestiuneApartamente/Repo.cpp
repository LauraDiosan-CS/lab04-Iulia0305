#include "Repo.h"

Repo::Repo()
{
	this->nrChelt = 0;
}

void Repo::addCheltuiala(Cheltuiala &c)
{
	this->cheltuieli[this->nrChelt] = c;
	this->nrChelt++;
}

Cheltuiala Repo::getCheltuiala(int poz)
{
	return this->cheltuieli[poz];
}

Cheltuiala* Repo::getAll()
{
	return this->cheltuieli;
}

int Repo::getPoz(Cheltuiala& c)
{
	for (int i = 0; i < this->nrChelt; i++)
		if (this->cheltuieli[i] == c)
			return i;
	return -1;
}

void Repo::setSize(int nr)
{
	this->nrChelt = nr;
}

int Repo::getSize()
{
	return this->nrChelt;
}

void Repo::stergere(Cheltuiala& c)
{
	int lungime = this->getSize();
	int poz = this->getPoz(c);
	if (poz != -1)
	{
		for (int i = poz; i < lungime - 1; i++)
			this->cheltuieli[i] = this->cheltuieli[i + 1];
		this->cheltuieli[lungime - 1] = Cheltuiala();
		this->setSize(lungime - 1);
	}
}

void Repo::update(Cheltuiala c1, Cheltuiala c2)
{
	int lungime = this->getSize();
	for(int i = 0; i < lungime; i++)
		if (this->cheltuieli[i] == c1)
		{
			this->cheltuieli[i] = c2;
			break;
		}
}

void Repo::change(Cheltuiala& c)
{
	int lungime = this->getSize();
	for(int i = 0; i < lungime; i++)
		if (this->cheltuieli[i].getApartament() == c.getApartament())
		{
			this->cheltuieli[i].setSuma(c.getSuma());
			this->cheltuieli[i].setTip(c.getTip());
			break;
		}
}