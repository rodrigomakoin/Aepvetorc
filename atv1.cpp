#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int vet[12];
	int i,x,y,soma;
	
	for(i=0;i<12,i++)
	{
		printf("\n Digite o vetor", i);
		scanf(%d, &vetA);
	}
	for(i=0;i<12,i++)
	{
		printf("\n O valor do vetor é", i, vetA[i]);
	} 
	printf("\n Digite o primeiro valor para somar: \n");
	scanf(%d, &x);
	printf("\n Digitr o segundo valor para somar: \n");
	scanf(%d, &y); 
	
	soma = vetA[x] + vetA[y];
	
	printf ("\nO valor do vetor na posicao X e %d e na posicao Y e de %d. A soma destes valores e de %d", vetA[x],vetA[y],soma);
	getchar();
	
	return 0;
	
}
