#include "Krug.h"
#include <iostream>

using namespace std;

Krug::Krug(double p)
{
	m_dRadijus = p;
};
void Krug::IspisiOpseg()
{
	double opseg = 2 * m_dRadijus * m_dPI;
	cout << "Opseg kruga je: " << opseg << endl;
};
void Krug::IspisiPovrsinu()
{
	double povrsina = (m_dRadijus * m_dRadijus) * m_dPI;
	cout << "Povrsina kruga je: " << povrsina << endl;
};
Krug::~Krug()
{
};