#include <iostream>

using namespace std;

unsigned long long num_reverso(unsigned long long num)
{
	//la funcion devuelve el reverso de un numero
	unsigned long long digitos=1, resto, cociente, aux=num;
	
	if (num<10) return num;		// Devuelve el ultimo digito
	
	else{
		
		while(aux>=10){
			aux= aux/10;
			digitos= digitos*10;
		}	//se calculan los digitos del numero
		
		resto = num % 10;
		cociente = num / 10;
		//se concatenan los digitos en orden inverso
		return resto*digitos + num_reverso(cociente);	
	}
}
