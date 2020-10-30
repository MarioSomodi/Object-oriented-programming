#include "stdafx.h"
#include "Nastavnik.h"
#include <iostream>

using namespace std;

Nastavnik::Nastavnik(string i, string p, int gR, Studij* s, int g) : Covjek(i, p, gR)
{
	m_pStudij = s;
	m_nGodina = g;
};

void Nastavnik::DajNastavnikInfo() 
{
	cout << "Ime nastavnika: " << m_sIme << endl;
	cout << "Prezime nastavnika: " << m_sPrezime << endl;
	cout << "Predaje na studiju: " << m_pStudij->m_sNazivStudija << endl;
	cout << "Godina na kojoj predaje: " << m_nGodina << endl;
	cout << "///////////////////////////////////////////////" << endl;
};

string Nastavnik::VratiNazivStudija()
{
	return m_pStudij->m_sNazivStudija;
};

int Nastavnik::VratiGodinuStudija()
{
	return m_nGodina;
}

Nastavnik::~Nastavnik()
{
};
