//#include <iostream>
//#include <vector>
#include "factorizar-en-primos.h"

vector<int> fact_prim(unsigned long long n)
{
	//Factorizar un numero en primos
	vector<int> V;
	int i=2;
	
	//obtenemos los factores
	
	while(n>1){
		
		if(n%i==0){
			
			n=n/i;
			V.push_back(i);
			i=2;
		}
		else	i++;
	}
	
	return V;
}

void printVector(vector <int> &vec)
{
	for(unsigned i=0; i<vec.size(); i++){
		cout << vec[i] << " ";
	}
}
