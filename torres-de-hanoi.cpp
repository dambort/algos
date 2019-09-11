#include <torres-de-hanoi.h>
#include <iostream>
using namespace std;

void torresHanoi (int n, char origen, char destino, char auxiliar){
	if (n==1){
		cout << "Mover el disco 1 desde la barra " << origen << " a la barra " << destino << endl;
		return;
	} else {
		torresHanoi(n-1, origen, auxiliar, destino);
		cout << "Mover el disco " << n << " desde la barra " << origen << " a la barra " << destino << endl;
		torresHanoi(n-1, auxiliar, destino, origen);
	}
}
