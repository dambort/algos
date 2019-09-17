#include <iostream>
#include "sumatoria-con-formula.h"

using namespace std;

int main()
{		
	int n;
	cout << "ingrese un numero entero" << endl;
	cin >> n;
	
	cout << "la sumatoria desde 1 hasta " << n << " es " << sumatoria_con_formula(n) << endl;
	
	return n;
}
