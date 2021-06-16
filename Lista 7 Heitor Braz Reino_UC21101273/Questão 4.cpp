//Algoritimo que l� at� letras e depois as escreve na ordem inversas que foram lidas

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador, maximoLetras;
	char letra[30];
	
	//5� Passo: Perguntar para o usu�rio a quantidade de letras que ser�o lidas;
	printf("Ol�! Esse programa ir� ler um quantidade de letra e depois as escrever�o na tela na ordem inversa que foram lidas.\n\n");
	printf("Digite quantas letras voc� deseja escrever (M�ximo 30): ");
	
	//Valida��o: Quantidade de letras deve ser de no m�ximo 30
	do{
		
		scanf("%d", &maximoLetras);
			
		if(maximoLetras > 30 || maximoLetras < 1){
				
			printf("\nDigite somente n�meros entre 1 e 30: ");
			
		}
		
	}while(maximoLetras > 30 || maximoLetras < 1);
	
	//6� Passo: Ler cada letra da quantidade de letras que o usu�rio especificou
	for(contador = 1; contador <= maximoLetras; contador++){
		
		printf("Digite a %d� letra:\n ", contador);
		scanf(" %c", &letra[contador]);
	
	}
	
	system("cls");
	printf("Letras na ordem inversa:\n\n");
	
	//7� Passo: Imprimir todas as letras lidas ao inverso
	for(contador = maximoLetras; contador >= 1; contador--){
		
		printf("-%c\n\n", letra[contador]);
		
	}

	//8� Passo: Retorno da fun��o
	return 0;

//9� Passo: Fim do algoritimo	
}
