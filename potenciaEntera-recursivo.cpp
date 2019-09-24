#include <iostream>
using namespace std;

int potenciaEnteraRecursiva(int base,int exp){
	//La recursion es un recurso que se suele utilizar cuando se tiene
	//un problema con caracteristicas repetitivas, en este caso, el multiplicar
	//un numero una cantidad determinada de veces. La solucion consiste en devolver
	//el producto de la base multiplicado con la base elevado a la n-1, una vez que
	//este exponente llegue a 0, retornara 1 y se efecturará la operacion.
	if(exp==0){
		return 1;
	}else{
		return base*potenciaEnteraRecursiva(base,exp-1);
	}
}

