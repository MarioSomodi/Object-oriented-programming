#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class UgostiteljskiObjekt
{
public:
	UgostiteljskiObjekt(string n, int oib, float lat, float lng, string t, string rV, string a, string g, vector<int> vP);
	~UgostiteljskiObjekt();
	void PrikaziNajmanjiPrihod() const;
	void PrikaziPrihode() const;
	void PrikaziObjekt() const;
	void PrikaziNajveciPrihod() const;
	bool operator<(const UgostiteljskiObjekt& b) const;
private:
	string m_sNaziv, m_sTip, m_sRadnoVrijeme, m_sAdresa, m_sGrad;
	int m_nOIB;
	float m_fLat, m_fLng;
	vector<int> m_vPrihodi;
};

