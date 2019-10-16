#include<iostream>
#include "aproximacionpi.h"
using namespace std;
int main (){
	int x;
	double pi;
	cin >> x;
	if(x > 0 && x <= 250000){
	// El valor X indica la cantidad de terminos para la formula	
	pi = CalculoPi(x);
	// en Pi se guarda el valor de aproximacion de pi segun la formula
	cout << "Aproximacion de Pi: " << pi << endl;
	}
	else
	   cout << "Valor ingresado incorrecto" << endl;
	return 0;
}
