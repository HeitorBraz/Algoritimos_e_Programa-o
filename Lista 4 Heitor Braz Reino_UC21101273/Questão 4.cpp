#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador;
	int resultado[20];
	
	//5� Passo: Definir os 3 primeiros valores
	resultado[1]=1;
	resultado[2]=1;
	resultado[3]=2;
	
	//6� Passo: Mostrar 3 primeiros valores na tela
	printf("Esse programa ir� mostrar os 20 primeiros termos da sequ�ncia de Fibonacci\n");
	printf("\n1� = %d", resultado[1]);
	printf("\n2� = %d", resultado[2]);
	printf("\n3� = %d", resultado[3]);
	
	//7� Passo: Criar um for para os outros 16 valores
	
	for(contador=4; contador<=20; contador++){
		//F�rmula da sequ�ncia de Fibonacci
		resultado[contador] = resultado[contador-1] + resultado[contador-2];
		printf("\n%d� = %d",contador, resultado[contador]);
	}
	
	printf("\n\nObrigado por utilizar esse programa!");
	
	//8� Passo: Retorno da fun��o
	return 0;
	
//9� Passo: Fim do algoritimo principal	
}
	
