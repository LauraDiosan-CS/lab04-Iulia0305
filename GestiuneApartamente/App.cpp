#include <iostream>
#include "Tests.h"
#include "Service.h"
#include "UI.h"

using namespace std;

int main()
{
	TestCheltuiala();
	TestRepo();
	TestServiceCRUD();
	TestServiceFiltre();
	UI ui; 
	ui.Run();

	return 0;
}