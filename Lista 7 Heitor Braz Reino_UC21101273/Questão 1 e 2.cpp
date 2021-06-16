// Algoritimo que lê a nota de 30 alunos. q1 e q2

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador, alunos;
	float nota[50];
	
	//5º Passo: Perguntar para o usuário a quantidade de alunos na turma;
	printf("Olá! Digite quantos alunos a turma possui: ");
	
	//Validação: Quantidade de alunos deve ser entre 1 e 50	
	do{
		
		scanf("%d", &alunos);
			
		if(alunos > 50 || alunos < 1){
				
			printf("\nDigite somente números entre 1 e 50: ");
			
		}
		
	}while(alunos > 50 || alunos < 1);
	
	system("cls");
	
	//6º Passo: Comando de repetição, repete 1 vez para cada aluno
	for(contador = 1;contador <= alunos; contador++){
		
		//7º Passo: Perguntar a nota do aluno X
		printf("Digite a nota do %dº aluno: ", contador);
		scanf("%d", &nota[contador]);
		fflush(stdin);
		system("cls");
	
	}
	
	//8º Passo: Retorno da função
	return 0;

//9º Passo: Fim do algoritimo	
}
