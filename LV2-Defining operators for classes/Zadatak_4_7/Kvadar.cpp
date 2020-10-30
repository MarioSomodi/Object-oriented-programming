#include "Kvadar.h"
#include <iostream>

using namespace std;


Kvadar::Kvadar(float a, float b, float c)
{
	m_nStranicaA = a;
	m_nStranicaB = b;
	m_nStranicaC = c;
};

Kvadar::~Kvadar()
{
};

float Kvadar::DajOplosje()
{
	float fOplosje;
	fOplosje = 2 * (m_nStranicaA * m_nStranicaB + m_nStranicaA * m_nStranicaC + m_nStranicaB * m_nStranicaC);
	return fOplosje;
};

float Kvadar::DajObujam()
{
	float fObujam;
	fObujam = m_nStranicaA * m_nStranicaB * m_nStranicaC;
	return fObujam;
};

bool Kvadar::operator>(const Kvadar& b)
{
	if (DajObujam() > b.m_nStranicaA* b.m_nStranicaB* b.m_nStranicaC)
	{
		return true;
	}
	else
	{
		return false;
	}
};

bool Kvadar::operator!=(const Kvadar& b)
{
	if (DajObujam() != b.m_nStranicaA * b.m_nStranicaB * b.m_nStranicaC)
	{
		return true;
	}
	else
	{
		return false;
	}
};