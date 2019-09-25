#include <iostream>
#include <merge-sort.h>
using namespace std;

void merge (int vector1[], int inicio1, int fin1, int inicio2, int fin2)
{
	int pos1=inicio1, pos2=inicio2, pos3=0;
	int * vector2;
	vector2= new int [fin2+1]; 
	
	while (pos1<=fin1 and pos2<=fin2)
	{
		if(vector1[pos1]<vector1[pos2])
		{
			vector2[pos3]=vector1[pos1];
			pos1++;
		} 
		else 
		{
			vector2[pos3]=vector1[pos2];
			pos2++;
		}
		pos3++;
	}
	while(pos1<=fin1)
	{
		vector2[pos3]=vector1[pos1];
		pos1++; pos3++;
	}
	while(pos2<=fin2)
	{
		vector2[pos3]=vector1[pos2];
		pos2++; pos3++;
	}
	for(pos3=0; pos3<=fin2-inicio1; pos3++)
	{
		vector1[inicio1+pos3]=vector2[pos3];
	}
	
	delete vector2;
}

void mergeSort (int vector[], int inicio, int fin)
{
	if(fin-inicio == 0)
	{
		return;
	} 
	else 
	{
		mergeSort (vector, inicio, (inicio+fin)/2);
		mergeSort(vector, (inicio+fin)/2 +1, fin);
		merge(vector, inicio, (inicio+fin)/2, (inicio+fin)/2+1, fin);
	}
}
