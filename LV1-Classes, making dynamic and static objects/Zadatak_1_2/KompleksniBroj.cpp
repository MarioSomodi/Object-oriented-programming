#include "KompleksniBroj.h"
#include <iostream>

using namespace std;

KompleksniBroj::KompleksniBroj(int rD, int iD)
{
	m_nRealniDio = rD;
	m_nImaginarniDio = iD;
};
void KompleksniBroj::IspisiKompleksniBroj()
{
	cout << m_nRealniDio << "+" << m_nImaginarniDio << "i" << endl;
};
KompleksniBroj::~KompleksniBroj()
{
};