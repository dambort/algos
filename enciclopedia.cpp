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

void cribaEratostenes (int n){
	//Se crea un vector booleano de n+1 elementos
	bool* primo;
	primo = new bool [n+1];
	
	//Se inicializa cada elemento en "true"
	for(int i=0; i<n+1; i++){
		primo[i]=true;
	}
	
	//Partiendo del primer primo (2) se asigna "false" a todos sus múltiplos
	//Luego, se repite el proceso con el siguiente primo, es decir, el siguiente número con valor "true"
	//El proceso se repite para todos los números p, tal que p*p<=n
	for (int p=2; p*p<=n; p++){
		if (primo[p] == true){
			for (int i=p*p; i<=n; i+=p){
				primo[i]=false;
			}
		}
	}
	
	//Se imprimen en pantalla todos los primos encontrados
	for (int p=2; p<=n; p++){
		if(primo[p]){
			cout << p << " ";
		}
	}
	
	delete [] primo;
	primo=NULL;
}
