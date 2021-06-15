#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void limpaTela(){
	system("cls");
}

int main(){
    setlocale(LC_ALL,"portuguese");
    
    int idade[100],posicao[100];
	int i= 0,j,k,l,idadeMaior= 0,pos,sair =0;
	
	
	for(pos = 0;pos < 100;pos++)posicao[pos] = 0;
	
	
	
	do{
		printf("Digite uma idade ou um valor negativo para parar: ");
		scanf("%d",&idade[i]);

		sair=i >= 100 || idade[i] < 0;
		i++;

	} while(!sair);

	for(j= 0;j < i;j++)
	{
		for(k= 0;k <i- 1;k++)
		{
			if(idade[k] <= idade[k + 1])
			{
				idadeMaior = idade[k + 1];		
			}
		}
	}
	printf("O mais velho: %d\n", idadeMaior);

	for(l= 0;l < i;l++)
	{
		if(idade[l] == idadeMaior)
		printf("posição:  %d\n",l);
	}
	return 0;
}
