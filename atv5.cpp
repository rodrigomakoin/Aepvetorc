#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

main(){
	int vet[40];
	int i, vlr, par;	
	par = 0;   
	
	for (i=0;i<40;i++)
	{
		printf("\n Digite o valor do vetor: \n", i);
		scanf("%d", &vet[i]);
		system ("@cls ||clear");
	}
	
	for(i=0;i<40;i++)
	{
		if (vet[i] %2 == 0)
		{
			par++;
		}
	}
	printf("\n Este vetor tem %d de numeros pares", par);
	
	return 0;
	
}
