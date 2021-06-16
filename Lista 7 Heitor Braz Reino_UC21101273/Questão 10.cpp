//Algorito que le o nome de uma pessoa letra por letra e depois mostra ele na tela.

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	char letra[100];
	int contador=0, numeroLetras=0;
	
	//5º Passo: Ler letra por letra do nome de uma pessoa, caso usuário digite # o programa para de ler as letras
	
		do{
			
			contador++;
			printf("Digite a %d letra do seu nome completo. (Digite # caso já tenha digitado seu nome inteiro)\n", contador);
			scanf(" %c", &letra[contador]);
			numeroLetras++;
		
		}while(letra[contador] != '#');

	system("cls");
	
	printf("Seu nome completo é:\n\n");
	
	for(contador=1; contador<=numeroLetras-1; contador++){
		printf("%c", letra[contador]);
	}

	printf("\n\nObrigado por utilizar esse programa!");
	
}
