#include <iostream>
#include "Pravokutnik.h"

using namespace std;

int main()
{
    Pravokutnik* Pravokutnik1 = new Pravokutnik(4, 6);
    Pravokutnik* Pravokutnik2 = new Pravokutnik(7, 8);
    Pravokutnik* Pravokutnik3 = new Pravokutnik(12, 5);

    Pravokutnik1->IspisiOpseg();
    Pravokutnik1->IspisiPovrsinu();
    Pravokutnik2->IspisiOpseg();
    Pravokutnik2->IspisiPovrsinu();
    Pravokutnik3->IspisiOpseg();
    Pravokutnik3->IspisiPovrsinu();

    delete Pravokutnik1;
    delete Pravokutnik2;
    delete Pravokutnik3;
}