//Algorito que le o nome de uma pessoa letra por letra e depois mostra ele na tela.

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	char letra[100];
	int contador=0, numeroLetras=0;
	
	//5� Passo: Ler letra por letra do nome de uma pessoa, caso usu�rio digite # o programa para de ler as letras
	
		do{
			
			contador++;
			printf("Digite a %d letra do seu nome completo. (Digite # caso j� tenha digitado seu nome inteiro)\n", contador);
			scanf(" %c", &letra[contador]);
			numeroLetras++;
		
		}while(letra[contador] != '#');

	system("cls");
	
	printf("Seu nome completo �:\n\n");
	
	for(contador=1; contador<=numeroLetras-1; contador++){
		printf("%c", letra[contador]);
	}

	printf("\n\nObrigado por utilizar esse programa!");
	
}
