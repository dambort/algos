#include <iostream>
#include <stdlib.h>
using namespace std;

int mcd(int a, int b);
int mcm(int a, int b);

int main(int argc, char *argv[])
{
	int a, b, aux;
	
	cout << "Ingrese A y B para calcular su mcd: " << endl;
	cin >> a;
	cin >> b;
	a=abs(a);
	b=abs(b);
	if(a<b){
		aux=a;
		a=b;
		b=aux;
	}
	cout << "Su mcd es : " << mcd (a,b) << endl;
	cout << "Su mcm es: " << mcm(a,b) << endl;
	
	return 0;
}

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
