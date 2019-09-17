#include <iostream>
#include "sumatoria-iterativa.h"

using namespace std;

int main()
{		
	int n;
	cout << "ingrese un numero entero" << endl;
	cin >> n;
	
	cout << "la sumatoria desde 1 hasta " << n << " es " << sumatoria_iterativa(n) << endl;
	
	return n;
}
