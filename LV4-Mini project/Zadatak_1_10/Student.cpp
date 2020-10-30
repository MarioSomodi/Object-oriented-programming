#include "stdafx.h"
#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string i, string p, int gR, int j, Studij* s, int g) : Covjek(i, p, gR)
{
	m_nJmbag = j;
	m_pStudij = s;
	m_nGodina = g;
};

void Student::DajStudentInfo() 
{
	cout << "Jmbag: " << m_nJmbag << endl;
	cout << "Ime studenta: " << m_sIme << endl;
	cout << "Prezime studenta: " << m_sPrezime << endl;
	cout << "Pohada studij: " << m_pStudij->m_sNazivStudija << endl;
	cout << "Godina studija: " << m_nGodina << endl;
	cout << "///////////////////////////////////////////////" << endl;
};

string Student::VratiNazivStudija() 
{
	return m_pStudij->m_sNazivStudija;
};

int Student::VratiGodinuStudija() 
{
	return m_nGodina;
}

Student::~Student()
{
};
