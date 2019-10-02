#include <iostream>
using namespace std;
void producto(int *matriz1[],int *matriz2[],int *resultado[],int fila2,int fila3,int columna3){
	for(int i = 0; i < fila3; i++)
		for(int j = 0; j < columna3;j++)
			resultado[i][j] = 0;
	for(int f=0;f < fila3;f++)
		for(int c=0;c < columna3;c++)
			for(int k=0; k < fila2; k++) 
				resultado[f][c] += matriz1[f][k] * matriz2[k][c];
}

void llenarmatriz(int *matriz1[],int *matriz2[],int fila1,int columna1,int fila2,int columna2){
	for(int f=0; f < fila1; f++)
		for(int c=0; c < columna1; c++)
			cin >> matriz1[f][c];
	for(int f=0; f < fila2; f++)
		for(int c=0; c < columna2; c++)
			cin >> matriz2[f][c];
	}	
void mostrarmatriz(int *resultado[],int fila3,int columna3){
	cout << endl << "Matriz Resultante: " << endl << endl;
	for(int f=0; f < fila3; f++){
		for(int c=0; c < columna3; c++)
			cout << " " << resultado[f][c] << " ";
			cout << endl << endl;
	}
}
	
