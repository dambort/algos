//Pasar de binario a decimal en C++
//Conversión de decimal a binario, octal, hexa y viceversa

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string.h>
#include <cstring>
#include <algorithm>
#include "conversion-de-bases.h"

using namespace std;

string convertir_base(string num1, int b_entrada, int b_salida)
{
	int num2;
	string salida_b;	

	if(b_entrada!=10){
		
		//BASE A DECIMAL //DEVUELVE ENTERO (Lo paso a cadena)
		if (b_salida==10){
			
			num2 = base_a_decimal(num1, b_entrada);
			salida_b = to_string(num2);
			
		}
		//BASE A DECIMAL - DECIMAL A BASE // DEVUELVE CADENA
		else{
			
			num2 = base_a_decimal(num1, b_entrada);
			salida_b = decimal_a_base(num2, b_salida);
			
		}
	}
	//DECIMAL A BASE //DEVUELVE CADENA
	else {
		
		num2=stoi(num1);
		salida_b = decimal_a_base(num2, b_salida);
		
	}
	
	
	return salida_b;
}

int base_a_decimal(string num, int b_entrada)
{
	//cout << "BASE A DECIMAL" << endl << endl;
	int x, aux, sum, posicion, pot=b_entrada;
	x=num.length();
	
	for(int i=0; i<x; i++){
		
		posicion=x-(i+1);
		
		if(num[posicion]<58) aux=num[posicion]-48; //si es un sumero asigno su valor entero
		else if(num[posicion]>=64 && num[posicion]<=90) aux=num[posicion]-55; //si es una mayuscula ej: A=65ascii-55=10
		else aux=num[posicion]-87;	//si es una minucula ej: a=97ascii-87=10
		
		if(aux>=b_entrada){	//si se ingresa un numero que no pertenece a la base de entrada
			
			cout << "ERROR: el numero ingresado no pertenece a la base de entrada" << endl;
			return 0;
		}
		
		if(i==0) sum = aux;
		else if(i==1) sum += aux * pot;
		else{ 
			pot= pot*b_entrada;
			sum += aux * pot;
		}
	}
	
	return sum;
}

string decimal_a_base(int num, int b_salida)
{	
	//cout << "DECIMAL A BASE" << endl;
	int aux=0;
	string salida="";
	
	while(num!=0){
		
		aux=num%b_salida;
		num=num/b_salida;
		
		if(aux<9) aux+=48;
		else aux+=87;
		
		salida+=aux;
	}
	
	reverse(salida.begin(), salida.end());
	
	return salida;
}
