//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	char selecaoMenu, auxiliar;
	float tinto, branco, rose, vinhoTotal, porcentagemRose, porcentagemBranco, porcentagemTinto;
	
	printf("Bem-Vindo a Adega!");

	//5� Passo: Mostrar ao usu�rio as op��es de vinho no estoque
	do{
		printf("\n\nVinhos dispon�veis no estoque:");
		printf("\nT- Tinto");
		printf("\nB- Branco");
		printf("\nR- Ros�");
		printf("\n\nDigite a letra equivalente ao vinho que voc� deseja adicionar ao estoque: ");
		scanf("%s", &selecaoMenu);
		
		//6� Passo: Fazer altera��es no vinho tinto
		if(selecaoMenu == 't' || selecaoMenu == 'T'){
			printf("Quantas unidades de vinho tinto tem no estoque? ");
			scanf("%f", &tinto);
			printf("\nE- Fazer altera��es no estoque");
			printf("\nF- Levantamento de Estoque\n");
			scanf("%s", &auxiliar);
		}
		
		//7� Passo: Fazer altera��es do vinho branco
		else if(selecaoMenu == 'B' || selecaoMenu == 'b'){
			printf("Quantas unidades de vinho branco tem no estoque? ");
			scanf("%f", &branco);
			printf("\nE- Fazer altera��es no estoque");
			printf("\nF- Finalizar altera��es\n");
			scanf("%s", &auxiliar);
		}
		
		//8� Passo: Altera��es do vinho ros�
		else{
			printf("Quantas unidades de vinho ros� tem no estoque? ");
			scanf("%f", &rose);
			printf("\nE- Fazer altera��es no estoque");
			printf("\nF- Finalizar altera��es\n");
			scanf("%s", &auxiliar);
		}
		
		//9� Passo: Caso o usu�rio deseje finalizar as altera��es
		if(auxiliar!= 'E' && auxiliar!='e'){
			break;
		}
	
	}while(selecaoMenu != 'T' && selecaoMenu != 'B' && selecaoMenu!= 'R' && selecaoMenu != 't'&& selecaoMenu != 'b' && selecaoMenu != 'r' ||auxiliar=='E' || auxiliar=='e');
		
		system("cls");
		
		//10� Passo: F�rmulas para porcentagem dos vinhos
		vinhoTotal=tinto+branco+rose;
		porcentagemRose= (rose / vinhoTotal)*100;
		porcentagemTinto= (tinto / vinhoTotal)*100;
		porcentagemBranco= (branco / vinhoTotal)*100;
		
		//11� Passo: Mostrar resultados na tela
		printf("Levantamento do Estoque:\n ");
		printf("1- Vinho Tinto: Qntd = %.0f\n",tinto);
		printf("2- Vinho Branco: Qntd = %.0f\n",branco);
		printf("3- Vinho Ros�: Qntd = %.0f\n\n",rose);
		printf("Porcentagem do Estoque:\n\n ");
		printf("1- Vinho Tinto: %.2f Porcentos do Total do Estoque\n",porcentagemTinto);
		printf("2- Vinho Branco: %.2f Porcentos do Total do Estoque\n",porcentagemBranco);
		printf("3- Vinho Ros�: %.2f Porcentos do Total do Estoque\n",porcentagemRose);
		
	//12� Passo: Retorno da fun��o
	return 0;
	
	//13� Passo: Fim da fun��o
}
