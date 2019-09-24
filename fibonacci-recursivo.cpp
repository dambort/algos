#include <iostream>
using namespace std;

int fibonacciRecursivo(int n){
	//La sucesion de Fibonacci se basa en que cada termino
	//de esta es la suma de los 2 terminos anteriores.
	//Luego el termino N sera Tn = T(n-1)+ T(n-2);
	//Para llegar al termino N que nos pasan por parámetro debemos averiguar cuales son 
	//los terminos (n-1) y (n-2)
	//el termino n0 es 0 y el termino n1 es 1
	
	if(n==0)return 0;
	if(n==1||n==2)return 1;
	int terminoN=fibonacciAux(n-2)+fibonacciAux(n-1);
	
	return terminoN;
	
}

int fibonacciAux(int n){
	
	if(n==0) return 0;
	else if(n==1 || n==2) return 1;
	else return fibonacciAux(n-2)+fibonacciAux(n-1);
}
