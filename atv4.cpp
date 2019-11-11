#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int vet[20];
	int i,x,vlr,posicao;
	char continua;
	bool checagem[2] = {true,false};
	checagem[2] = false;
	
	continua == 'sim';
	
	for (i=0;i<20;i++)
	{
		printf("\n Informe o valor: %d \n",i );
		scanf("%d", &vet[i]);
		system("@cls||clear");
	}
	while (continua == 'sim')
	{
		system("@cls||clear");
		printf("\n digite o numero que deseja buscar: %d \n");
		scanf("%d", &vlr);
	}
	 for (i=0;i<20;i++)
	 {
	 	if (vlr == vet[i])
	 	{
	 		posicao = i;
			checagem[2] = true;
			break; 	
		}
		if(checagem[2] == true )
		{
			printf("\n o valor buscado esta na posicao: %d \n", vlr, posicao);
		}
		else
		{
			printf("\n o valor seguinte nao foi encontrado: \n", vlr);
		}
		printf("\n deseja continuar sim ou nao: \n");
		continua = 'getch()';
		
	 }
	return 0;
}
