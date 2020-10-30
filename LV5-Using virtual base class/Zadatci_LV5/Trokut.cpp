#include "stdafx.h"
#include "Trokut.h"
#include <iostream>
#include <math.h>

using namespace std;

Trokut::Trokut(double dST, string bT) : GrafObj(bT)
{
	m_dStranicaJenakoStrTrokuta = dST;
	m_sBoja = bT;
};

Trokut::~Trokut()
{
};

double Trokut::DajOpseg()
{
	return (double)3 * m_dStranicaJenakoStrTrokuta;
};

double Trokut::DajPovrsinu()
{
	return (double)(sqrt(3) / 4) * pow(m_dStranicaJenakoStrTrokuta, 2);
};

string Trokut::DajTip()
{
	return "trokut";
};

string Trokut::DajBoju()
{
	return m_sBoja;
};

void Trokut::Crtaj()
{
	cout << "Crtam " << DajBoju() << " trokut povrsine " << DajPovrsinu() << " m2" << endl;
};