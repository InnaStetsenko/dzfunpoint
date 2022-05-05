#include <iostream>
#include <windows.h>
//#include <conio.h>
using namespace std;


void rect(int width, int height, int* sq, int* p)
{
*sq = width * height;
*p = (width + height) * 2;
}int main()
{
	int w = 4;
	int h = 3;
	int s;
	int p;
	rect(w, h, &s, &p);
}


