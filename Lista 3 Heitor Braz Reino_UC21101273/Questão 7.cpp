//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int selecaoMenu, auxiliar, abacaxi, maca, pera;
	
	printf("Bem-Vindo ao Mercado das Frutas!");

	//5º Mostrar ao usuário as opções de frutas
	
	do{
		printf("\n\nAtualmente, estamos vendendo três variedades de frutas:");
		printf("\n1- Abacaxi");
		printf("\n2- Maçã");
		printf("\n3- Pera");
		printf("\n\nDigite o número equivalente a fruta que deseja adicionar ao carrinho: ");
		scanf("%d", &selecaoMenu);
		
		system("cls");
		
		//6º Passo: Criar switch case para menu
		switch(selecaoMenu){
			
			//7º Passo: Abacaxi
			case 1:
				printf("Quantas unidades de abacaxi você deseja? ");
				scanf("%d", &abacaxi);
				printf("\n1- Fazer alterações no carrinho / Comprar outras frutas");
				printf("\n2- Fechar carrinho\n");
				scanf("%d", &auxiliar);
				system("cls");
				break;
			
			//8º Passo: Maçã	
			case 2:
				printf("Quantas unidades de maçã você deseja? ");
				scanf("%d", &maca);
				printf("\n1- Fazer alterações no carrinho / Comprar outras frutas");
				printf("\n2- Fechar carrinho\n");
				scanf("%d", &auxiliar);
				system("cls");
				break;
			
			//9º Passo: Pera
			case 3:
				printf("Quantas unidades de pera você deseja? ");
				scanf("%d", &pera);
				printf("\n1- Fazer alterações no carrinho / Comprar outras frutas");
				printf("\n2- Fechar carrinho\n");
				scanf("%d", &auxiliar);
				system("cls");
				break;
			
			//10º Passo: Caso o usuário selecionar outra opção
			default:
				printf("Selecione uma opção válida!");
				auxiliar = 1;
			
		}
	}while(auxiliar != 2);
	
	system("pause");
	system("cls");
	
	//11º Passo: Mostrar na tela as frutas compradas pelo usuário
	printf("Carrinho de Compras");
	printf("\n\nAbacaxi- Qntd = %d", abacaxi);
	printf("\nMaçã- Qntd = %d", maca);
	printf("\nPera- Qntd = %d", pera);
	printf("\n\nObrigado pela coolaboração! :)");
	
	//12º Passo: Retorno da função
	return 0;
	
	//13º Passo: Fim da função
}
