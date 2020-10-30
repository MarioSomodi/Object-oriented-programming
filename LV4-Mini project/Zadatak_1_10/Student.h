#pragma once
#include "Covjek.h"
#include "Studij.h"

class Student :
	public Covjek
{
public:
	Student(string i, string p, int gR, int j, Studij* s, int g);
	~Student();
	void DajStudentInfo();
	string VratiNazivStudija();
	int VratiGodinuStudija();
private:
	int m_nJmbag;
	Studij* m_pStudij;
	int m_nGodina;
};

