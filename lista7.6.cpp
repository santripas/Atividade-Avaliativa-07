#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");
		
		int menor=0,maior=0;
		int funcionarios,matricula[100],i,contador;
		float salario[100];
		bool confirmada = true;
		
	
	do{
	
		printf("Informe a quantidade de funcionários da empresa: \n");
		scanf("%d",&funcionarios);
		if(funcionarios>100){
			printf("Máximo de 100 funcionários!\n");
		}
	}while(funcionarios>100);
	
	
	for(i = 1;i <=funcionarios;i++){
		do{
			printf("Insira o número de matrícula do %d funcionário: \n",i);
			scanf("%d",&matricula[i]);
			
			for(contador= 0;contador < i;contador++){
				if(matricula[i] == matricula[contador]){
					printf("Matrícula já informada!\n");
				  	confirmada = true;
				}
				if(matricula[i] != matricula[contador]){
				  	confirmada = false;
				}			
			}
		}while(confirmada == true);
		
		printf("Informe o salário do %d funcionário: \n", i);
		scanf("%f",&salario[i]);
		if(i == 1)
			menor = salario[i];
			else if(menor > salario[i])
				menor = salario[i];
		if(maior < salario[i])
			maior = salario[i];		
	}

        limpaTela();
		for(i = 1; i <= funcionarios; i++){
		printf("O salário do funcionário de matrícula %d é:R$%.2f\n\n", matricula[i], salario[i]);
	}
	
	printf("O menor salário é :R$%d\n", menor);
	printf("O maior salário é :R$%d\n", maior);
	
	return 0;
}	
