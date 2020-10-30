#pragma once
#include "GrafObj.h"
class Trokut :
	public GrafObj
{
public:
	Trokut(double dST, string bT);
	virtual ~Trokut();
	virtual double DajOpseg();
	virtual double DajPovrsinu();
	virtual string DajTip();
	virtual string DajBoju();
	virtual void Crtaj();
protected:
	double m_dStranicaJenakoStrTrokuta;
};

