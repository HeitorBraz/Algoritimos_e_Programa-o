//1� Passo: Incluir bibliotecas necess�rias.
//Algoritimo que mostra os n�meros em ordem cresente
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	float numero[3], maiorNumero, menorNumero, medioNumero;
	int contador, i;
	
	//5� Passo: Pedir os 3 n�meros para o usu�rio
	printf("Digite o 1� N�mero: ");
	scanf("%f", &numero[1]);
	printf("Digite o 2� N�mero: ");
	scanf("%f", &numero[2]);
	printf("Digite o 3� N�mero: ");
	scanf("%f", &numero[3]);
	
	
	//6� Passo: Definir todas as possibilidades de uma n�mero ser maior ou igual ao outro, e a partir dessas possibilidades definir o menor, medio e maior valor
	if(numero[1]>=numero[2] && numero[1]>=numero[3] && numero[2]>=numero[3]){
		maiorNumero = numero[1];
		medioNumero = numero[2];
		menorNumero = numero[3];
	}
	
	else if(numero[1]>=numero[2] && numero[1]>=numero[3] && numero[3]>=numero[2]){
		maiorNumero = numero[1];
		medioNumero = numero[3];
		menorNumero = numero[2];
	}
	
	else if(numero[2]>=numero[1] && numero[2]>=numero[3] && numero[1]>=numero[3]){
		maiorNumero = numero[2];
		medioNumero = numero[1];
		menorNumero = numero[3];
	}
	
	else if(numero[2]>=numero[1] && numero[2]>=numero[3] && numero[3]>=numero[1]){
		maiorNumero = numero[2];
		medioNumero = numero[3];
		menorNumero = numero[1];
	}
	
	else if(numero[3]>=numero[1] && numero[3]>=numero[2] && numero[2]>=numero[1]){
		maiorNumero = numero[3];
		medioNumero = numero[2];
		menorNumero = numero[1];
	}
	
	else if(numero[3]>=numero[1] && numero[3]>=numero[2] && numero[1]>=numero[2]){
		maiorNumero = numero[3];
		medioNumero = numero[1];
		menorNumero = numero[2];
	}
	
	system("cls");
	
	//7� Passo: Mostrar os n�meros na tela pela ordem cresente
	printf("N�meros em Ordem Cresente:");
	printf("\n\n1- %f\n", menorNumero);
	printf("\n2- %f\n", medioNumero);
	printf("\n3- %f\n", maiorNumero);

	
	//8� Passo: Retorno da fun��o
	return 0;
	
//9� Passo: Fim da fun��o principal 
}
	
			
		
			
		
	
		
	
	
		
	
