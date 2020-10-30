#pragma once
#include "GrafObj.h"
class Krug :
	public GrafObj
{
public:
	Krug(double pK, string bK);
	virtual ~Krug();
	virtual double DajOpseg();
	virtual double DajPovrsinu();
	virtual string DajTip();
	virtual string DajBoju();
	virtual void Crtaj();
protected:
	double m_dPolumjerKruznice;
};

