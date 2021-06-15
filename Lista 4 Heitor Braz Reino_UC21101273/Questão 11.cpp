//Algoritimo que calcula a media aritimética dos números pares

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese");
	
	//4º Passo: Definir variáveis
	int contador=0, somaDosPares=0, numero, resto, media;
	
	printf("Olá! Esse programa irá calcular a média aritimética dos números pares que você inserir\n");
	
	//5º Passo: Do While que se repete até que o número digitado seja 0
	do{
		
		//6º Passo: Pedir número par para o usuário
		printf("\nDigite um número Par (Digite 0 para finalizar o algoritimo):\n");
		scanf("%d", &numero);
		resto = numero % 2;
			//7º Passo: Se número for par, somar com os outros e somar +1 ao contador
			if(resto==0){
				somaDosPares = somaDosPares + numero;
				contador++;
			}
	
	}while(numero!=0);
	
	//8º Passo: Fórmula da média aritimética
	media = somaDosPares/(contador-1);
	
	system("cls");
	
	//9º Passo: Mostrar resultado na tela
	printf("A média aritimética de todos os números pares digitados é = %d", media);
	printf("\n\nObrigado por utilizar esse programa!");
	
	//10º Passo: Retorno da função
	return 0;

//11º Passo:	
}
	
