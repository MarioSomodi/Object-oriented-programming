#include <iostream>
#include "Kvadar.h"

using namespace std;

int main()
{
	Kvadar k1(1, 2, 3);
	Kvadar k2(2.5, 3.7, 5.0);

	cout << "Oplosje kvadra je: " << k1.DajOplosje() << endl;
	cout << "Obujam kvadra je: " << k1.DajObujam() << endl;

	cout << "Oplosje kvadra je: " << k2.DajOplosje() << endl;
	cout << "Obujam kvadra je: " << k2.DajObujam() << endl;

	if (k1.DajObujam() > k2.DajObujam())
	{
		cout << "k1 je veci od k2" << endl;
	}
	else
	{
		cout << "k2 je veci od k1" << endl;
	}

	if (k1 > k2)
	{
		cout << "k1 je veci od k2" << endl;

	}
	else
	{
		cout << "k2 je veci od k1" << endl;
	}

	if (k1 != k2)
	{
		cout << "k1 i k2 su razliciti!" << endl;
	}
	else
	{
		cout << "k1 i k2 su isti!" << endl;
	}
}