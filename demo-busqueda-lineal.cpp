#include <iostream> 
#include "enciclopedia.h"
using namespace std; 


int main(void){ 
	int vector[] = { 2, 3, 4, 10, 40 }; 
	int x = 4; 
	int TL = sizeof(vector) / sizeof(vector[0]); 
	
	int resultado = BusquedaLineal(vector, TL, x); 
	
	if (resultado == -1)
		cout << x << " no se encuentra en el vector";
	else
		cout << x << " se encuentra en la posicion " << resultado;
	
	return 0; 
} 

