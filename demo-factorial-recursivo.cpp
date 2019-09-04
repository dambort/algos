#include <iostream>
#include "factorial-recursivo.h"
using namespace std;

int main() 
{
	long long int n;
	cout << "ingrese un numero para calcular su factorial: ";
	cin >> n;
	
	if(n<0) {
		cout << "NO EXISTE FACTORIAL DE UN NUMERO NEGATIVO"<<endl;
		return 0;}
	
	cout << "su factorial es: " << factorial(n) << endl;
	
	return 0;
}
