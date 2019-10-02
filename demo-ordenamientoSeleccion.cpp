#include <iostream>
#include <cstdlib>
#define TAM 50
using namespace std;

void seleccion(int vector[TAM],int longitud);

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
	
	seleccion(vector,longitud);
	
	cout<<"Orden de salida:"<<endl;
	for(int muestra=0;muestra<longitud;muestra++){
		cout<<vector[muestra]<<" ";
	}
	
	
	return 0;
}


void seleccion(int vector[TAM],int longitud){
	int min;
	//El algoritmo consiste en pararse en cada posicion del arreglo y desde
	//ese lugar buscar la menor en las restantes posiciones, si existe se intercambia
	//con la posicion actual, en otro caso, se pasa a la siguiente posicion y se 
	//repite
	for(int i=0;i<longitud;i++){
		min=i;
		for(int j=i;j<longitud;j++){
			
			if(vector[j]<vector[min]){
				min=j;
			}
			
		}
		int aux=vector[i];
		vector[i]=vector[min];
		vector[min]=aux;
		
	}
	
	
	
}
