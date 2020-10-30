#pragma once
#include <iostream>

using namespace std;

class Kvadar
{
public:
	Kvadar(float a, float b, float c);
	~Kvadar();
	float DajOplosje();
	float DajObujam();
	bool operator>(const Kvadar& b);
	bool operator!=(const Kvadar& c);
private:
	float m_nStranicaA;
	float m_nStranicaB;
	float m_nStranicaC;
};