#include <iostream>
#include <cstdlib>
#define TAM 50
#define TAM1 25
using namespace std;

void MergeVectores(int V1[TAM1],int long1, int V2[TAM1],int long2, int V3[TAM]);
void insercion(int vector[TAM],int longitud);

int main() {
	int vector1[TAM1],vector2[TAM1],vector3[TAM];
	int longitud1,longitud2;
	
	for(int i=0;i<TAM1;i++){
		vector1[i]=0;
		vector2[i]=0;
	}
	for(int i=0;i<TAM;i++){
		vector3[i]=0;
	}
	
	cout<<"Ingrese el tamaño del primer vector (Max 25): ";
	cin>>longitud1;
	system("cls");
	for(int cont=0;cont<longitud1;cont++){
		cout<<"Rellene el vector :"<<endl;
		
		for(int muestra=0;muestra<cont;muestra++){
			cout<<vector1[muestra]<<" ";
		}
		cin>>vector1[cont];
		system("cls");
	}
	insercion(vector1,longitud1);
	
	cout<<"Ingrese el tamaño del segundo vector (Max 25): ";
	cin>>longitud2;
	system("cls");
	for(int cont=0;cont<longitud2;cont++){
		cout<<"Rellene el vector :"<<endl;
		
		for(int muestra=0;muestra<cont;muestra++){
			cout<<vector2[muestra]<<" ";
		}
		cin>>vector2[cont];
		system("cls");
	}
	insercion(vector2,longitud2);
	
	MergeVectores(vector1,longitud1,vector2,longitud2,vector3);
	cout<<"Vector ordenado compuesto por los elementos de los vectores 1 y 2: "<<endl;
	cout<<endl;
	for(int muestra=0;muestra<longitud1+longitud2;muestra++){
		cout<<vector3[muestra]<<" ";
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

void MergeVectores(int V1[TAM1],int long1, int V2[TAM1],int long2, int V3[TAM]){
	//Recibimos 2 vectores ya ordenados y 1 vacio donde colocaremos la union de los otros 2 ordenados.
	//Obtenemos la longitud total del vector 3 y recorreremos los otros 2 vectores paralelamente hasta
	//agregar todos los elementos al vector 3. Las variables pos1 y pos2 se utilizan para guardar la posicion
	//en cada uno de los vectores que se quieren mezclar.
	//Luego, si algun vector es mas largo que el otro, debido a que los vectores que recibimos estan ordenados,
	//encolamos lo que reste del vector en el vector 3.
	int long3=long1+long2;
	int cont=0,pos1=0,pos2=0;
	while(cont<long3) {
		if(pos1!=long1 && pos2!=long2){
			if(V1[pos1]>V2[pos2]){
				V3[cont]=V2[pos2];
				pos2++;
				cont++;
			}else if(V1[pos1]<V2[pos2]){
				V3[cont]=V1[pos1];
				pos1++;
				cont++;
			}else if(V1[pos1]==V2[pos2]){
				V3[cont]=V1[pos1];
				pos1++;
				cont++;
				V3[cont]=V2[pos2];
				pos2++;
				cont++;
			}
		}
		if(pos1==long1 && pos2!=long2){
			for(int i=pos2;i<long3;i++){
				V3[cont]=V2[i];
				cont++;
			}
		}else if(pos2==long2 && pos1!=long1){
			for(int i=pos1;i<long3;i++){
				V3[cont]=V1[i];
				cont++;
			}
		}
	
	}
	
	
	
	
	
}
