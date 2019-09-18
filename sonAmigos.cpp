#include <iostream>
using namespace std;

bool sonAmigos(int N1,int N2){
	int sum1=0;
	int sum2=0;
	
//	Dos numeros N1 y N2 seran amigos si la suma de los divisores de N1, incluyendo el 1 y excluyendo
//	al mismo numero, es igual a N2 y viceversa. Se deben cumplir ambas igualdades para que
//	el par sea considerado amigo.
	
	
	for(int i=1;i<N1;i++){
		
		if(N1%i==0){
			sum1=sum1+i;
		}
		
	}
//Calculamos la suma de los divisores de N1 y N2
	for(int j=1;j<N2;j++){
		
		if(N2%j==0){
			sum2=sum2+j;
		}
		
	}
	if(sum2==N1 && sum1==N2){
		//Si las igualdades son correctas, el par de numeros es amigo
		return true;
	}else{
		//En caso contrario, los mismos no son amigos
		return false;
	}
}
