#pragma once
#include <iostream>
#include <string>

using namespace std;

class Grad
{
public:
	Grad(string n, string z, int bS, float p);
	~Grad();
	void DajInformacije() const;
	bool operator<(const Grad &b) const;
private:
	string m_sNaziv, m_sZupanija;
	int m_nBrojStanovnika;
	float m_fPovrsina;
};

