//#include <iostream>
//#include <cmath>
//#include <cstdlib>
#include "calcular-numero-e.h"

double calcular_e_v1(double aux)
{
	bool bandera=true;
	int cont=1;
	double sum_e=1, aux_sum=1, factorial=1;
	
	aux=abs(aux);
	
	while(bandera){
		
		//tambien se puede saber el valor de cada termino con valor mayor al error ingresado 
		//cout << "valor del termino " << cont << " es: " << aux_sum << endl;
		
		factorial= factorial*cont;
		
		aux_sum=(1/factorial);
		
		if(aux_sum >= aux){
			
			sum_e += aux_sum;
		}
		else bandera=false;
		
		cont++;
	}
	
	return sum_e;
}

double calcular_e_v2(double aux)
{
	bool bandera=true;
	int cont=1;
	double sum_e=0, aux_sum, factorial=1;
	
	aux=abs(aux);
	
	while(bandera){
		
		factorial= factorial*cont;
		
		aux_sum=( (cont * cont) / (2* factorial) );
		
		if(aux_sum >= aux){
			
			sum_e += aux_sum;
		}
		else bandera=false;
		
		//tambien se puede saber el valor de cada termino con valor mayor al error ingresado
		//cout << "valor del termino " << cont << " es: " << aux_sum << endl;
		
		cont++;
	}
	
	return sum_e;
}
