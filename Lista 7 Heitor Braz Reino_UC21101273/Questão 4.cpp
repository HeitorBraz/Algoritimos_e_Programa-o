//Algoritimo que lê até letras e depois as escreve na ordem inversas que foram lidas

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador, maximoLetras;
	char letra[30];
	
	//5º Passo: Perguntar para o usuário a quantidade de letras que serão lidas;
	printf("Olá! Esse programa irá ler um quantidade de letra e depois as escreverão na tela na ordem inversa que foram lidas.\n\n");
	printf("Digite quantas letras você deseja escrever (Máximo 30): ");
	
	//Validação: Quantidade de letras deve ser de no máximo 30
	do{
		
		scanf("%d", &maximoLetras);
			
		if(maximoLetras > 30 || maximoLetras < 1){
				
			printf("\nDigite somente números entre 1 e 30: ");
			
		}
		
	}while(maximoLetras > 30 || maximoLetras < 1);
	
	//6º Passo: Ler cada letra da quantidade de letras que o usuário especificou
	for(contador = 1; contador <= maximoLetras; contador++){
		
		printf("Digite a %dª letra:\n ", contador);
		scanf(" %c", &letra[contador]);
	
	}
	
	system("cls");
	printf("Letras na ordem inversa:\n\n");
	
	//7º Passo: Imprimir todas as letras lidas ao inverso
	for(contador = maximoLetras; contador >= 1; contador--){
		
		printf("-%c\n\n", letra[contador]);
		
	}

	//8º Passo: Retorno da função
	return 0;

//9º Passo: Fim do algoritimo	
}
