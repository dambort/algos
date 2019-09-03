#include <iostream>
using namespace std;

int esPrimo(int n){
	
	//Recibimos un numero entero n el cual queremos
	//saber si es primo
	//la funcion retornará 1 si es el numero es primo, en caso
	//contrario retornará -1
	
	bool esPrimo=true;
	
	//Seteamos un booleano, el cual
	//cambiaremos si es necesario durante la ejecucion
	
	for(int i=2;i<n;i++){
		if(n%i==0){
			esPrimo=false;
			break;
		}
	}
	int retorno;
	if(esPrimo){
		//el numero n es primo
		retorno=1;
	}else{
		//el numero n no es primo
		retorno=-1;
	}
	
	return retorno;
}

