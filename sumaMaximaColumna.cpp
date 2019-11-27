#include <iostream>
#include <cstdlib>
#include <stdio.h>
#define TAM 20
using namespace std;

int sumaMaximaColumna(int matriz[TAM][TAM],int tamanio,int &suma){
	int sumaAux=0;
	int columna=0;
	//Esta funcion recibe como parametros la matriz completa, los limites 
	//de la matriz(tamanio) y un entero suma donde se cargar� la suma maxima
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
