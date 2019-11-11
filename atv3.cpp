#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[16];
	int i, x, temp;
	char  ch;
	
	temp = 0;
	
	for (i=0;i<16;i++)
	{
		printf("\n Digite o valor da posicao de %d do vetor: \n", i);
		scanf("%d", &vet[i]);
		system("@cls||clear");
	}
	
	for (i=0;i<12;i++)
	{
		printf("\n o valor da posicao no vetor: %d \n", i, vet[i]);
		
	}
	
	for (i=0;i<8;i++)
	{
		for (x=15;x>=8;x--)
		{
			
			temp = vet[i];
			vet[i] = vet[x];
			vet[x] = temp;
		}
    } 
	system("@cls||clear");
		for(i=0;i<16;i++)	
		{
			print("\n o valor da posicao %d o novo é de %d \n", i, vet[i]);
		}
	
	return 0;
		
}
