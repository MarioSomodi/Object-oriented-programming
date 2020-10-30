#pragma once
#include <istream>
#include <string>

using namespace std;

class Covjek
{
public:
	Covjek(string i, string p, int gR);
	~Covjek();
	string m_sIme;
	string m_sPrezime;
	int m_nGodinaRodjenja;
	void DajImePrezime();
};

