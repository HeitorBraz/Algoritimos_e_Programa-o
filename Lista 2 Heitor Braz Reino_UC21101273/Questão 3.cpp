//Algoritimo para verificar se, a partir de 3 valores dados pelo usuário, uma figura pode formar um triângulo

// 1º Passo: Incluir as Bibliotecas
#include<stdio.h>
#include<locale.h>

// 2º Passo: Iniciar Algoritimo
int main(){
	
	// 3º Passo: Definir locale.h
	setlocale(LC_ALL, "Portuguese");
	
	// 4º Passo: Definir Variáveis
	float ladoA, ladoB, ladoC;
	
	// 5º Passo: Pedir Valores para o Usuário
	printf("Bem-Vindo(a)! Esse programa te dirá se os 3 valores que serão inseridos por você podem formar um triângulo.\n");
	printf("Insira o valor do 1º lado: ");
	scanf("%f", &ladoA);
	printf("\nInsira o valor do 2º lado: ");
	scanf("%f", &ladoB);
	printf("\nInsira o valor do 3º lado: ");
	scanf("%f", &ladoC);
	
	// 6º Passo: Se cada Lado for Menor do que a Soma dos outros Dois Lados, pode-se formar um Triângulo
	if(ladoA < ladoB+ladoC && ladoB < ladoA+ladoC && ladoC < ladoA+ladoB ){
		printf("\nEsses 3 valores podem formar um triângulo :)");
	}
	
	// 7º Passo: Retorno da Função
	return 0;
	
	// 8º Passo: Finalizar Algoritimo
}
