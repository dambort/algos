#include <iostream>
#include <cstdlib>
#include <stdio.h>
#define TAM 20
using namespace std;

int sumaMaximaColumna(int matriz[TAM][TAM],int tamanio,int &suma);

int main() {
	int matriz[TAM][TAM],tamanio;
	cout<<"Ingrese el tamaño de la matriz: ";
	cin>>tamanio;
	system("cls");
	for(int i=0;i<TAM;i++){
		for(int j=0;i<TAM;i++){
			matriz[i][j]=0;
		}
	}
	//Declaramos y seteamos una matriz de TAMxTAM para luego rellenarla
	//con sus valores dentro del rango de tamanioXtamanio
	for(int i=0;i<tamanio;i++){
		int j=0;
		for(int cont=0;cont<tamanio;cont++){
			cout<<"Rellene la Matriz :"<<endl;
			for(int muestra=0;muestra<cont;muestra++){
				cout<<matriz[i][muestra]<<" ";
			}
			cin>>matriz[i][cont];
			system("cls");
			j++;
		}
		
	}
	int suma=0;
	//declaramos una variable suma que sera parametro por referencia de 
	//la funcion sumaMaximaColumna
	int columna=sumaMaximaColumna(matriz,tamanio,suma);
		
	cout<<"La columna con la maxima suma es la columna "<<columna+1<<", cuyos valores suman "<<suma<<endl;
	
	
	
	
	return 0;
}

int sumaMaximaColumna(int matriz[TAM][TAM],int tamanio,int &suma){
	int sumaAux=0;
	int columna=0;
	//Esta funcion recibe como parametros la matriz completa, los limites 
	//de la matriz(tamanio) y un entero suma donde se cargará la suma maxima
	//de la columna i. Ahora recorreremos la matriz columna a columna calculando la suma
	// y su resulta mayor a la que tenemos almacenada, se sobrescribiran estos
	//valores.
	for(int i=0;i<tamanio;i++){
		for(int j=0;j<tamanio;j++){
			sumaAux=sumaAux+matriz[j][i];
		}
		if(sumaAux>suma){
			suma=sumaAux;
			columna=i;
		}
		sumaAux=0;
	}
	return columna;
}

