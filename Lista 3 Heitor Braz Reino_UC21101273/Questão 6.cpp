// Algoritimo que mostra a m�dia dos alunos homens e mulheres de uma turma

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int alunosHomens, alunasMulheres;
	int contador;
	float notaAluno, notaTotalAlunos=0, notaAluna, notaTotalAlunas, mediaAlunos, mediaAlunas;
	
	//5� Passo: Pedir n�mero de alunos homens
	printf("Ol�! Esse programa ir� calcular a m�dia dos alunos de determinada sala desejada.");
	printf("\n\nDigite quantos alunos do sexo masculino estudam na turma: ");
	scanf("%d", &alunosHomens);
	fflush(stdin);
	
	//6� Passo: Perguntar a nota de cada um dos alunos homens
	for(contador=1; contador<=alunosHomens;contador++){
		printf("\nDigite a nota do %d� aluno homem: ", contador);
		
		//6.1� Passo: Ler e validar o valor
		do{		
			scanf("%f", &notaAluno);
			fflush(stdin);
		
			if(notaAluno < 0 || notaAluno > 10){
				printf("Digite apenas notas entre 0 e 10: ");
			}
		}while(notaAluno < 0 || notaAluno > 10);
		
		//7� Passo: Somar as notas dos alunos homens
		notaTotalAlunos = notaTotalAlunos + notaAluno;
	}
	
	//8� Passo: Pedir o n�mero de alunas mulheres
	printf("\nAgora, digite quantos alunos do sexo feminino estudam na sala: ");
	scanf("%d", &alunasMulheres);

	//9� Passo: Perguntar a nota de cada umas das alunas
	for(contador=1; contador<=alunasMulheres;contador++){
		printf("\nDigite a nota da %d� aluna mulher: ", contador);
		
		//9.1� Passo: Ler e validar notas
		do{		
			scanf("%f", &notaAluna);
			fflush(stdin);
		
			if(notaAluna < 0 || notaAluna > 10){
				printf("Digite apenas notas entre 0 e 10: ");
			}
		}while(notaAluna < 0 || notaAluna > 10);
		
		//10� Passo: Somar as notas das alunas mulheres
		notaTotalAlunas = notaTotalAlunas + notaAluna;
	}

	//11� Passo: Dividir a nota total pelo n�mero de alunos (diferente para homens e mulheres)
	mediaAlunos = notaTotalAlunos / alunosHomens;
	mediaAlunas = notaTotalAlunas / alunasMulheres;
	
	system("pause");
	system("cls");
	
	//12� Passo: Mostrar na tela os resultados
	printf("M�dia dos Alunos do Sexo Masculino: %.1f", mediaAlunos);
	printf("\nM�dia das Alunas do Sexo Feminino: %.1f", mediaAlunas);
	printf("\n\nObrigado por utilizar esse programa! :)");
		
	//13� Passo: Retorno da fun��o
	return 0;

//14� Passo: Fim da fun��o principal
}
