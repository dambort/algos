double CalculoPi(int x){
	double suma=0.0;
	// este for nos indica la cantidad de terminos para la formula segun el valor de x
	for (int i=0; i<x; i++){
		if ((i==2)||((i%2)==0))
			suma+=(1.0/(2*i+1));
		// si el numero es par se suma
		else 
			suma-=(1.0/(2*i+1));
		// si el numero es impar se resta
	}
	// devolvemos el resultado final multiplcado por 4 debido a la formula
	return 4*suma;
}
