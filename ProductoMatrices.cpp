void producto(int *matriz1[],int *matriz2[],int *resultado[],int fila2,int fila3, int columna3){
	//Inicializo en 0 todas las posiciones de la matriz resultado
	for(int i = 0; i < fila3; i++)
		for(int j = 0; j < columna3;j++)
		resultado[i][j] = 0;
		//Se realiza el producto de matrices
		for(int f=0;f < fila3;f++)
			for(int c=0;c < columna3;c++)
			for(int k=0; k < fila2; k++) 
			resultado[f][c] += matriz1[f][k] * matriz2[k][c];
}
