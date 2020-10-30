#pragma once
#include "GrafObj.h"
class Kvadrat :
	public GrafObj
{
public:
	Kvadrat(double dSK, string bK);
	virtual ~Kvadrat();
	virtual double DajOpseg();
	virtual double DajPovrsinu();
	virtual string DajTip();
	virtual string DajBoju();
	virtual void Crtaj();
protected:
	double m_dStranicaKvadrata;
};

