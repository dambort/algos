#include <iostream>
#include <cstdlib>
#include <stdio.h>
#define TAM 50
using namespace std;

int sumaMaxima(int arreglo[TAM],int longitud);
	

int main(int argc, char *argv[]) {
	int n;
	
	cout<<"Ingrese el tamaño del vector (Max 50): ";
	cin>>n;
	system("cls");
	int arreglo[TAM];
	for(int cont=0;cont<n;cont++){
		
		cout<<"Rellene el vector: "<<endl;
		
		for(int muestra=0;muestra<cont;muestra++){
			cout<<arreglo[muestra]<<" ";
		}
		
		cin>>arreglo[cont];
		system("cls");
	}
	
	int sumaM=sumaMaxima(arreglo,n);
	cout<<"Arreglo : ";
	for(int cont=0;cont<n;cont++){
		cout<<arreglo[cont]<<" ";		
	}
	cout<<endl;
	cout<<"La mayor suma de elementos consecutivos en el arreglo tiene un resultado de "<<sumaM<<endl;
	
	return 0;
}
int sumaMaxima(int arreglo[TAM],int longitud){
	int sum=0,best=0;
	for(int k=0;k < longitud;k++){
		sum = max(arreglo[k],sum+arreglo[k]);
		best = max(best,sum);
	}
	
	return best;
}
