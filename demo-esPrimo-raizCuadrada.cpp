#include <iostream>
#include "esPrimo-raizCuadrada.h"
using namespace std;

int main(void) {
	int n;
	cout<<"Ingrese el numero que desea saber si es Primo: "<<endl;
	cin>>n;
	
	int comprobar=esPrimo(n);
	
	if(comprobar==1){
		cout<<"El numero "<<n<<" es Primo"<<endl;
	}else{
		cout<<"El numero "<<n<<" no es Primo"<<endl;
	};
	
	return 0;
}

