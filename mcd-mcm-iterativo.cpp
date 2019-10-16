#include <iostream>
#include <stdlib.h>
using namespace std;

int mcd(int a, int b)
{
	int aux, r=(a%b);
	
	while (r!=0)
	{
		aux=b;
		b=a%b;
		a=aux;
		r=(a%b);
	}
	
	return b;
}
int mcm(int a, int b) 
{
	return ((a*b)/mcd(a,b));
}

