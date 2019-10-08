#include <iostream>
#include <cstdlib>
#define TAM 50

using namespace std;

void insercion(int vector[TAM],int longitud);

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
	
	insercion(vector,longitud);
	
	cout<<"Orden de salida:"<<endl;
	for(int muestra=0;muestra<longitud;muestra++){
		cout<<vector[muestra]<<" ";
	}
	
	return 0;
}


void insercion(int vector[TAM],int longitud){
	//Dado el vector desordenado, lo que haremos sera tomar el primer numero
	//que este mal ubicado y lo llevaremos hasta la posicion correcta relativa
	//hasta ese momento. Esto lo haremos hasta que hayamos procesado todo el vector.
	for(int i=1;i<longitud;i++){
		
		int aux= vector[i];
		int anterior= i-1;
		
		while((anterior>=0) && (vector[anterior]>aux)){
			vector[anterior+1] = vector[anterior];
			anterior--;
		}
		
		vector[anterior+1]=aux;
	}	
}
