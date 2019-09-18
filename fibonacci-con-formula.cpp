#include <iostream>
#include <cmath>
#include "fibonacci-con-formula.h"

using namespace std;

int fibonacci(int n)
{
	double a, b, c=sqrt(5);;
	
	a=(1+c)/2; a=pow(a,n);
	b=(1-c)/2; b=pow(b,n);
	
	n= ( a-b ) / c;

	return n;
}
