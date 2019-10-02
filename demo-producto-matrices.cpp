#include <iostream>
#include "producto.h"
using namespace std;
int main(int argc, char *argv[]) {
	int fila1,fila2,columna1,columna2,fila3,columna3;
	cin >> fila1 >> columna1
		>> fila2 >> columna2;
	//Se pregunta si la cantidad de filas de la primera matriz es igual a
	//  la cantidad de columnas de la segunda matriz
	if(columna1 == fila2){
		// Se crean dos matrices dinamicas para asignar los tamaños deseados por el usuario.
		int **matriz1 = new int*[fila1];
		int **matriz2 = new int*[fila2];
		for (int i = 0; i < fila1; i++)
			matriz1[i] = new int[columna1];
		for (int i = 0; i < fila2; i++)
			matriz2[i] = new int[columna2];
		// El usuario ingresa los valores para las 2 matrices
		llenarmatriz(matriz1,matriz2,fila1,columna1,fila2,columna2);
		//Asigno a fila3 y columna3 las dimensiones de la matriz resultante.
		fila3=fila1;
		columna3=columna2;
		//Creo la matriz resultante con sus filas y columnas correspondientes
		int **resultado = new int*[fila3];
		for (int i = 0; i < fila3; i++) {
			resultado[i] = new int[columna3];
		}
		// Esta funcion "producto" realizara el producto de matrices.
		producto(matriz1,matriz2,resultado,fila2,fila3,columna3);
		// Con esta funcion se muestra la matriz resultante
		mostrarmatriz(resultado,fila3,columna3);
	}
	else
	   cout << "Las matrices no cumplen con los requisitos para realizar el producto" << endl;
	return 0;
}
