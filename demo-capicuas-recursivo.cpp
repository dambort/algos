#include <iostream>
#include "capicuas-recursivo.h"

using namespace std;

int main()
{
	unsigned long long num;
	
	cout << "INTRODUZCA UN NUMERO PARA SABER SI ES O NO CAPICUA: ";
	cin >> num;
	
	if(capicua_rec(num))
		cout << endl << num << " ES CAPICUA" << endl;
	else
		cout << endl << num << " NO ES CAPICUA" << endl;
	
	return 0;
}
