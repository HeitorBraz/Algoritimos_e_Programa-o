// Algoritimo para calculo da f�rmula: H = 1/1+1/2+1/3+ ... +1/N.

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar fun��o principal
int main(){

	//3� Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	//4� Passo: Definir vari�veis
	double N, contador;
	double H = 0;
	double divisao = 0;
	
	//5� Passo: Perguntar para o usu�rio o valor de N
	printf("Ol� esse programa ir� te mostrar o valor de H na f�rmula: H = 1/1+1/2+1/3+ ... +1/N");
	printf("\n\nDigite o valor de N: ");
	scanf("%lf", &N);
	
	//
	for(contador=1; contador<=N; contador++){
		divisao = 1/contador;
		H = H + divisao; 
		
	}
	
	printf("O resultado da f�rmula �: %lf", H);

	return 0;

}
