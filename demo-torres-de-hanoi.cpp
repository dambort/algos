#include <iostream>
using namespace std;

void torresHanoi (int n, char origen, char destino, char auxiliar);

int main() {
	int n;
	char origen, destino, auxiliar;
	
	cout << "Ingrese el numero de discos en el palo de origen: ";
	cin >> n;
	cout << endl <<"Ingrese los siguientes campos con A, B o C sin repetirlos:" << endl;
	cout << "-Barra de origen: ";
	cin >> origen;
	cout << "-Barra de destino: ";
	cin >> destino;
	cout << "-Barra auxiliar (barra restante): ";
	cin >> auxiliar;
	cout << endl;
	
	torresHanoi(n, origen, destino, auxiliar);
	
	return 0;
}

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
