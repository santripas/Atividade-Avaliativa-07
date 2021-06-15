#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");
		
		float precos[100],percentual;
    	int i=0,sair,j=0,escolha;
	
	
	do{
		fflush(stdin);
		printf("Informe o preço do CD %d: ", i + 1);
		scanf(" %f",&precos[i]);

		sair = precos[i] == 0 || i > 99;
		i++;

	} while (!sair);

	i--;

	printf("1 - Aumento de 10%%: \n");
	printf("2 - Escolher o aumento: \n");
	scanf("%d",&escolha);

	switch(escolha)
	{
	case 1:
		for(int j = 0; j < i; j++)
		{
			precos[j] = precos[j] * 1.1;
		}
		break;
	
	case 2:;
	
		printf("Digite o percentual que deseja aumentar: ");
		scanf("%f",&percentual);

	       	for (j = 0; j < i; j++)
		{
			precos[j] = precos[j] * (1 + percentual/100);
		}
		break;

	    default: break;
	}

	printf("Novos preços: \n");

	for(j = 0; j < i; j++)
	{
		printf("R$ %.2f\n", precos[j]);
	}
}
