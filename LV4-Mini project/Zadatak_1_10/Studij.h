#pragma once
#include <string>

using namespace std;

class Studij
{
public:
	Studij(string nS, int tS);
	~Studij();
	string m_sNazivStudija;
	int m_nTrajanjeStudija;
	void DajStudijInfo();
};

