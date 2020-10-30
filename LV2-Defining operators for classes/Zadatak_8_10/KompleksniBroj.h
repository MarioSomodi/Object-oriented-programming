#pragma once
#include <iostream>

using namespace std;

class KompleksniBroj
{
public:
	KompleksniBroj(int rd, int id);
	~KompleksniBroj();
	void IspisiKompleksniBroj();
	void operator=(const KompleksniBroj& b);
	KompleksniBroj operator+(const KompleksniBroj& c);
	KompleksniBroj operator-(const KompleksniBroj& d);
	KompleksniBroj operator*(const KompleksniBroj& e);
	float ApsolutnaVrijednost();
private:
	int m_nRealniDio;
	int m_nImaginarniDio;
};