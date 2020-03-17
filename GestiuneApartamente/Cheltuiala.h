#ifndef CHELTUIALA_H_
#define CHELTUIALA_H_


#include <iostream>
using namespace std;

class Cheltuiala
{
private:
	int apartament;
	int suma;
	char* tip;

public:
	Cheltuiala();
	Cheltuiala(int ap, int s, char* t);
	Cheltuiala(const Cheltuiala& c);
	~Cheltuiala();
	int getApartament();
	int getSuma();
	char* getTip();
	void setApartament(int a);
	void setSuma(int s);
	void setTip(char* t);
	bool operator==(const Cheltuiala& c);
	Cheltuiala& operator=(const Cheltuiala& c);

};

#endif // !CHELTUIALA_H