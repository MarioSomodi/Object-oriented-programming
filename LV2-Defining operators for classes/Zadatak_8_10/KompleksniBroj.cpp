#include "KompleksniBroj.h"
#include <iostream>
#include <math.h>

using namespace std;

KompleksniBroj::KompleksniBroj(int rd, int id)
{
	m_nRealniDio = rd;
	m_nImaginarniDio = id;

};

KompleksniBroj::~KompleksniBroj()
{
};

void KompleksniBroj::IspisiKompleksniBroj()
{
	cout << m_nRealniDio << " + " << m_nImaginarniDio << "i" << endl;
};

void KompleksniBroj::operator=(const KompleksniBroj& b)
{
	m_nRealniDio = b.m_nRealniDio;
	m_nImaginarniDio = b.m_nImaginarniDio;
};

KompleksniBroj KompleksniBroj::operator+(const KompleksniBroj& b)
{
	int Rzbroj = 0;
	int Izbroj = 0;
	Rzbroj = m_nRealniDio + b.m_nRealniDio;
	Izbroj = m_nImaginarniDio + b.m_nImaginarniDio;
	KompleksniBroj tmp(Rzbroj, Izbroj);
	return tmp;
};

KompleksniBroj KompleksniBroj::operator-(const KompleksniBroj& b)
{
	int Roduz = 0;
	int Ioduz = 0;
	Roduz = m_nRealniDio - b.m_nRealniDio;
	Ioduz = m_nImaginarniDio - b.m_nImaginarniDio;
	KompleksniBroj tmp(Roduz, Ioduz);
	return tmp;
};

KompleksniBroj KompleksniBroj::operator*(const KompleksniBroj& b)
{
	int prod1 = 0;
	int prod2 = 0;
	prod1 = (m_nRealniDio * b.m_nRealniDio) - (m_nImaginarniDio * b.m_nImaginarniDio);
	prod2 = (m_nRealniDio * b.m_nImaginarniDio) + (b.m_nRealniDio * m_nImaginarniDio);
	KompleksniBroj tmp(prod1, prod2);
	return tmp;
};

float KompleksniBroj::ApsolutnaVrijednost()
{
	float fApsolutna;
	fApsolutna = sqrt(pow(m_nRealniDio, 2) + pow(m_nImaginarniDio, 2));
	cout << fApsolutna << endl;
	return fApsolutna;

};