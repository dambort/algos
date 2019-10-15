#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#define TAM 50
using namespace std;

void quicksort(int *vector, int inicio, int fin);
int dividir(int *vector, int inicio, int fin);


int main(){
	int vector[TAM];
	int longitud;
	for(int i=0;i<TAM;i++){
		vector[i]=0;
	}
	cout<<"Ingrese el tamaño del vector (Max 50): ";
	cin>>longitud;
	system("cls");
	
	for(int cont=0;cont<longitud;cont++){
		
		cout<<"Rellene el vector con los numeros a ordenar de menor a mayor :"<<endl;
		
		for(int muestra=0;muestra<cont;muestra++){
			cout<<vector[muestra]<<" ";
		}
		
		cin>>vector[cont];
		system("cls");
	}
	
	cout<<"Orden de entrada:"<<endl;
	for(int muestra=0;muestra<longitud;muestra++){
		cout<<vector[muestra]<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	quicksort(vector, 0, longitud - 1);

	cout<<"Orden de salida:"<<endl;
	for(int muestra=0;muestra<longitud;muestra++){
		cout<<vector[muestra]<<" ";
	}
	
	return 0;
}



int dividir(int *vector, int inicio, int fin) {
	// Función para dividir el array y hacer los intercambios
	int izq;
	int der;
	int pivot;
	int aux;
	
	pivot= vector[inicio];
	izq=inicio;
	der=fin;
	
	// Mientras no se cruzen los índices
	while (izq < der) {
		while (vector[der] > pivot) {
			der--;
		}
		
		while ((izq < der) && (vector[izq] <= pivot)) {
			izq++;
		}
		
		// Si todavía no se cruzan los indices seguimos intercambiando
		if (izq < der) {
			aux = vector[izq];
			vector[izq] = vector[der];
			vector[der]=aux;
		}
	}
	
	// Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
	aux = vector[der];
	vector[der] = vector[inicio];
	vector[inicio] = aux;
	
	// La nueva posición del pivot
	return der;
}


void quicksort(int *vector, int inicio, int fin){
	// Función recursiva para hacer el ordenamiento
	int pivot;
	
	if (inicio < fin) {
		pivot = dividir(vector, inicio, fin);
		
		// Ordeno la lista de los menores
		quicksort(vector, inicio, pivot - 1);
		
		// Ordeno la lista de los mayores
		quicksort(vector, pivot + 1, fin);
	}
}
