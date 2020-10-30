#include "stdafx.h"
#include <iostream>
#include "tinyxml2.h"
#include <vector>
#include "UgostiteljskiObjekt.h"
#include <stdlib.h>
#include <string>
#include <set>

using namespace std;
using namespace tinyxml2;

int main()
{
	vector<UgostiteljskiObjekt*> vUgostiteljskiObjekti;
	set<UgostiteljskiObjekt*> sUgostiteljskiObjekti;
	set<UgostiteljskiObjekt*>::iterator sPos;
	vector<UgostiteljskiObjekt*>::iterator iPos;

	XMLDocument oXmlDocument;
	oXmlDocument.LoadFile("ugostiteljskiobjekti.xml");

	XMLElement* pRoot = oXmlDocument.FirstChildElement("dataset");
	XMLElement* pChild;
	XMLElement* pChildPrihod;
	for (pChild = pRoot->FirstChildElement("Objekt"); pChild != NULL; pChild = pChild->NextSiblingElement())
	{
		string sNaziv = pChild->Attribute("naziv");
		int nOIB = atoi(pChild->Attribute("oib"));
		float fLat = stof(pChild->Attribute("lat"));
		float fLng = stof(pChild->Attribute("lng"));
		string sTip = pChild->Attribute("tip");
		string sRadnoVrijeme = pChild->Attribute("radno_vrijeme");
		string sAdresa = pChild->Attribute("adresa");
		string sGrad = pChild->Attribute("grad");

		vector<int> vPrihodi;

		for (pChildPrihod = pChild->FirstChildElement("Prihod"); pChildPrihod != NULL; pChildPrihod = pChildPrihod->NextSiblingElement())
		{
			vPrihodi.push_back(atoi(pChildPrihod->GetText()));
		}
		vUgostiteljskiObjekti.push_back(new UgostiteljskiObjekt(sNaziv, nOIB, fLat, fLng, sTip, sRadnoVrijeme, sAdresa, sGrad, vPrihodi));
		sUgostiteljskiObjekti.insert(new UgostiteljskiObjekt(sNaziv, nOIB, fLat, fLng, sTip, sRadnoVrijeme, sAdresa, sGrad, vPrihodi));
	}

	cout << "Pristup objektima vektora preko iteratora." << endl;
	cout << "-----------------------------------" << endl;
	for (iPos = vUgostiteljskiObjekti.begin(); iPos != vUgostiteljskiObjekti.end(); ++iPos)
	{
		(*iPos)->PrikaziObjekt();
		(*iPos)->PrikaziPrihode();
		(*iPos)->PrikaziNajveciPrihod();
		(*iPos)->PrikaziNajmanjiPrihod();
	}

	cout << "Pristup objektima seta preko iteratora." << endl;
	cout << "-----------------------------------" << endl;
	for (sPos = sUgostiteljskiObjekti.begin(); sPos != sUgostiteljskiObjekti.end(); ++sPos)
	{
		(*sPos)->PrikaziObjekt();
		(*sPos)->PrikaziPrihode();
		(*sPos)->PrikaziNajveciPrihod();
		(*sPos)->PrikaziNajmanjiPrihod();
	}

	system("pause");
    return 0;
}

