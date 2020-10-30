#include "stdafx.h"
#include "UgostiteljskiObjekt.h"
#include <iostream>
#include <string>

using namespace std;

UgostiteljskiObjekt::UgostiteljskiObjekt(string n, int oib, float lat, float lng, string t, string rV, string a, string g, vector<int> vP)
{
	m_sNaziv = n;
	m_nOIB = oib;
	m_fLat = lat;
	m_fLng = lng;
	m_sTip = t;
	m_sRadnoVrijeme = rV;
	m_sAdresa = a;
	m_sGrad = g;
	m_vPrihodi = vP;
}

void UgostiteljskiObjekt::PrikaziPrihode() const
{
	for (int i = 0; i < m_vPrihodi.size(); i++) 
	{
		cout << "Prihod iznosi: " << m_vPrihodi[i] << endl;
	}
}

void UgostiteljskiObjekt::PrikaziNajveciPrihod() const
{
	int max = m_vPrihodi[0];
	int mj = 0;
	for (int i = 0; i < m_vPrihodi.size(); i++) 
	{
		if (max < m_vPrihodi[i]) 
		{
			max = m_vPrihodi[i];
			mj = i;
		}
	}
	cout << "Najveci prihod je: " << max << "\nOstvaren u " << mj + 1 << " mjesecu" << endl;
};

bool UgostiteljskiObjekt::operator<(const UgostiteljskiObjekt& b) const 
{
	int zbroj1 = 0, zbroj2 = 0;
	for (int i = 0; i < m_vPrihodi.size(); i++)
	{
		zbroj1 += m_vPrihodi[i];
	}
	for (int i = 0; i < b.m_vPrihodi.size(); i++)
	{
		zbroj2 += b.m_vPrihodi[i];
	}
	if (zbroj1 < zbroj2) return true;
	else return false;
}

void UgostiteljskiObjekt::PrikaziNajmanjiPrihod() const 
{
	int min = m_vPrihodi[0];
	int mj = 0;
	for (int i = 0; i < m_vPrihodi.size(); i++)
	{
		if (min > m_vPrihodi[i])
		{
			min = m_vPrihodi[i];
			mj = i;
		}
	}
	cout << "Najmanji prihod je: " << min << "\nOstvaren u " << mj + 1 << " mjesecu" << endl;
}

void UgostiteljskiObjekt::PrikaziObjekt() const
{
	cout << "Naziv ugostiteljskog objekta: " << m_sNaziv << endl;
	cout << "Adresa ugostiteljskog objekta" << m_sAdresa << endl;
	cout << "-----------------------------------" << endl;
}

UgostiteljskiObjekt::~UgostiteljskiObjekt()
{
}
