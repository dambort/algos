#include <iostream>
#include <stdlib.h>
using namespace std;

int mcd(int a, int b)
{
	int r=(a%b);
	if(r!=0)
	{
		return mcd(b,r);
	} 
	else 
	{
		return b;
	}
}

int mcm(int a, int b)
{
	return ((a*b)/mcd(a,b));
}
