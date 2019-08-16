#include <iostream> 
using namespace std; 

int BusquedaLineal(int vector[], int TL, int x){ 
	// La funcion retorna -1 si x no se encuentra en el vector
	// en otro caso retorna el valor del subindice donde esta x
	int i=0;
	
	while (i<TL) 
		if (vector[i] == x) return i;
		else i++;
	
	return -1;
}


