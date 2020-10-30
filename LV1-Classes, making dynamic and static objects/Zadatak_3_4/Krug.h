#pragma once
class Krug
{
public:
	Krug(double p);
	~Krug();
	void IspisiOpseg();
	void IspisiPovrsinu();
private:
	double m_dPI = 3.14;
	double m_dRadijus;
};

