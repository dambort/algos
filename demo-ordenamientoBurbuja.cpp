#include <iostream>
#include <cstdlib>
#define TAM 50

using namespace std;

void burbuja(int vector[TAM],int longitud);

int main() {
	int vector[TAM];
	int longitud;
	for(int i=0;i<TAM;i++){
		vector[i]=0;
	}
	cout<<"Ingrese el tamaño del vector (Max 50): ";
	cin>>longitud;
	system("cls");
	for(int cont=0;cont<longitud;cont++){
		cout<<"Rellene el vector con los numeros a ordenar de menor a mayor :"<<endl;
		for(int muestra=0;muestra<cont;muestra++){
			cout<<vector[muestra]<<" ";
		}
		cin>>vector[cont];
		system("cls");
	}
	cout<<"Orden de entrada:"<<endl;
	for(int muestra=0;muestra<longitud;muestra++){
		cout<<vector[muestra]<<" ";
	}
	cout<<endl;
	burbuja(vector,longitud);
	cout<<"Orden de salida:"<<endl;
	for(int muestra=0;muestra<longitud;muestra++){
		cout<<vector[muestra]<<" ";
	}
	
	return 0;
}


void burbuja(int vector[TAM],int longitud){
	bool cambio=true;
	//El algoritmo burbuja consiste en comparar los valores del arreglo de a pares
	//e intercambiarlos si estan en un orden incorrecto. Para esto seteamos una variable
	//cambio que nos indicara si se ha producido un cambio de orden. Este proceso se 
	//repetira hasta que la variable cambio sea falsa, indicando que no se ha producido
	//ningun intercambio en esa iteracion y por ende, el arreglo esta ordenado.
	while(cambio){
		cambio=false;
		
		for(int i=0;i<longitud-1;i++){
			
			if(vector[i]>vector[i+1]){
				int aux=vector[i];
				vector[i]=vector[i+1];
				vector[i+1]=aux;
				cambio=true;
			}
			
		}
		
	}
	
}
