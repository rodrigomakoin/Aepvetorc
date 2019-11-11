#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char frase[120];
	int i;
	
	printf("\n digite uma frase: \ ");
	gets(frase);
	
	printf("\n frase sem alteração: %s", frase);
	
	for(i=0;i<strlen(frase);i++)
	{
		if (frase[i] == ' ')
		{
			frase[i] = '~';
		}
	}
	
	printf("\n Frase alterada: %s", frase);
	
	return(0);
	
	
}
