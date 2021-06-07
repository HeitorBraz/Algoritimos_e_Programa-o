//Algoritimo para verificar se, a partir de 3 valores dados pelo usu�rio, uma figura pode formar um tri�ngulo

// 1� Passo: Incluir as Bibliotecas
#include<stdio.h>
#include<locale.h>

// 2� Passo: Iniciar Algoritimo
int main(){
	
	// 3� Passo: Definir locale.h
	setlocale(LC_ALL, "Portuguese");
	
	// 4� Passo: Definir Vari�veis
	float ladoA, ladoB, ladoC;
	
	// 5� Passo: Pedir Valores para o Usu�rio
	printf("Bem-Vindo(a)! Esse programa te dir� se os 3 valores que ser�o inseridos por voc� podem formar um tri�ngulo.\n");
	printf("Insira o valor do 1� lado: ");
	scanf("%f", &ladoA);
	printf("\nInsira o valor do 2� lado: ");
	scanf("%f", &ladoB);
	printf("\nInsira o valor do 3� lado: ");
	scanf("%f", &ladoC);
	
	// 6� Passo: Se cada Lado for Menor do que a Soma dos outros Dois Lados, pode-se formar um Tri�ngulo
	if(ladoA < ladoB+ladoC && ladoB < ladoA+ladoC && ladoC < ladoA+ladoB ){
		printf("\nEsses 3 valores podem formar um tri�ngulo :)");
	}
	
	// 7� Passo: Retorno da Fun��o
	return 0;
	
	// 8� Passo: Finalizar Algoritimo
}
