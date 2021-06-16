//Algoritimo que criar um vetor C cujo valor � A+B, e permite ao usu�rio buscar determinado valor nesse vetor.

//OBS: A quest�o pede para criar uma matrizC mas pede pra ler valores em um vetorC. Ent�o eu fiz um vetorC em vez de criar um matrizC

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	float vetorA[10], vetorB[10], vetorC[10], valorComparacao;
	int contador;
		
	printf("Ol�! Esse programa ir� ler 2 vetores de 10 valores e gerar um vetor C cujo valores s�o A+B" );
		
	//5� Passo: Ler valores do vetor A
	printf("\n\nDigite os valores que ser�o armazenados no vetor A.");
	
	for(contador=1;contador<=10;contador++){
		printf("\nDigite o %d� Valor: ", contador);
		scanf("%f", &vetorA[contador]);
	}
		
	system("cls");	
		
	//6� Passo: Ler valores do vetor B
	printf("Digite os valores que ser�o armazenados no vetor B.");
	
	for(contador=1;contador<=10;contador++){
		printf("\nDigite o %d� Valor: ", contador);
		scanf("%f", &vetorB[contador]);
	}
	
	//7� Passo: Somar valores do vetor A e B para criar valores do vetor C
	for(contador=1; contador<=10;contador++){
		vetorC[contador] = vetorA[contador] + vetorB[contador];
	}
	
	system("cls");
	
	//
	printf("Matriz C foi gerada.");
	
	printf("\n\nDigite o valor que voc� deseja pesquisar na Matriz C.\n");
	scanf("%f", &valorComparacao);
	
	system("cls");
	printf("O Valor %.2f foi encontrado nas seguintas posi��es do vetor:", valorComparacao);
	printf("\n");
	
	for(contador=1;contador<=10;contador++){
		if(vetorC[contador]==valorComparacao){
			printf("\nPosi��o no Vetor: %d� ", contador);
		}
	}
	
				
		
	return 0;
	
}
