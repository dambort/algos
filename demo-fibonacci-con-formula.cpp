#include <iostream>
#include "fibonacci-con-formula.h"

using namespace std;

int main(){
	int n;
	
	cout << "Ingrese el termino de la sucesion de Fibonacci que desea averiguar."<< endl;
	cout << "Termino: ";
	cin>>n;
	cout << endl << "El termino " << n << " de la sucesion de Fibonacci es: " << fibonacci(n) << endl;
	
	return 0;
}
