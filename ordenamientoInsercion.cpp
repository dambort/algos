#include <iostream>
using namespace std;

void insercion(int vector[TAM],int longitud){
	//Dado el vector desordenado, lo que haremos sera tomar el primer numero
	//que este mal ubicado y lo llevaremos hasta la posicion correcta relativa
	//hasta ese momento. Esto lo haremos hasta que hayamos procesado todo el vector.
	for(int i=1;i<longitud;i++){
		
		int aux= vector[i];
		int anterior= i-1;
		
		while((anterior>=0) && (vector[anterior]>aux)){
			vector[anterior+1] = vector[anterior];
			anterior--;
		}
		
		vector[anterior+1]=aux;
	}	
}
