#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float notas[30];
	
	for(int i = 0; i < 30; i++){
		printf("Digite a nota do aluno n º%i: ", i+1);
		scanf("%f", &notas[i]);
		fflush(stdin);
	}

return 0;
	
}
