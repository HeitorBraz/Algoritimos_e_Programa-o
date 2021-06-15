//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int selecaoMenu, auxiliar, abacaxi, maca, pera;
	
	printf("Bem-Vindo ao Mercado das Frutas!");

	//5� Mostrar ao usu�rio as op��es de frutas
	
	do{
		printf("\n\nAtualmente, estamos vendendo tr�s variedades de frutas:");
		printf("\n1- Abacaxi");
		printf("\n2- Ma��");
		printf("\n3- Pera");
		printf("\n\nDigite o n�mero equivalente a fruta que deseja adicionar ao carrinho: ");
		scanf("%d", &selecaoMenu);
		
		system("cls");
		
		//6� Passo: Criar switch case para menu
		switch(selecaoMenu){
			
			//7� Passo: Abacaxi
			case 1:
				printf("Quantas unidades de abacaxi voc� deseja? ");
				scanf("%d", &abacaxi);
				printf("\n1- Fazer altera��es no carrinho / Comprar outras frutas");
				printf("\n2- Fechar carrinho\n");
				scanf("%d", &auxiliar);
				system("cls");
				break;
			
			//8� Passo: Ma��	
			case 2:
				printf("Quantas unidades de ma�� voc� deseja? ");
				scanf("%d", &maca);
				printf("\n1- Fazer altera��es no carrinho / Comprar outras frutas");
				printf("\n2- Fechar carrinho\n");
				scanf("%d", &auxiliar);
				system("cls");
				break;
			
			//9� Passo: Pera
			case 3:
				printf("Quantas unidades de pera voc� deseja? ");
				scanf("%d", &pera);
				printf("\n1- Fazer altera��es no carrinho / Comprar outras frutas");
				printf("\n2- Fechar carrinho\n");
				scanf("%d", &auxiliar);
				system("cls");
				break;
			
			//10� Passo: Caso o usu�rio selecionar outra op��o
			default:
				printf("Selecione uma op��o v�lida!");
				auxiliar = 1;
			
		}
	}while(auxiliar != 2);
	
	system("pause");
	system("cls");
	
	//11� Passo: Mostrar na tela as frutas compradas pelo usu�rio
	printf("Carrinho de Compras");
	printf("\n\nAbacaxi- Qntd = %d", abacaxi);
	printf("\nMa��- Qntd = %d", maca);
	printf("\nPera- Qntd = %d", pera);
	printf("\n\nObrigado pela coolabora��o! :)");
	
	//12� Passo: Retorno da fun��o
	return 0;
	
	//13� Passo: Fim da fun��o
}
