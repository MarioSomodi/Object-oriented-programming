#pragma once
#include <iostream>
#include <string>

using namespace std;

class Racunalo
{
public:
	Racunalo(string nP, int ram, int hdd, int usb);
	~Racunalo();
	void IspisiInformacije();
	void PromjeniProcesor();
	void PromjeniRAM();
	void PromjeniHDD();
	/* Zadatak 2
	void PromjeniProcesor(string nP);
	void PromjeniRAM(int ram);
	void PromjeniHDD(int hdd);
	*/
private:
	string m_sNazivProcesora;
	int m_nRAMUGB;
	int m_nHDDUGB;
	int m_nUSB;
};

