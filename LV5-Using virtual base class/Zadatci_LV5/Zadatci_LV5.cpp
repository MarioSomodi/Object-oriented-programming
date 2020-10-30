#include "stdafx.h"
#include <iostream>
#include "Krug.h"
#include "Trokut.h"
#include "Kvadrat.h"
#include <vector>
#include "tinyxml2.h"
#include <iterator>
#include <algorithm>

using namespace tinyxml2;
using namespace std;

int main()
{
	/* Testing
	Krug k1(12.23, "plavi");

	cout << k1.DajOpseg() << endl;
	cout << k1.DajPovrsinu() << endl;
	cout << k1.DajTip() << endl;
	cout << k1.DajBoju() << endl;
	k1.Crtaj();

	Trokut t1(34.23, "crveni");

	cout << t1.DajOpseg() << endl;
	cout << t1.DajPovrsinu() << endl;
	cout << t1.DajTip() << endl;
	cout << t1.DajBoju() << endl;
	t1.Crtaj();

	Kvadrat kv1(16.23, "zeleni");

	cout << kv1.DajOpseg() << endl;
	cout << kv1.DajPovrsinu() << endl;
	cout << kv1.DajTip() << endl;
	cout << kv1.DajBoju() << endl;
	kv1.Crtaj();
	*/

	vector<GrafObj*> vGrafOkjeti;
	vector<string> vBoje;
	vector<GrafObj*>::iterator itGrafObjekti;

	XMLDocument oXmlDocument;
	oXmlDocument.LoadFile("grafickiobjekti.xml");
	XMLElement* pRoot = oXmlDocument.FirstChildElement("dataset");
	XMLElement* pChild;
	XMLElement* Krugovi;
	XMLElement* Kvadrati;
	XMLElement* Trokuti;
	for (pChild = pRoot->FirstChildElement("Krugovi"); pChild != NULL; pChild = pChild->NextSiblingElement())
	{
		for (Krugovi = pChild->FirstChildElement("Krug"); Krugovi != NULL; Krugovi = Krugovi->NextSiblingElement())
		{
			double dPolumjer = stod(Krugovi->Attribute("polumjer"));
			string sBoja = Krugovi->Attribute("boja");
			vGrafOkjeti.push_back(new Krug(dPolumjer, sBoja));
		}
		for (Kvadrati = pChild->FirstChildElement("Kvadrat"); Kvadrati != NULL; Kvadrati = Kvadrati->NextSiblingElement())
		{
			double dStranica = stod(Kvadrati->Attribute("stranica"));
			string sBoja = Kvadrati->Attribute("boja");
			vGrafOkjeti.push_back(new Kvadrat(dStranica, sBoja));
		}
		for (Trokuti = pChild->FirstChildElement("Trokut"); Trokuti != NULL; Trokuti = Trokuti->NextSiblingElement())
		{
			double dStranica = stod(Trokuti->Attribute("stranica"));
			string sBoja = Trokuti->Attribute("boja");
			vGrafOkjeti.push_back(new Trokut(dStranica, sBoja));
		}
	}
	
	for (itGrafObjekti = vGrafOkjeti.begin(); itGrafObjekti != vGrafOkjeti.end(); ++itGrafObjekti)
	{
		bool sadrzi = false;
		(*itGrafObjekti)->Crtaj();
		string b = (*itGrafObjekti)->DajBoju();
		for (int i = 0; i < vBoje.size(); i++)
		{
			if (vBoje[i] == b) 
			{
				sadrzi = true;
			}
		}
		if (sadrzi == false) 
		{
			vBoje.push_back(b);
		}
	}
	double dMaxPovrsina = 0, dPovrsinaKrugova = 0, dPovrsinaKvadrata = 0, dPovrsinaTrokuta = 0;
	double mPovrsina = 0, mOpseg = 0, nPovrsina = 1000000, nOpseg = 0;
	string boja, nBoja, mBoja, mTip, nTip;
	for (int i = 0; i < vBoje.size();i++) 
	{
		double dUkupnaPovrsina = 0;
		for (itGrafObjekti = vGrafOkjeti.begin(); itGrafObjekti != vGrafOkjeti.end(); ++itGrafObjekti)
		{
			if ((*itGrafObjekti)->DajBoju() == vBoje[i])
			{
				dUkupnaPovrsina += (*itGrafObjekti)->DajPovrsinu();
			}
			if ((*itGrafObjekti)->DajTip() == "Krug") 
			{
				dPovrsinaKrugova += (*itGrafObjekti)->DajPovrsinu();
			}
			if ((*itGrafObjekti)->DajTip() == "kvadrat")
			{
				dPovrsinaKvadrata += (*itGrafObjekti)->DajPovrsinu();
			}
			if ((*itGrafObjekti)->DajTip() == "trokut")
			{
				dPovrsinaTrokuta += (*itGrafObjekti)->DajPovrsinu();
			}
			if (mPovrsina < (*itGrafObjekti)->DajPovrsinu()) 
			{
				mPovrsina = (*itGrafObjekti)->DajPovrsinu();
				mOpseg = (*itGrafObjekti)->DajOpseg();
				mTip = (*itGrafObjekti)->DajTip();
				mBoja = (*itGrafObjekti)->DajBoju();
			}
			if (nPovrsina > (*itGrafObjekti)->DajPovrsinu())
			{
				nPovrsina = (*itGrafObjekti)->DajPovrsinu();
				nOpseg = (*itGrafObjekti)->DajOpseg();
				nTip = (*itGrafObjekti)->DajTip();
				nBoja = (*itGrafObjekti)->DajBoju();
			}
		}
		cout << vBoje[i] << " objekti zauzimaju povrsinu od " << dUkupnaPovrsina << " m2" << endl;
		if (dMaxPovrsina < dUkupnaPovrsina) 
		{
			dMaxPovrsina = dUkupnaPovrsina;
			boja = vBoje[i];
		}
	}
	cout << boja << " objekti zauzimaju najvise povrsine ukupno " << dMaxPovrsina << " m2" << endl;
	if (dPovrsinaKrugova < dPovrsinaKvadrata && dPovrsinaKrugova < dPovrsinaTrokuta) 
	{
		cout << "Najmanje zauzimaju krugovi sa povrsinom od " << dPovrsinaKrugova << endl;
	}
	else if(dPovrsinaKvadrata < dPovrsinaKrugova && dPovrsinaKvadrata < dPovrsinaTrokuta)
	{
		cout << "Najmanje zauzimaju kvadrati sa povrsinom od " << dPovrsinaKvadrata << endl;
	}
	else if (dPovrsinaTrokuta < dPovrsinaKrugova && dPovrsinaTrokuta < dPovrsinaKvadrata)
	{
		cout << "Najmanje zauzimaju kvadrati sa povrsinom od " << dPovrsinaTrokuta << endl;
	}

	cout << "Najveci objekt" << endl;
	cout << "Tip: " << mTip << endl;
	cout << "Povrsina: " << mPovrsina << endl;
	cout << "Opseg: " << mOpseg << endl;
	cout << "Boja: " << mBoja << endl;

	cout << "Najmanji objekt" << endl;
	cout << "Tip: " << nTip << endl;
	cout << "Povrsina: " << nPovrsina << endl;
	cout << "Opseg: " << nOpseg << endl;
	cout << "Boja: " << nBoja << endl;

	system("pause");
	}