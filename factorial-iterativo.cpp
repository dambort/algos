#include <iostream>

using namespace std;

long long unsigned factorial(long long unsigned n)
{
	long long unsigned aux=1; //a aux se le asigna el valor del caso base (0!=1)
	
	for(int i=1; i<=n; i++){
		// a aux se le asigna el factorial ya calculado (aux) multiplicado por n (valor de i)
		aux= (aux)*i; // [n! = (n-1)! * n]
	}
	
	n=aux;
	return n;
}
