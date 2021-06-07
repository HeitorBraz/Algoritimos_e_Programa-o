//Algoritimo que l� dois valores n�mericos e apresenta a diferen�a do menor valor pelo menor valor:

//1� Passo: Inserir bibliotecas necess�rias
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar algoritimo
int main(){
	
	//3� Passo: Definir locale.h
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir vari�veis
	float valorA, valorB;
	
	//5� Passo: Pedir valores ao usu�rio
	printf("Bem-Vindo(a)! Esse programa ir� calcular a diferen�a entre 2 valores que ser�o inseridos por voc�.");
	printf("\nInsira o primeiro valor: ");
	scanf("%f", &valorA);
	printf("Insira o segundo valor: ");
	scanf("%f", &valorB);
	printf("Resultado:");
	
	//6� Passo: Se o valor A for maior que o valor B, resultado = a - b
	if(valorA >= valorB){
		printf("\n(%.1f) - (%.1f) = (%.1f)", valorA, valorB, valorA - valorB);	
	}
	
	//7� Passo: Se o valor B for maior que o valor A, resultado = b - a
	else{
		printf("\n(%.1f) - (%.1f) = (%.1f)", valorB, valorA, valorB - valorA);
	}

	printf("\nObrigado por utilizar esse programa!"); //Agradecimento
	
	//8� Passo: Retorno da fun��o
	return 0;
	
	//9� Passo: Fim do algoritimo
}
