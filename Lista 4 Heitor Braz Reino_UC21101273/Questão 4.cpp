#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador;
	int resultado[20];
	
	//5º Passo: Definir os 3 primeiros valores
	resultado[1]=1;
	resultado[2]=1;
	resultado[3]=2;
	
	//6º Passo: Mostrar 3 primeiros valores na tela
	printf("Esse programa irá mostrar os 20 primeiros termos da sequência de Fibonacci\n");
	printf("\n1º = %d", resultado[1]);
	printf("\n2º = %d", resultado[2]);
	printf("\n3º = %d", resultado[3]);
	
	//7º Passo: Criar um for para os outros 16 valores
	
	for(contador=4; contador<=20; contador++){
		//Fórmula da sequência de Fibonacci
		resultado[contador] = resultado[contador-1] + resultado[contador-2];
		printf("\n%dº = %d",contador, resultado[contador]);
	}
	
	printf("\n\nObrigado por utilizar esse programa!");
	
	//8º Passo: Retorno da função
	return 0;
	
//9º Passo: Fim do algoritimo principal	
}
	
