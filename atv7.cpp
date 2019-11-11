#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

main(){
	int vetA[20], vetB[20], vetC[40];
	int i, a, b;
	
	for(a=0;a<20;a++)
	{
		printf ("\n Informe o valor do vetor na posicao %d do Primeiro Vetor\n", a);
		scanf ("%d", &vetA[a]);
		system ("@cls||clear");
	}
	for (b = 0;b<20;b++)
	{
		printf ("\n Informe o valor do vetor na posicao %d do Segundo Vetor\n", b);
		scanf ("%d", &vetB[b]);
		system ("@cls||clear");
	}
	a=0, b=0;
	printf ("\ Completo\n");
	for (i=0;i<40;i++)
	{
		if (i % 2 == 0)
			{
				vetC[i] = vetA[a];
				a++;
			}
			else if (i % 2 != 0)
			{
				vetC[i] = vetB[b];
				b++;
			}
		printf ("\n vetC[%d] => %d", i, vetC[i]);
	}
	return(0);
}
