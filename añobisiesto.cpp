#include <iostream>
using namespace std;
int aniobisiesto(int Anio){
	// La funcion pregunta si el año ingresado es divisible por 4 y despues si no es divisible por 100 o es divisible por 400.
	// Y en caso de cumplir esa condicion retorna 1.
	if(Anio%4==0 && (Anio%100!=0 || Anio%400==0))
		return 1;
	return 0;
}
