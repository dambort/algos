#include <iostream>
#include <string>
#include "conversion-de-bases.h"

using namespace std;

int main()
{
	int b_salida, b_entrada;
	string num, salida;	
	
	cout << "Ingrese la base de entrada: ";
	cin >> b_entrada;
	cout << "Ingrese la base de salida: ";
	cin >> b_salida;
	cout << "Introduce numero: ";
	cin >> num;
	
	salida= convertir_base(num, b_entrada, b_salida);
	
	cout << endl << "numero en base " << b_salida << " es : " << salida << endl << endl;
	
	system("pause");
	
	return 0;
}
