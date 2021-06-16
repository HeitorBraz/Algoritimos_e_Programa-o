//1º Passo: Incluir bibliotecas necessárias.
//Algoritimo que mostra os números em ordem cresente
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	float numero[3], maiorNumero, menorNumero, medioNumero;
	int contador, i;
	
	//5º Passo: Pedir os 3 números para o usuário
	printf("Digite o 1º Número: ");
	scanf("%f", &numero[1]);
	printf("Digite o 2º Número: ");
	scanf("%f", &numero[2]);
	printf("Digite o 3º Número: ");
	scanf("%f", &numero[3]);
	
	
	//6º Passo: Definir todas as possibilidades de uma número ser maior ou igual ao outro, e a partir dessas possibilidades definir o menor, medio e maior valor
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
	
	//7º Passo: Mostrar os números na tela pela ordem cresente
	printf("Números em Ordem Cresente:");
	printf("\n\n1- %f\n", menorNumero);
	printf("\n2- %f\n", medioNumero);
	printf("\n3- %f\n", maiorNumero);

	
	//8º Passo: Retorno da função
	return 0;
	
//9º Passo: Fim da função principal 
}
	
			
		
			
		
	
		
	
	
		
	
