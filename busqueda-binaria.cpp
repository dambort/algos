#include "busqueda-binaria.h"

int BusquedaBinaria(int vector[], int TL, int dato) {
	int centro, izq=0, der=TL-1;
	
	while(izq<=der){
		centro= (der-izq)/2 +izq;
		if(vector[centro]==dato)       
			return centro;
		else 
			if(dato < vector[centro]) 
				der=centro-1;
			else                           
				izq=centro+1;
	}
	return -1;
}
