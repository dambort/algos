#include<iostream>
using namespace std;
int triangulo(int matriz[][31],int tam){
	int aux;
	//En este for lo que hacemos es colocar 1 en la primera columna de toda la matriz y en su diagonal.
	// Esto representa los bordes del triangulo de Pascal.
	for(int i=0; i <= tam;i++){
		matriz[i][0] = 1;
		aux = i;
		matriz[i][aux] = 1;
	}
	//En este doble for lo que hacemos es la suma de los dos numeros superiores
	// Para luego asignar ese valor en la posicion actual en la matriz.
	for(int i=2; i <= tam;i++)
		for(int j=1;j < i;j++){
		matriz[i][j]= matriz[i-1][j-1] + matriz[i-1][j];
	}
}
