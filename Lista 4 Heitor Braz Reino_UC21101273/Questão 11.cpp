//Algoritimo que calcula a media aritim�tica dos n�meros pares

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese");
	
	//4� Passo: Definir vari�veis
	int contador=0, somaDosPares=0, numero, resto, media;
	
	printf("Ol�! Esse programa ir� calcular a m�dia aritim�tica dos n�meros pares que voc� inserir\n");
	
	//5� Passo: Do While que se repete at� que o n�mero digitado seja 0
	do{
		
		//6� Passo: Pedir n�mero par para o usu�rio
		printf("\nDigite um n�mero Par (Digite 0 para finalizar o algoritimo):\n");
		scanf("%d", &numero);
		resto = numero % 2;
			//7� Passo: Se n�mero for par, somar com os outros e somar +1 ao contador
			if(resto==0){
				somaDosPares = somaDosPares + numero;
				contador++;
			}
	
	}while(numero!=0);
	
	//8� Passo: F�rmula da m�dia aritim�tica
	media = somaDosPares/(contador-1);
	
	system("cls");
	
	//9� Passo: Mostrar resultado na tela
	printf("A m�dia aritim�tica de todos os n�meros pares digitados � = %d", media);
	printf("\n\nObrigado por utilizar esse programa!");
	
	//10� Passo: Retorno da fun��o
	return 0;

//11� Passo:	
}
	
