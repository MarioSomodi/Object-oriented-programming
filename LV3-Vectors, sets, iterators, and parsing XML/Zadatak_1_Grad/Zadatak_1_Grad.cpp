#include "stdafx.h"
#include <iostream>
#include "Grad.h"
#include <vector>
#include <set>
#include <iterator>

using namespace std;

int main()
{
	Grad g1("Split", "Splitska", 3423, 123.321);
	Grad g2("Zagreb", "Zagrebacka", 1234, 534.54);
	Grad g3("Slatina", "Viroviticko-Podravska", 1553, 8473.3);
	Grad g4("Virovitica", "Viroviticko-Podravska", 5325, 453.45);
	Grad g5("Zadar", "Zadarska", 7344, 645.5);

	vector<Grad> vGradovi;
	vGradovi.push_back(g1);
	vGradovi.push_back(g2);
	vGradovi.push_back(g3);
	vGradovi.push_back(g4);
	vGradovi.push_back(g5);

	cout << "Ispis clanova vektora preko indeksa." << endl;
	cout << "-----------------------------------" << endl;
	for (int i = 0; i < vGradovi.size(); i++) 
	{
		vGradovi[i].DajInformacije();
	}

	vector<Grad>::iterator vIg;

	cout << "Ispis clanova vektora preko iteratora." << endl;
	cout << "-----------------------------------" << endl;
	for (vIg = vGradovi.begin(); vIg != vGradovi.end(); ++vIg) 
	{
		vIg->DajInformacije();
	}

	set<Grad> sGradovi;
	sGradovi.insert(g1);
	sGradovi.insert(g2);
	sGradovi.insert(g3);
	sGradovi.insert(g4);
	sGradovi.insert(g5);

	set<Grad>::iterator sIg;
	cout << "Ispis clanova seta preko iteratora." << endl;
	cout << "-----------------------------------" << endl;
	for (sIg = sGradovi.begin(); sIg != sGradovi.end(); ++sIg) 
	{
		sIg->DajInformacije();
	}

	system("pause");
    return 0;
}

