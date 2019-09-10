#include<iostream>
#include "triangulo.h"
using namespace std;

int main (int argc, char *argv[]) {
	int matriz[31][31],tam;
	cin >> tam;
	triangulo(matriz,tam);
	//Mostramos el resultaldo del triangulo.
	for(int i=0; i <= tam;i++){
		for(int j=0;j <= i;j++)
			cout << matriz[i][j] << " ";
			cout << endl;	
	}		
	return 0;
}

