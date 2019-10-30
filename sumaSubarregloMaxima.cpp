#include <iostream>
#include <cstdlib>
#include <stdio.h>
#define TAM 50
using namespace std;

int sumaMaxima(int arreglo[TAM],int longitud){
	int sum=0,best=0;
	for(int k=0;k < longitud;k++){
		sum = max(arreglo[k],sum+arreglo[k]);
		best = max(best,sum);
	}
	
	return best;
}
