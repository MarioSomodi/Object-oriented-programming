#include "VremenskaPrognoza.h"
#include <iostream>

using namespace std;

VremenskaPrognoza::VremenskaPrognoza(int dT[30])
{
	for (int i = 0; i < 30; i++)
	{
		m_nDnevneTemperature[i] = dT[i];
	}
};
void VremenskaPrognoza::DajSrednjuMjesecnuTemperaturu()
{
	int zbroj = 0;
	double srednjaMjesecnaTemperatura = 0;
	for (int i = 0; i < 30; i++) 
	{
		zbroj += m_nDnevneTemperature[i];
	}
	srednjaMjesecnaTemperatura = zbroj / 30;
	cout << "Srednja mjesecna temperatura je: " << srednjaMjesecnaTemperatura << endl;
};
VremenskaPrognoza::~VremenskaPrognoza()
{
};
