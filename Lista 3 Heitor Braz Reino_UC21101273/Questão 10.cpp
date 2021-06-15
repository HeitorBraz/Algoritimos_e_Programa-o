//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador, numero;
	
	//
	printf("Olá! Esse algoritimo irá ler os números inteiros que você digitar e mostrar a quantidade de números que você digitou. ");
	printf("\nPara parar a contagem digite um número negativo ou escreva mais de 100 números\n");
	
	do{
		printf("\nDigite um número: ");
		scanf("%d", &numero);
		fflush(stdin);
			if(numero > 0){
				contador++;
			}
			
	}while(numero >= 0 && contador < 100);
	
	system("cls");
	
	printf("A quantidade de números digitados foi: %d", contador);
	
	return 0;

}

