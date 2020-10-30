#pragma once
class KompleksniBroj
{
public:
	KompleksniBroj(int rD, int iD);
	~KompleksniBroj();
	void IspisiKompleksniBroj();
private:
	int m_nRealniDio;
	int m_nImaginarniDio;
};