#include "Pravokutnik.h"
#include <iostream>

using namespace std;

Pravokutnik::Pravokutnik(double dSA, double dSB)
{
	m_dDuljinaStraniceA = dSA;
	m_dDuljinaStraniceB = dSB;
};
void Pravokutnik::IspisiOpseg()
{
	double opseg = 2 * (m_dDuljinaStraniceA + m_dDuljinaStraniceB);
	cout << "Opseg pravokutnika je: " << opseg << endl;
};
void Pravokutnik::IspisiPovrsinu()
{
	double povrsina = m_dDuljinaStraniceA * m_dDuljinaStraniceB;
	cout << "Povrsina pravokutnika je: " << povrsina << endl;
};
Pravokutnik::~Pravokutnik()
{
};