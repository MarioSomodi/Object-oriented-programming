#include <iostream>
#include "KompleksniBroj.h"

using namespace std;

int main()
{
    KompleksniBroj Broj1(1, 2);
    KompleksniBroj Broj2(3, 4);
    KompleksniBroj Broj3(5, 6);
    KompleksniBroj Broj4(7, 8);
    KompleksniBroj Broj5(9, 10);

    Broj1.IspisiKompleksniBroj();
    Broj2.IspisiKompleksniBroj();
    Broj3.IspisiKompleksniBroj();
    Broj4.IspisiKompleksniBroj();
    Broj5.IspisiKompleksniBroj();
}