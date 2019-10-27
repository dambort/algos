#include <iostream>
//#include <cmath>
#include <iomanip>
#include <cstdlib>
#include "calcular-numero-e.h"

using namespace std;

double calcular_e(double aux);

int main(int argc, char *argv[]) {
	
	double x;
	
	cout << "ingrese el error arbitrario (mientras mas pequeño mas se aproximara a e): " << endl << endl;
	cin >> x;

	cout << "el valor de e utilizando la primer formula es: " 
		<< fixed << setprecision(10) << calcular_e_v1(x) << endl << endl;
	
	cout << "el valor de e utilizando la segunda formula es: " 
		<< fixed << setprecision(10) << calcular_e_v2(x) << endl;
	
	return 0;
}
