#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
	cout<<"Ingrese el termino de la sucesion de Fibonacci que desea averiguar."<<endl;
	cout<<"Termino: ";
	int n;
	int terminoN;
	cin>>n;
	
	terminoN=fibonacci(n);
	cout<<endl;
	cout<<"El termino "<<n<<" de la sucesion de Fibonacci es: "<<terminoN<<endl;
	
	return 0;
}

int fibonacci(int n){
	//La sucesion de Fibonacci se basa en que cada termino
	//de esta es la suma de los 2 terminos anteriores.
	//Luego el termino N sera Tn = T(n-1)+ T(n-2);
	
	int termino1=0;
	int termino2=1;
	int terminoN;
	
	//Para llegar al termino N que nos pasan por parámetro debemos averiguar cuales son 
	//los terminos (n-1) y (n-2)
	
	if(n==0) return 0;
	if(n==1) return 1;
	
	for(int i=1;i<n;i++){
		terminoN=termino1+termino2;
		termino1=termino2;
		termino2=terminoN;
	}
	
	return terminoN;
	
}
