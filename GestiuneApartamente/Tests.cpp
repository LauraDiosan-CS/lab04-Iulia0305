#include "Tests.h"
#include "assert.h"
#include "Cheltuiala.h"
#include "Repo.h"
#include "Service.h"
#include <iostream>
using namespace std;

void TestCheltuiala()
{
    char* gaz = new char[100];
    char* curent = new char[100];
    strcpy_s(gaz, 4, "gaz");
    strcpy_s(curent, 7, "curent");
    Cheltuiala c1(10, 100, gaz);
    Cheltuiala c2(20, 150, curent);
    assert(c1.getApartament() == 10);
    assert(c2.getSuma() == 150);
}

void TestRepo()
{
    Repo repo = Repo();
    char* gaz = new char[100];
    char* curent = new char[100];
    char* internet = new char[100];
    strcpy_s(gaz, 4, "gaz");
    strcpy_s(curent, 7, "curent");
    strcpy_s(internet, 9, "internet");
    Cheltuiala c1(10, 100, gaz);
    Cheltuiala c2(20, 150, curent);
    Cheltuiala c3(15, 200, internet);
    Cheltuiala c4(10, 220, gaz);
    repo.addCheltuiala(c1);
    repo.addCheltuiala(c2);
    Cheltuiala cc = repo.getCheltuiala(0);
    int size = repo.getSize();
    repo.update(c2, c3);

    assert(size == 2);
    assert(cc == c1);
    assert(repo.getCheltuiala(1) == c3);

    repo.change(c4);
    assert(repo.getCheltuiala(0).getSuma() == 220);
}

void TestService()
{
    Service s;
    char* gaz = new char[100];
    char* curent = new char[100];
    char* internet = new char[100];
    strcpy_s(gaz, 4, "gaz");
    strcpy_s(curent, 7, "curent");
    strcpy_s(internet, 9, "internet");
    s.addCheltuiala(1, 100, gaz);
    s.addCheltuiala(2, 200, curent);

   assert(s.getSize() == 2);
   assert(s.getPoz(2, 200, curent) == 1);

   s.change(1, 400, internet);
   Cheltuiala c = s.getCheltuiala(0);
   assert(c.getSuma() == 400);

}
