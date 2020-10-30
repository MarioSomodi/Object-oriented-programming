#include "stdafx.h"
#include "Studij.h"
#include <iostream>

using namespace std;

Studij::Studij(string nS, int tS)
{
	m_sNazivStudija = nS;
	m_nTrajanjeStudija = tS;
};

void Studij::DajStudijInfo() 
{
	cout << "Naziv studija: " << m_sNazivStudija << endl;
	cout << "Trajanje studija: " << m_nTrajanjeStudija << endl;
	cout << "///////////////////////////////////////////////" << endl;
};

Studij::~Studij()
{
};
