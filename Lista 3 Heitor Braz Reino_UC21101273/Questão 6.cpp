// Algoritimo que mostra a média dos alunos homens e mulheres de uma turma

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int alunosHomens, alunasMulheres;
	int contador;
	float notaAluno, notaTotalAlunos=0, notaAluna, notaTotalAlunas, mediaAlunos, mediaAlunas;
	
	//5º Passo: Pedir número de alunos homens
	printf("Olá! Esse programa irá calcular a média dos alunos de determinada sala desejada.");
	printf("\n\nDigite quantos alunos do sexo masculino estudam na turma: ");
	scanf("%d", &alunosHomens);
	fflush(stdin);
	
	//6º Passo: Perguntar a nota de cada um dos alunos homens
	for(contador=1; contador<=alunosHomens;contador++){
		printf("\nDigite a nota do %dº aluno homem: ", contador);
		
		//6.1º Passo: Ler e validar o valor
		do{		
			scanf("%f", &notaAluno);
			fflush(stdin);
		
			if(notaAluno < 0 || notaAluno > 10){
				printf("Digite apenas notas entre 0 e 10: ");
			}
		}while(notaAluno < 0 || notaAluno > 10);
		
		//7º Passo: Somar as notas dos alunos homens
		notaTotalAlunos = notaTotalAlunos + notaAluno;
	}
	
	//8º Passo: Pedir o número de alunas mulheres
	printf("\nAgora, digite quantos alunos do sexo feminino estudam na sala: ");
	scanf("%d", &alunasMulheres);

	//9º Passo: Perguntar a nota de cada umas das alunas
	for(contador=1; contador<=alunasMulheres;contador++){
		printf("\nDigite a nota da %dº aluna mulher: ", contador);
		
		//9.1º Passo: Ler e validar notas
		do{		
			scanf("%f", &notaAluna);
			fflush(stdin);
		
			if(notaAluna < 0 || notaAluna > 10){
				printf("Digite apenas notas entre 0 e 10: ");
			}
		}while(notaAluna < 0 || notaAluna > 10);
		
		//10º Passo: Somar as notas das alunas mulheres
		notaTotalAlunas = notaTotalAlunas + notaAluna;
	}

	//11º Passo: Dividir a nota total pelo número de alunos (diferente para homens e mulheres)
	mediaAlunos = notaTotalAlunos / alunosHomens;
	mediaAlunas = notaTotalAlunas / alunasMulheres;
	
	system("pause");
	system("cls");
	
	//12º Passo: Mostrar na tela os resultados
	printf("Média dos Alunos do Sexo Masculino: %.1f", mediaAlunos);
	printf("\nMédia das Alunas do Sexo Feminino: %.1f", mediaAlunas);
	printf("\n\nObrigado por utilizar esse programa! :)");
		
	//13º Passo: Retorno da função
	return 0;

//14º Passo: Fim da função principal
}
