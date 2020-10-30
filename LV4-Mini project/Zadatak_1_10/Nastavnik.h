#pragma once
#include "Covjek.h"
#include "Studij.h"

class Nastavnik :
	public Covjek
{
public:
	Nastavnik(string i, string p, int gR, Studij* s, int g);
	~Nastavnik();
	void DajNastavnikInfo();
	string VratiNazivStudija();
	int VratiGodinuStudija();
private:
	Studij* m_pStudij;
	int m_nGodina;
};

