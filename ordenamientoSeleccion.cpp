#include <iostream>
using namespace std;

void seleccion(int vector[TAM],int longitud){
	int min;
	//El algoritmo consiste en pararse en cada posicion del arreglo y desde
	//ese lugar buscar la menor en las restantes posiciones, si existe se intercambia
	//con la posicion actual, en otro caso, se pasa a la siguiente posicion y se 
	//repite
	for(int i=0;i<longitud;i++){
		min=i;
		for(int j=i;j<longitud;j++){
			
			if(vector[j]<vector[min]){
				min=j;
			}
			
		}
		int aux=vector[i];
		vector[i]=vector[min];
		vector[min]=aux;
		
	}
	
	
	
}

