#include <iostream>
using namespace std;

int busquedaBinariaRecursiva (float arr[], int izq, int der, double n){ 
	
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
