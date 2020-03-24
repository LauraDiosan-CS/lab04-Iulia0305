#include <iostream>
#include "Service.h"
using namespace std;

Service::Service()
{
	this->repo = Repo();
}

Service::~Service()
{

}

void Service::addCheltuiala(int ap, int s, char* t)
{
	Cheltuiala c = Cheltuiala(ap, s, t);
	this->repo.addCheltuiala(c);
}

int Service::getPoz(int ap, int s, char* t)
{
	Cheltuiala c(ap, s, t);
	return this->repo.getPoz(c);
}

void Service::del(int ap, int s, char* t)
{
	Cheltuiala c(ap, s, t);
	this->repo.stergere(c);
}

void Service::change(int ap, int s, char* t)
{
	Cheltuiala c(ap, s, t);
	this->repo.change(c);
}

int Service::getSize()
{
	return this->repo.getSize();
}

Cheltuiala Service::getCheltuiala(int poz)
{
	return this->repo.getCheltuiala(poz);
}

Cheltuiala* Service::getAll()
{
	return this->repo.getAll();
}

void Service::update(int ap1, int s1, char* t1, int ap2, int s2, char* t2)
{
	Cheltuiala c1(ap1, s1, t1);
	Cheltuiala c2(ap2, s2, t2);
	this->repo.update(c1, c2);
}