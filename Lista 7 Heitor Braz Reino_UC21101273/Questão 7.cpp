//Algoritimo que mostra o maior e menor sal�rio de um funcion�rio

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador, maximoCDS, opcao;
	float  precoCD[100], porcentagem;
	
	//5� Passo: Perguntar para o usu�rio a quantidade de numeros que ser�o lidos;
	printf("Ol�! Esse programa ler o pre�o de at� 100 CDS e depois mudar o pre�o deles\n\n");
	printf("Digite quantos pre�os de CDS voc� deseja que o programa leia (M�ximo 100): ");
	
	//Valida��o: Quantidade de CDS deve ser entre 1 e 100
	do{
		
		scanf("%d", &maximoCDS);
			
		if(maximoCDS > 100 || maximoCDS < 1){
				
			printf("\nDigite somente n�meros entre 1 e 100: ");
		
		}
		
	}while(maximoCDS > 100 || maximoCDS < 1);
	
	//
	for(contador=1; contador<=maximoCDS; contador++){
		printf("\nDigite o pre�o do %d� CD: ", contador);
		scanf("%f", &precoCD[contador]);
	}
	
	system("cls");
	
	printf("O que voc� deseja fazer com o pre�o dos CD's: ");
	printf("\n\n1- Aumentar em 10%%");
	printf("\n2- Aumentar em x%");
	printf("\nOutro - Sair do Programa\n");
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao){
		
		case 1:
			
			printf("Novos Pre�os:\n");
			
			for(contador=1; contador<=maximoCDS; contador++){
				precoCD[contador] = precoCD[contador] * 1.1;
				printf("\n%d� CD = %.2f Reais", contador, precoCD[contador]);
			}
			
			break;
		
		case 2:
			
			printf("Digite em quantos %% voc� deseja aumentar o pre�o dos CD's (apenas n�meros): ");
			scanf("%d", &porcentagem);
			
			printf("Novos Pre�os:\n");
			
			for(contador=1; contador<=maximoCDS; contador++){
				
				precoCD[contador] = (precoCD[contador]*((precoCD[contador]/100+1)));
				
				printf("\n%d� CD = %.2f Reais", contador, precoCD[contador]);
				
			}
			
			break;
	
			
			
				
		default :
			break;
		
	}
	
	return 0;
	
}
