#include "stdafx.h"
#include "Kvadrat.h"
#include <iostream>
#include <math.h>

using namespace std;

Kvadrat::Kvadrat(double dSK, string bK) : GrafObj(bK)
{
	m_dStranicaKvadrata = dSK;
	m_sBoja = bK;
};

Kvadrat::~Kvadrat()
{
};

double Kvadrat::DajOpseg()
{
	return (double)4 * m_dStranicaKvadrata;
};

double Kvadrat::DajPovrsinu()
{
	return (double)pow(m_dStranicaKvadrata, 2);
};

string Kvadrat::DajTip()
{
	return "kvadrat";
};

string Kvadrat::DajBoju()
{
	return m_sBoja;
};

void Kvadrat::Crtaj()
{
	cout << "Crtam " << DajBoju() << " kvadrat povrsine " << DajPovrsinu() << " m2" << endl;
}