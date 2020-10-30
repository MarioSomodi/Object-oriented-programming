#include <iostream>
#include "Racunalo.h"
#include <string>

using namespace std;

int main()
{
	Racunalo r1("Intel i5", 8, 1024, 4);
	Racunalo r2("AMD Ryzen 5", 16, 2048, 6);
	Racunalo r3("Intel i9", 32, 4124, 8);

	r1.IspisiInformacije();
	r2.IspisiInformacije();
	r3.IspisiInformacije();
	/* Zadatak 2
	r1.PromjeniProcesor("AMD Ryzen 4");
	r2.PromjeniRAM(32);
	r3.PromjeniHDD(8000);
	r1.IspisiInformacije();
	r2.IspisiInformacije();
	r3.IspisiInformacije();
	*/
	r1.PromjeniProcesor();
	r2.PromjeniRAM();
	r3.PromjeniHDD();
	r1.IspisiInformacije();
	r2.IspisiInformacije();
	r3.IspisiInformacije();

	system("pause");
}