#include <stdio.h>
#include <iostream>
#include <cstdlib>
#define TAM 50
using namespace std;



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


