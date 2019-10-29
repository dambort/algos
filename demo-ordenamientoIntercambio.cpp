#include <stdio.h>
#include <iostream>
#include <cstdlib>
#define TAM 50
using namespace std;
void intercambio (int vector[TAM], int longitud);

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
	
	intercambio(vector,longitud);
	
	cout<<"Orden de salida:"<<endl;
	for(int muestra=0;muestra<longitud;muestra++){
		cout<<vector[muestra]<<" ";
	}
	
	
	return 0;
}

void intercambio (int vector[TAM], int longitud){
	//La idea de este algoritmo es recorrer el vector n-1 veces, comparando la posicion
	//en la que estamos con el resto del vector e intercambiando valores de ser necesario
	//hasta que, al llegar al final, cada valor este en la posicion correcta
	int i, j;
	for (i = 0 ; i < longitud-1 ; i++){
		for (j = i+1 ; j < longitud ; j++){
			if (vector[i] > vector[j]){
				int aux;
				aux = vector[i];
				vector[i] = vector[j];
				vector[j]= aux ;}
		}
	}
}
