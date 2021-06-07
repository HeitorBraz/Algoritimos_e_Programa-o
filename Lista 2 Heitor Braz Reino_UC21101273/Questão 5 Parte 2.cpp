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
	
	// 6� Passo: Se colocar N�mero Negativo, programa N�o Funciona
	if(ladoA<=0 || ladoB<=0 || ladoC<=0){
		printf("Insira somente valores positivos!");
	}
	
	// 7� Passo: Se cada Lado for Menor do que a Soma dos outros Dois Lados, pode-se formar um Tri�ngulo
	else if(ladoA < ladoB+ladoC && ladoB < ladoA+ladoC && ladoC < ladoA+ladoB ){
		printf("\nEsses 3 valores podem formar um tri�ngulo :)");
	}
	
	// 8� Passo: Se cada Lado for Menor do que a Soma dos outros Dois Lados, na� se pode formar um Tri�ngulo
	else{
		printf("\nEsses 3 valores n�o podem formar um tri�ngulo :( Tente Novante");
		printf("\nDica: Para ser considerado um tri�ngulo, cada lado deve ser menor do que a soma dos outros dois lados");
	}
	
	// 9� Passo: Retorno da Fun��o
	return 0;
	
	// 10� Passo: Finalizar Algoritimo
}
