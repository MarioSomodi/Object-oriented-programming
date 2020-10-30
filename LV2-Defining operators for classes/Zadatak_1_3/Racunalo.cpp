#include "Racunalo.h"

Racunalo::Racunalo(string nP, int ram, int hdd, int usb)
{
	m_sNazivProcesora = nP;
	m_nRAMUGB = ram;
	m_nHDDUGB = hdd;
	m_nUSB = usb;
};

void Racunalo::IspisiInformacije()
{
	cout << "Naziv procesora: " << m_sNazivProcesora << endl;
	cout << "Kolicina RAM memorije u GB: " << m_nRAMUGB << endl;
	cout << "Kolicina HDD memorije u GB: " << m_nHDDUGB << endl;
	cout << "Kolicina USB prikljucaka: " << m_nUSB << endl;
};

void Racunalo::PromjeniProcesor()
{
	getline(cin, m_sNazivProcesora);
};

void Racunalo::PromjeniRAM()
{
	cin >> m_nRAMUGB;
};

void Racunalo::PromjeniHDD()
{
	cin >> m_nHDDUGB;
};

/* Zadatak 2
void Racunalo::PromjeniProcesor(string nP) 
{
	m_sNazivProcesora = nP;
};

void Racunalo::PromjeniRAM(int ram) 
{
	m_nRAMUGB = ram;
};

void Racunalo::PromjeniHDD(int hdd) 
{
	m_nHDDUGB = hdd;
};
*/
Racunalo::~Racunalo()
{
};
