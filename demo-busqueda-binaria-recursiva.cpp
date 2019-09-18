#include <iostream>
using namespace std;

int busquedaBinariaRecursiva (double arr[], int izq, int der, double n);

int main() {
	int tam, pos;
	double n, *arr;
	cout << "Ingrese el tamaño del arreglo a ingresar: ";
	
	cin >> tam;
	arr = new double [tam];
	
	cout << endl << "Ingrese los valores del arreglo, de forma ordenada de menor a mayor: " << endl;
	
	for (int i=0; i<tam; i++){
		cin >> arr[i];
	}
	
	cout << endl << "Ingrese el número a buscar: ";
	cin >> n;
	
	pos=busquedaBinariaRecursiva(arr, 0, tam-1, n);
	
	if (pos==-1){
		cout << endl << "El elemento buscado no se encuentra en el arreglo.";
	} else {
		cout << endl << "El elemento buscado se encuentra en la posicion " << pos << ".";
	}
	
	return 0;
}

int busquedaBinariaRecursiva (double arr[], int izq, int der, double n){ 
	
	if (izq <= der) { 
		
		int med = izq + (der - izq) / 2; 
		
		if (arr[med] == n){
			return med;
		} else {
			if (arr[med] < n){
				return busquedaBinariaRecursiva(arr, med+1, der, n);
				izq = med + 1; 
			}
			else {
				return busquedaBinariaRecursiva (arr, izq, med-1, n);
			}
		}
		
	}
	
	
	return -1;
} 

