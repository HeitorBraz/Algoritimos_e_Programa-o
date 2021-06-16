//Algoritimo que criar um vetor C cujo valor é A+B, e permite ao usuário buscar determinado valor nesse vetor.

//OBS: A questão pede para criar uma matrizC mas pede pra ler valores em um vetorC. Então eu fiz um vetorC em vez de criar um matrizC

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	float vetorA[10], vetorB[10], vetorC[10], valorComparacao;
	int contador;
		
	printf("Olá! Esse programa irá ler 2 vetores de 10 valores e gerar um vetor C cujo valores são A+B" );
		
	//5º Passo: Ler valores do vetor A
	printf("\n\nDigite os valores que serão armazenados no vetor A.");
	
	for(contador=1;contador<=10;contador++){
		printf("\nDigite o %dº Valor: ", contador);
		scanf("%f", &vetorA[contador]);
	}
		
	system("cls");	
		
	//6º Passo: Ler valores do vetor B
	printf("Digite os valores que serão armazenados no vetor B.");
	
	for(contador=1;contador<=10;contador++){
		printf("\nDigite o %dº Valor: ", contador);
		scanf("%f", &vetorB[contador]);
	}
	
	//7º Passo: Somar valores do vetor A e B para criar valores do vetor C
	for(contador=1; contador<=10;contador++){
		vetorC[contador] = vetorA[contador] + vetorB[contador];
	}
	
	system("cls");
	
	//
	printf("Matriz C foi gerada.");
	
	printf("\n\nDigite o valor que você deseja pesquisar na Matriz C.\n");
	scanf("%f", &valorComparacao);
	
	system("cls");
	printf("O Valor %.2f foi encontrado nas seguintas posições do vetor:", valorComparacao);
	printf("\n");
	
	for(contador=1;contador<=10;contador++){
		if(vetorC[contador]==valorComparacao){
			printf("\nPosição no Vetor: %dª ", contador);
		}
	}
	
				
		
	return 0;
	
}
