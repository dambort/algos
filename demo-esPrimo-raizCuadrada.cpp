#include <iostream>
#include <cmath>

using namespace std;

int esPrimo(int n);

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

int esPrimo(int n){
	
	if (n==1) return -1; // 1 no es considerado numero primo
	
	int raizN;
	
	//	Para este algoritmo nos valemos de una propiedad matematica
	//	que establece que un numero sera primo si no es divisible por
	//	los primeros x primos menores que la raiz del numero principal.
	
	raizN=sqrt(n);
	
	//Seteamos un bool que modificaremos de ser necesario durante
	//la ejecucion.
	
	bool esPrimo=true;
	
	//Vamos a comprobar si el numero n es primo intentando dividirlo
	//enteramente por todos los valores menores que su raiz cuadrada
	
	int i=2;
	while((n%i!=0)&&(i<=raizN)){
		i++;
	}
	if(i!=(raizN+1)){
		esPrimo=false;
	}
	
	int retorno=0;
	
	if(esPrimo){
		//el numero es primo
		retorno=1;
	}else{
		//el numero no es primo
		retorno=-1;
	}
	
	
	return retorno;
}
