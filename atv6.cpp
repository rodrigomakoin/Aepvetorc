#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

main(){
	int vet[40];
	int i, vlr, pares;
	pares = 0;
	
	for(i=0;i<40;i++)
	{
		printf ("\n Informe o valor do vetor na posicao %d\n", i);
		scanf ("%d", &vet[i]);
		system ("@cls||clear");
	}
	
	printf("\n Completo! \n")
	
	for(i=0;i<40;i++)
	{
		if (vet[i]<0)
		{
			vet[i] = 0;
		}
		printf ("\n vetor[%d] => %d", i, vet[i]);
	}
		
	return 0;
}
