#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");
		
	int vetor[80],numero,numRepetido=0,contador;
	
	printf("Informe no m�ximo 80 n�meros: \n");
	for(int i = 0; i<80; i++)
		scanf("%i", &vetor[i]);
	
	limpaTela();
	printf("Qual n�mero gostaria de verificar se existem outros iguais? ");
	scanf("%i",&numero);
	
	for(contador = 0;contador < 80;contador++)
		if(vetor[contador] == numero)numRepetido++;
	
	
	if(numRepetido == 0)
	printf("Esse n�mero n�o foi repetido");
	else printf("Esse n�mero se repete %i vezes ",numRepetido);
	
	
}
