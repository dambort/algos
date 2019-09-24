#include <iostream>
using namespace std;

int potenciaEnteraConProp(int base,int exp){
	//Primeramente comprobamos que el exp no sea 0, si lo es devolvemos 1.
	//Luego comprobamos si este es par, si lo es, llamamos nuevamente a la funcion
	//pero con los exponentes por la mitad. Hacemos uso de la propiedad de la potencia que
	//dice que el producto de potencias de igual base es igual a la suma de los exponentes
	//de esas potencias.
	//En caso de no ser par, separamos la potencia como un producto de factores usando la misma
	//propiedad y llamamos a la funcion con las partes pares.
	if(exp==0){
		return 1;
	}else if(exp%2==0){
		return potenciaEnteraConProp(base,exp/2)*potenciaEnteraConProp(base,exp/2);
	}else{
		return base*potenciaEnteraConProp(base,exp/2)*potenciaEnteraConProp(base,exp/2);;
	}
}
