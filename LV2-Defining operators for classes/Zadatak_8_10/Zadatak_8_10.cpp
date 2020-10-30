#include <iostream>
#include "KompleksniBroj.h"

int main()
{
	KompleksniBroj kb1(2, 3);
	KompleksniBroj kb2(5, 6);
	KompleksniBroj kb3(0, 0);
	KompleksniBroj kb4(6, 2);
	KompleksniBroj kb5(3, 3);
	KompleksniBroj kbZbroj(0, 0);
	KompleksniBroj kbRazlika(0, 0);
	KompleksniBroj kbUmnozak(0, 0);

	kb1.IspisiKompleksniBroj();
	kb2.IspisiKompleksniBroj();
	kb3 = kb2;
	kb3.IspisiKompleksniBroj();

	kbZbroj = kb4 + kb5;
	kbRazlika = kb5 - kb4;
	kbUmnozak = kb4 * kb5;

	cout << "Zbroj kompleksnih brojeva je: ";
	kbZbroj.IspisiKompleksniBroj();
	cout << "Razlika kompleksnih brojeva je: ";
	kbRazlika.IspisiKompleksniBroj();
	cout << "Umnozak kompleksnih brojeva je: ";
	kbUmnozak.IspisiKompleksniBroj();

	cout << "Apsolutna vrijednost kompleksnog broja kb3 je: ";
	kb3.ApsolutnaVrijednost();
}