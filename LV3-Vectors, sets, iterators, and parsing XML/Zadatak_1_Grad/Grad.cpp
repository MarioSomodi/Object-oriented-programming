#include "stdafx.h"
#include "Grad.h"
#include <iostream>
#include <string>

using namespace std;

Grad::Grad(string n, string z, int bS, float p)
{
	m_sNaziv = n;
	m_sZupanija = z;
	m_nBrojStanovnika = bS;
	m_fPovrsina = p;
}

bool Grad::operator<(const Grad &b) const 
{
	if (m_nBrojStanovnika < b.m_nBrojStanovnika) return true;
	else return false;
}

void Grad::DajInformacije() const
{
	cout << "Naziv grada: " << m_sNaziv << endl;
	cout << "Zupanija: " << m_sZupanija << endl;
	cout << "Broj stanovnika: " << m_nBrojStanovnika << endl;
	cout << "Povrsina grada: " << m_fPovrsina << endl;
	cout << "-----------------------------------" << endl;
}

Grad::~Grad()
{
}
