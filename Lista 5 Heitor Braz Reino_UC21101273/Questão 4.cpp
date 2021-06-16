//Algoritimo que calcula a quantidade de m�veis que um cliente pediu

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int selecaoMenu, cadeira=0, mesaComputador=0, estanteLivro=0, mesaImpressora=0, estanteCD=0, contador=1;
	
	printf("Bem-Vindo a Loja de M�veis!");

	//5� Passo: Mostrar ao usu�rio as op��es de m�veis no estoque
	do{
		printf("\n\nDigite o n�mero corresponte ao produto ao que voc� deseja solicitar. Contagem de Produtos = %d ", contador);
		printf("\n1- Cadeira");
		printf("\n2- Mesa de Computador");
		printf("\n3- Estante de Livros");
		printf("\n4- Mesa de Impressora");
		printf("\n5- Estante de CD");
		printf("\n6- Sair\n");
		scanf("%d", &selecaoMenu);
		
		//6� Switch Case, cada vez que uma op��o for selecionada soma +1 ao total de m�veis desse categoria
		switch(selecaoMenu){
			case 1:
				cadeira++;
				contador++;
				break;
				
			case 2:
				mesaComputador++;
				contador++;
				break;
			
			case 3:
				estanteLivro++;
				contador++;
				break;
			
			case 4:
				mesaImpressora++;
				contador++;
				break;
			
			case 5:
				estanteCD++;
				contador++;
				break;
			
			case 6:
				break;
				
			default:
				printf("N�o possuimos esse produto em nossos estoques. Tente novamente\n");
				system("pause");
				system("cls");
				
			}
		
		system("cls");

		}while(selecaoMenu != 6);
		
		//7� Passo: Mostrar os resultados na tela
		printf("Produtos Solicitados:\n\n");
		printf("Cadeiras = %d\n", cadeira);
		printf("Mesas de Computador = %d\n", mesaComputador);
		printf("Estantes de Livros = %d\n", estanteLivro);
		printf("Mesas de Impressora = %d\n", mesaImpressora);
		printf("Estante de CD = %d\n", estanteCD);
	
	//8� Passo: Retorno da fun��o	
	return 0;

//9� Passo: Fim da fun��o principal
}
