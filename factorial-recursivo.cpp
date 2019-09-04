#include <iostream>
using namespace std;

long long unsigned factorial(long long unsigned n)
{
	//se calcula el caso base, 0 factorial (0! = 1), y luego retorna 1
	if(n==0) return 1;
	//se llama de forma recursiva a la funcion factorial 
	//y el resultado retornado se multiplica por n
	else return factorial(n-1)*n;
}	
