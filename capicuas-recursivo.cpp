#include <iostream>

using namespace std;

bool capicua_rec(unsigned long long num)
{
	unsigned long long cont=1, aux1=num;
	int aux2;
	
	//retorna true si el numero es capicua
	// y retorna false si no lo es	
	
	if (num<10) return true;	//Retorna "true" si es el ultimo digito, todos los numeros de un digito son capicuas
	
	else{
		
		aux2= num%10;
		
		while(aux1>10){
			
			aux1 = aux1/10;
			cont=cont*10;
		}	
		
		if (aux1==aux2){
			
			num= (num-(aux1*cont))/10;
			
			return capicua_rec(num);
		}
		else return false; //retorna "false" si el primer y ultimo digito no son iguales
	}
}
