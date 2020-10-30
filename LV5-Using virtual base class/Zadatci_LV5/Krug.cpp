#include "stdafx.h"
#include "Krug.h"
#include <iostream>
#include <math.h>

using namespace std;

Krug::Krug(double pK, string bK) : GrafObj(bK)
{
	m_dPolumjerKruznice = pK;
	m_sBoja = bK;
};

Krug::~Krug()
{
};

double Krug::DajOpseg()
{
	return (double)2 * 3.14 * m_dPolumjerKruznice;
};

double Krug::DajPovrsinu()
{
	return (double)3.14 * pow(m_dPolumjerKruznice, 2);
};

string Krug::DajTip()
{
	return "Krug";
};

string Krug::DajBoju()
{
	return m_sBoja;
};

void Krug::Crtaj()
{
	cout << "Crtam " << DajBoju() << " krug povrsine " << DajPovrsinu() << " m2" << endl;
};