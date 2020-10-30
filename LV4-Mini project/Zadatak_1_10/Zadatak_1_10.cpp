#include "stdafx.h"
#include <iostream>
#include "Studij.h"
#include "Nastavnik.h"
#include "Student.h"
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	Studij* s1 = new Studij("Racunalstvo", 3);
	Studij* s2 = new Studij("Elektrotehnika", 3);
	Studij* s3 = new Studij("Menadzment", 3);

	Nastavnik n1("Pero", "Ivcic", 1967, s1, 2);
	Nastavnik n2("Ivan", "Koronic", 1989, s1, 1);
	Nastavnik n3("Kobra", "Manic", 1997, s2, 3);
	Nastavnik n4("Petar", "Mokolvic", 1956, s2, 2);
	Nastavnik n5("Ikona", "Picis", 1988, s3, 1);
	Nastavnik n6("Zoran", "Junar", 1989, s3, 3);

	Student Student1("Poko", "Solic", 1999, 347856348, s1, 1);
	Student Student2("Roko", "Usko", 1997, 1298364, s1, 2);
	Student Student3("Antonio", "Tolk", 1996, 3454256, s1, 1);
	Student Student4("Mario", "Lokov", 2000, 24338947, s2, 2);
	Student Student5("Marijana", "Okol", 1989, 124533246, s2, 3);
	Student Student6("Ivana", "Sokol", 1995, 864256234, s2, 2);
	Student Student7("Maja", "Nofko", 1999, 56765733, s3, 1);
	Student Student8("Matija", "Gork", 1996, 345346, s3, 3);
	Student Student9("Dario", "Fikoc", 1994, 54656747, s3, 1);

	vector<Studij*> vStudiji;
	vector <Nastavnik> vNastavnici;
	vector <Nastavnik> vElNastavnici;
	vector <Student> vStudenti;
	vector <Student> vBrucosi;

	vStudiji.push_back(s1);
	vStudiji.push_back(s2);
	vStudiji.push_back(s3);

	vNastavnici.push_back(n1);
	vNastavnici.push_back(n2);
	vNastavnici.push_back(n3);
	vNastavnici.push_back(n4);
	vNastavnici.push_back(n5);
	vNastavnici.push_back(n6);

	vStudenti.push_back(Student1);
	vStudenti.push_back(Student2);
	vStudenti.push_back(Student3);
	vStudenti.push_back(Student4);
	vStudenti.push_back(Student5);
	vStudenti.push_back(Student6);
	vStudenti.push_back(Student7);
	vStudenti.push_back(Student8);
	vStudenti.push_back(Student9);

	vector <Studij*>::iterator itStudij;
	vector <Nastavnik>::iterator itNastavnik;
	vector <Student>::iterator itStudent;

	cout << "Svi studiji: " << endl;
	cout << "-----------------------------------" << endl;
	for (itStudij = vStudiji.begin(); itStudij != vStudiji.end(); ++itStudij) 
	{
		(*itStudij)->DajStudijInfo();
	}
	cout << "-----------------------------------" << endl;
	cout << "Svi nastavnici: " << endl;
	cout << "-----------------------------------" << endl;
	for (itNastavnik = vNastavnici.begin(); itNastavnik != vNastavnici.end(); ++itNastavnik) 
	{
		itNastavnik->DajNastavnikInfo();
		if (itNastavnik->VratiNazivStudija() == "Elektrotehnika" && itNastavnik->VratiGodinuStudija() == 2) 
		{
			vElNastavnici.push_back(*itNastavnik);
		}
	}
	cout << "Svi studenti: " << endl;
	cout << "-----------------------------------" << endl;
	for (itStudent = vStudenti.begin(); itStudent != vStudenti.end(); ++itStudent) 
	{
		itStudent->DajStudentInfo();
		if (itStudent->VratiNazivStudija() == "Racunalstvo" && itStudent->VratiGodinuStudija() == 1) 
		{
			vBrucosi.push_back(*itStudent);
		}
	}
	cout << "Brucosi studija racunalstva" << endl;
	cout << "-----------------------------------" << endl;
	for (itStudent = vBrucosi.begin(); itStudent != vBrucosi.end(); ++itStudent) 
	{
		itStudent->DajStudentInfo();
	}
	cout << "Nastavnici elektrotehnike na 2. godini studija" << endl;
	cout << "-----------------------------------" << endl;
	for (itNastavnik = vElNastavnici.begin(); itNastavnik != vElNastavnici.end(); ++itNastavnik) 
	{
		itNastavnik->DajNastavnikInfo();
	}

	for (itStudent = vStudenti.begin(); itStudent != vStudenti.end(); ++itStudent) 
	{
		cout << "Student: " << endl;
		itStudent->DajStudentInfo();
		cout << "Predaju mu nastavnici: " << endl;
		cout << "-----------------------------------" << endl;
		for (itNastavnik = vNastavnici.begin(); itNastavnik != vNastavnici.end(); ++itNastavnik) 
		{
			if (itStudent->VratiNazivStudija() == itNastavnik->VratiNazivStudija() && itStudent->VratiGodinuStudija() == itNastavnik->VratiGodinuStudija())
			{
				itNastavnik->DajNastavnikInfo();
			}
		}
	}

	vStudiji.clear();
	vNastavnici.clear();
	vElNastavnici.clear();
	vStudenti.clear();
	vBrucosi.clear();

	delete s1, s2, s3;
	system("pause");
    return 0;
}

