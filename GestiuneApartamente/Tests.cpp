#include "Tests.h"
#include "assert.h"
#include "Cheltuiala.h"
#include "Repo.h"
#include <iostream>
using namespace std;

void TestCheltuiala()
{
    char* gaz = new char[100];
    char* curent = new char[100];
    strcpy_s(gaz, 3, "gaz");
    strcpy_s(curent, 6, "curent");
     Cheltuiala c1(10, 100, gaz);
     Cheltuiala c2(20, 150, curent);
     assert(c1.getApartament() == 1);
     assert(c2.getSuma() == 150);
}

void TestRepo()
{
    Repo repo;
    char* gaz = new char[100];
    char* curent = new char[100];
    strcpy_s(gaz, 3, "gaz");
    strcpy_s(curent, 6, "curent");
    Cheltuiala c1(10, 100, gaz);
    Cheltuiala c2(20, 150, curent);
    repo.addCheltuiala(c1);
    repo.addCheltuiala(c2);
    Cheltuiala cc = repo.getCheltuiala(0);
    int size = repo.getSize();
    assert(size == 2);
    assert(cc == c1);
}
