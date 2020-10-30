#pragma once
#include <string>

using namespace std;

class GrafObj
{
public:
	GrafObj(string b);
	virtual ~GrafObj() {}

	virtual void Crtaj() = 0 {}
	virtual string DajTip() = 0 { return "tip"; }
	virtual double DajOpseg() = 0 { return 0; }
	virtual double DajPovrsinu() = 0 { return 0; }
	virtual string DajBoju() = 0 { return m_sBoja; }
	string m_sBoja;
};