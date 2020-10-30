#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "VremenskaPrognoza.h"

using namespace std;

int main()
{
    srand(time(NULL));
    int nSijecanj[30], nVeljaca[30], nOzujak[30], nTravanj[30];
    
    for (int i = 0; i < 30; i++)
    {
        nSijecanj[i] = rand() % 30 + 1;
        nVeljaca[i] = rand() % 30 + 1;
        nOzujak[i] = rand() % 30 + 1;
        nTravanj[i] = rand() % 30 + 1;
    }

    VremenskaPrognoza Sijecanj(nSijecanj);
    VremenskaPrognoza Veljaca(nVeljaca);
    VremenskaPrognoza Ozujak(nOzujak);
    VremenskaPrognoza Travanj(nTravanj);

    Sijecanj.DajSrednjuMjesecnuTemperaturu();
    Veljaca.DajSrednjuMjesecnuTemperaturu();
    Ozujak.DajSrednjuMjesecnuTemperaturu();
    Travanj.DajSrednjuMjesecnuTemperaturu();
}