#include <stdio.h>

int main(){
	int vet[10];
	int i, num;
	
	num = 1
	
	for (i=0;i<10;i++)
	{
		if (num %2 !=0)
		{
			vet[i] = num;
			num+=2;
		}
	}
	
	for (i=0;i<10;i++)
	{
		printf("\n O valor é %d no vetor de %d", i, vet[i]);
	}
	 return 0;
	
}
