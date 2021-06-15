#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	int alunos;
	float notas[30];
	
	do{
	printf("Informe a quantidade de alunos na turma:\n");
	scanf("%i",&alunos);
	 if(alunos >50){
		printf("menos que 50 !\n");
	 }
	}while(alunos>50);
	
	for(int i = 0; i < alunos; i++){
		printf("Digite a nota do %iº aluno:\n", i+1);
		scanf("%f", &notas[i]);
		fflush(stdin);
	}
	system("cls");
	for(int i= 0; i < alunos; i++){
		printf("A nota do %iº aluno é: %.2f\n", i+1, notas[i]);
	}
	
return 0;
	
}
