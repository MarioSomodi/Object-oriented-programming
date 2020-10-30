#include "stdafx.h"
#include "Covjek.h"
#include <iostream>

using namespace std;

Covjek::Covjek(string i, string p, int gR)
{
	m_sIme = i;
	m_sPrezime = p;
	m_nGodinaRodjenja = gR;
};

void Covjek::DajImePrezime() 
{
	cout << "Ime: " << m_sIme << endl;
	cout << "Prezime: " << m_sPrezime << endl;
};

Covjek::~Covjek()
{
};
