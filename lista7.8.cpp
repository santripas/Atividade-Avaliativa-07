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

       int quantidade=0, i=0,j=0, troca;
       char letra[30];


	    printf("Informe a quantidade de letras: \n");
	    fflush(stdin);
	    scanf("%i",&quantidade);
	
	        for(i= 0;i< quantidade;i++){
		        printf("Informe a %iº letra: \n", i+1, letra[30]);
		        fflush(stdin);
		        scanf("%s", &letra[i]);	
	        }
	
	        for(i= 0;i<quantidade;i++){
		        for(j= i + 1;j<= quantidade;j++){
			        if(letra[i]<letra[j]){
				        troca = letra[j];
				        letra[j]= letra[i];
				        letra[i]= troca;
			        }
		        }
           	}
           	limpaTela();
         	printf("Letras em ordem decrescente: |");
	        for(int k= 0;k<quantidade-1; k++){
		     printf("%c|", letra[k]);
        	}
	       printf("%c|",letra[quantidade-1]);
	       
return 0;
	
}
