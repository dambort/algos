#include <iostream>
#include "sumatoria-iterativa.h"

using namespace std;

int sumatoria_iterativa(int n)
{
	int aux=0;
	
	for(int i=1; i<=n; i++) aux+=i;
	
	return aux;
}

