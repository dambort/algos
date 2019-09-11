#include <iostream>
using namespace std;

int fibonacciRecursivo(int n);
int fibonacciAux(int n);

int main() {
	cout<<"Ingrese el termino de la sucesion de Fibonacci que desea averiguar."<<endl;
	cout<<endl;
	cout<<"Termino: ";
	int n;
	int terminoN;
	cin>>n;
	
	terminoN=fibonacciRecursivo(n);
	cout<<endl;
	cout<<"El termino "<<n<<" de la sucesion de Fibonacci es: "<<terminoN<<endl;
	
	return 0;
}

int fibonacciRecursivo(int n){
	//La sucesion de Fibonacci se basa en que cada termino
	//de esta es la suma de los 2 terminos anteriores.
	//Luego el termino N sera Tn = T(n-1)+ T(n-2);
	//Para llegar al termino N que nos pasan por parámetro debemos averiguar cuales son 
	//los terminos (n-1) y (n-2)
	if(n==1)return 0;
	if(n==2)return 1;
	int terminoN=fibonacciAux(n-2)+fibonacciAux(n-1);
	
	return terminoN;
	
}
int fibonacciAux(int n){
	if(n==1 || n==-1 || n==0){
		return 0;
	}else if((n==3)||(n==2)){
		return 1;
	}else{
		return fibonacciAux(n-2)+fibonacciAux(n-1);
	}
}
