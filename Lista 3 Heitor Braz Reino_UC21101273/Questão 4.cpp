// Algoritimo para calculo da fórmula: H = 1/1+1/2+1/3+ ... +1/N.

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar função principal
int main(){

	//3º Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	//4º Passo: Definir variáveis
	double N, contador;
	double H = 0;
	double divisao = 0;
	
	//5º Passo: Perguntar para o usuário o valor de N
	printf("Olá esse programa irá te mostrar o valor de H na fórmula: H = 1/1+1/2+1/3+ ... +1/N");
	printf("\n\nDigite o valor de N: ");
	scanf("%lf", &N);
	
	//
	for(contador=1; contador<=N; contador++){
		divisao = 1/contador;
		H = H + divisao; 
		
	}
	
	printf("O resultado da fórmula é: %lf", H);

	return 0;

}
