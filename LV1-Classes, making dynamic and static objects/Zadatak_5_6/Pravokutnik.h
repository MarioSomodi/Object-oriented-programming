#pragma once
class Pravokutnik
{
public:
	Pravokutnik(double dSA, double dSB);
	~Pravokutnik();
	void IspisiOpseg();
	void IspisiPovrsinu();
private:
	double m_dDuljinaStraniceA;
	double m_dDuljinaStraniceB;
};