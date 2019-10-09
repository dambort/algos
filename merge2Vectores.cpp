#include <iostream>
#include <cstdlib>
#define TAM 50
#define TAM1 25
using namespace std;

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
