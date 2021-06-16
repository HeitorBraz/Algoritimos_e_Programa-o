// Algoritimo que l� a nota de 30 alunos. q1 e q2

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador, alunos;
	float nota[50];
	
	//5� Passo: Perguntar para o usu�rio a quantidade de alunos na turma;
	printf("Ol�! Digite quantos alunos a turma possui: ");
	
	//Valida��o: Quantidade de alunos deve ser entre 1 e 50	
	do{
		
		scanf("%d", &alunos);
			
		if(alunos > 50 || alunos < 1){
				
			printf("\nDigite somente n�meros entre 1 e 50: ");
			
		}
		
	}while(alunos > 50 || alunos < 1);
	
	system("cls");
	
	//6� Passo: Comando de repeti��o, repete 1 vez para cada aluno
	for(contador = 1;contador <= alunos; contador++){
		
		//7� Passo: Perguntar a nota do aluno X
		printf("Digite a nota do %d� aluno: ", contador);
		scanf("%d", &nota[contador]);
		fflush(stdin);
		system("cls");
	
	}
	
	//8� Passo: Retorno da fun��o
	return 0;

//9� Passo: Fim do algoritimo	
}
