#include <iostream>
#include "añobisiesto.h"
using namespace std;
int main(){
	int Anio,resultado;
	cin >> Anio;
	resultado = aniobisiesto(Anio);
	if(resultado == 1)
		cout << "El a" << char(164) << "o es bisiesto." << endl;
	else
		cout << "El a" << char(164) << "o no es bisiesto." << endl;
	return 0;
}

