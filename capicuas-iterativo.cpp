#include <iostream>

using namespace std;

bool num_capicua(unsigned long long num)
{
	//la funcion retorna true si el numero es capicua
	// y retorna false si no lo es
	
	unsigned long long A=num, B=0, C=0;
	
	while(A!=0)
	{
		B=A%10;		//B toma el valor del ultimo digito de A
		A=A/10;		//se quita el ultimo digito de A 
		C=C*10+B;	//en C se concatenan los valores de B (o el reverso de num) 
	}
	
	return (C==num);
}
