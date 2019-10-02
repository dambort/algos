#include <iostream>
#include "reverso-de-un-numero.h"

using namespace std;

int main()
{
	unsigned long long num;
	
	cout << "Intoduzca un numero para saber su reverso: ";
	cin >> num;
	
	cout << endl << "su reverso es " << num_reverso(num)<< endl;

	
	return 0;
}
