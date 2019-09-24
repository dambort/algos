#include <iostream>
using namespace std;

int potenciaEntera(int base,int exp){
	//Recibimos la base y el exponente a la cual hay que elevarla. Luego declaramos una variable
	//prod que sera la que acumule la sucesion de productos que se realizaran
	//dentro del for.
	int prod=1;
	for(int i=0;i<exp;i++){
		prod=prod*base;
	}
	return prod;
}

