//Algoritimo que mostra o maior e menor salário de um funcionário

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador, maximoCDS, opcao;
	float  precoCD[100], porcentagem;
	
	//5º Passo: Perguntar para o usuário a quantidade de numeros que serão lidos;
	printf("Olá! Esse programa ler o preço de até 100 CDS e depois mudar o preço deles\n\n");
	printf("Digite quantos preços de CDS você deseja que o programa leia (Máximo 100): ");
	
	//Validação: Quantidade de CDS deve ser entre 1 e 100
	do{
		
		scanf("%d", &maximoCDS);
			
		if(maximoCDS > 100 || maximoCDS < 1){
				
			printf("\nDigite somente números entre 1 e 100: ");
		
		}
		
	}while(maximoCDS > 100 || maximoCDS < 1);
	
	//
	for(contador=1; contador<=maximoCDS; contador++){
		printf("\nDigite o preço do %dº CD: ", contador);
		scanf("%f", &precoCD[contador]);
	}
	
	system("cls");
	
	printf("O que você deseja fazer com o preço dos CD's: ");
	printf("\n\n1- Aumentar em 10%%");
	printf("\n2- Aumentar em x%");
	printf("\nOutro - Sair do Programa\n");
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao){
		
		case 1:
			
			printf("Novos Preços:\n");
			
			for(contador=1; contador<=maximoCDS; contador++){
				precoCD[contador] = precoCD[contador] * 1.1;
				printf("\n%dº CD = %.2f Reais", contador, precoCD[contador]);
			}
			
			break;
		
		case 2:
			
			printf("Digite em quantos %% você deseja aumentar o preço dos CD's (apenas números): ");
			scanf("%d", &porcentagem);
			
			printf("Novos Preços:\n");
			
			for(contador=1; contador<=maximoCDS; contador++){
				
				precoCD[contador] = (precoCD[contador]*((precoCD[contador]/100+1)));
				
				printf("\n%dº CD = %.2f Reais", contador, precoCD[contador]);
				
			}
			
			break;
	
			
			
				
		default :
			break;
		
	}
	
	return 0;
	
}
