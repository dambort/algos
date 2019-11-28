#include <iostream>
#include "factorizar-en-primos.h"

using namespace std;

int main() {
	
	long long int N;
	vector <int> V;
	
	cout << "ingrese un numero positivo: ";
	
	cin >> N;
	
	cout << endl << "sus factores primos son:" << endl;
	
	V= fact_prim(N);
	
	printVector(V);
	
	cout << endl;
	
	return 0;
}

