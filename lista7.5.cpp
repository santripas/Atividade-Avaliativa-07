#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");
		
	int vetor[80],numero,numRepetido=0,contador;
	
	printf("Informe no máximo 80 números: \n");
	for(int i = 0; i<80; i++)
		scanf("%i", &vetor[i]);
	
	limpaTela();
	printf("Qual número gostaria de verificar se existem outros iguais? ");
	scanf("%i",&numero);
	
	for(contador = 0;contador < 80;contador++)
		if(vetor[contador] == numero)numRepetido++;
	
	
	if(numRepetido == 0)
	printf("Esse número não foi repetido");
	else printf("Esse número se repete %i vezes ",numRepetido);
	
	
}
