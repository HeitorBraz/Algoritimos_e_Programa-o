//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	char selecaoMenu, auxiliar;
	float tinto, branco, rose, vinhoTotal, porcentagemRose, porcentagemBranco, porcentagemTinto;
	
	printf("Bem-Vindo a Adega!");

	//5º Passo: Mostrar ao usuário as opções de vinho no estoque
	do{
		printf("\n\nVinhos disponíveis no estoque:");
		printf("\nT- Tinto");
		printf("\nB- Branco");
		printf("\nR- Rosê");
		printf("\n\nDigite a letra equivalente ao vinho que você deseja adicionar ao estoque: ");
		scanf("%s", &selecaoMenu);
		
		//6º Passo: Fazer alterações no vinho tinto
		if(selecaoMenu == 't' || selecaoMenu == 'T'){
			printf("Quantas unidades de vinho tinto tem no estoque? ");
			scanf("%f", &tinto);
			printf("\nE- Fazer alterações no estoque");
			printf("\nF- Levantamento de Estoque\n");
			scanf("%s", &auxiliar);
		}
		
		//7º Passo: Fazer alterações do vinho branco
		else if(selecaoMenu == 'B' || selecaoMenu == 'b'){
			printf("Quantas unidades de vinho branco tem no estoque? ");
			scanf("%f", &branco);
			printf("\nE- Fazer alterações no estoque");
			printf("\nF- Finalizar alterações\n");
			scanf("%s", &auxiliar);
		}
		
		//8º Passo: Alterações do vinho rosé
		else{
			printf("Quantas unidades de vinho rosé tem no estoque? ");
			scanf("%f", &rose);
			printf("\nE- Fazer alterações no estoque");
			printf("\nF- Finalizar alterações\n");
			scanf("%s", &auxiliar);
		}
		
		//9º Passo: Caso o usuário deseje finalizar as alterações
		if(auxiliar!= 'E' && auxiliar!='e'){
			break;
		}
	
	}while(selecaoMenu != 'T' && selecaoMenu != 'B' && selecaoMenu!= 'R' && selecaoMenu != 't'&& selecaoMenu != 'b' && selecaoMenu != 'r' ||auxiliar=='E' || auxiliar=='e');
		
		system("cls");
		
		//10º Passo: Fórmulas para porcentagem dos vinhos
		vinhoTotal=tinto+branco+rose;
		porcentagemRose= (rose / vinhoTotal)*100;
		porcentagemTinto= (tinto / vinhoTotal)*100;
		porcentagemBranco= (branco / vinhoTotal)*100;
		
		//11º Passo: Mostrar resultados na tela
		printf("Levantamento do Estoque:\n ");
		printf("1- Vinho Tinto: Qntd = %.0f\n",tinto);
		printf("2- Vinho Branco: Qntd = %.0f\n",branco);
		printf("3- Vinho Rosé: Qntd = %.0f\n\n",rose);
		printf("Porcentagem do Estoque:\n\n ");
		printf("1- Vinho Tinto: %.2f Porcentos do Total do Estoque\n",porcentagemTinto);
		printf("2- Vinho Branco: %.2f Porcentos do Total do Estoque\n",porcentagemBranco);
		printf("3- Vinho Rosé: %.2f Porcentos do Total do Estoque\n",porcentagemRose);
		
	//12º Passo: Retorno da função
	return 0;
	
	//13º Passo: Fim da função
}
