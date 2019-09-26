#include <iostream>
using namespace std;

int BusquedaBinaria(int [], int, int );

int main(void) { 
	int vector[] = { 2, 3, 4, 10, 40 }; 
	int n = sizeof(vector) / sizeof(vector[0]); 
	
	int x = 50; 
	int resultado = BusquedaBinaria(vector, n, x); 
	
	if (resultado != -1)
		cout << "El elemento se encuentra en la posición: " << resultado;
	else
		cout << "El elemento no se encuentra en el vector." << endl;
		
	return 0; 
} 

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
