#include <iostream>
#include "Krug.h"

using namespace std;

int main()
{
	Krug Krug1(5.34);
	Krug Krug2(53.34);
	Krug Krug3(15.34);

	Krug1.IspisiOpseg();
	Krug1.IspisiPovrsinu();
	Krug2.IspisiOpseg();
	Krug2.IspisiPovrsinu();
	Krug3.IspisiOpseg();
	Krug3.IspisiPovrsinu();
}