#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


main(){
	int vet[40];
	int i, u;
	
	for (i = 0; i < 40; i++)
	{
		printf ("\n Informe o valor do vetor na posicao %d do Vetor\n", i);
		scanf ("%d", &vet[i]);
		system ("@cls||clear");
	}
	
	
	printf ("\nCompleto\n");
	
	for (i = 0; i < 40; i++)
	{
		u = i - 1;
		vet[i] = vet[i] + vet[u];
		printf ("\n vet[%d] => %d", i, vet[i]);
	}
	return (0);
}

