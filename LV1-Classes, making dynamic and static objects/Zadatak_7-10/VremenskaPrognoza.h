#pragma once
class VremenskaPrognoza
{
public:
	VremenskaPrognoza(int dT[30]);
	~VremenskaPrognoza();
	void DajSrednjuMjesecnuTemperaturu();
private:
	int m_nDnevneTemperature[30];
};