#include <iostream>
#include <cmath>
using namespace std;

int esPrimo(int n){
	int raizN;
	
	//	Para este algoritmo nos valemos de una propiedad matematica
	//	que establece que un numero sera primo si no es divisible por
	//	los primeros x primos menores que la raiz del numero principal.

	raizN=sqrt(n);
	
	//Seteamos un bool que modificaremos de ser necesario durante
	//la ejecucion.
	
	bool esPrimo=true;
	
	//Vamos a comprobar si el numero n es primo intentando dividirlo
	//enteramente por todos los valores menores que su raiz cuadrada
	
	for(int i=2;i<=raizN;i++){
		if(n%i==0){
			esPrimo=false;
			break;
		}
	}
	
	int retorno=0;
	
	if(esPrimo){
		//el numero es primo
		retorno=1;
	}else{
		//el numero no es primo
		retorno=-1;
	}
	
	
	return retorno;
}
