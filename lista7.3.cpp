#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
		
		int dados[100],i,calculo = 0;
	
	for(i = 0;i < 100;i++){
	  printf("DIGITE A NOTA DO %d ALUNO: ",i+1);
	  scanf("%d",&dados[i]);
	  
	  calculo=calculo+ dados[i];
	  
	}
	system("cls");
	printf("Cálculo: %d",calculo);
	
	return 0;
}
