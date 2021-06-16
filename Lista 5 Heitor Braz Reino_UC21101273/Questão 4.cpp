//Algoritimo que calcula a quantidade de móveis que um cliente pediu

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int selecaoMenu, cadeira=0, mesaComputador=0, estanteLivro=0, mesaImpressora=0, estanteCD=0, contador=1;
	
	printf("Bem-Vindo a Loja de Móveis!");

	//5º Passo: Mostrar ao usuário as opções de móveis no estoque
	do{
		printf("\n\nDigite o número corresponte ao produto ao que você deseja solicitar. Contagem de Produtos = %d ", contador);
		printf("\n1- Cadeira");
		printf("\n2- Mesa de Computador");
		printf("\n3- Estante de Livros");
		printf("\n4- Mesa de Impressora");
		printf("\n5- Estante de CD");
		printf("\n6- Sair\n");
		scanf("%d", &selecaoMenu);
		
		//6º Switch Case, cada vez que uma opção for selecionada soma +1 ao total de móveis desse categoria
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
				printf("Não possuimos esse produto em nossos estoques. Tente novamente\n");
				system("pause");
				system("cls");
				
			}
		
		system("cls");

		}while(selecaoMenu != 6);
		
		//7º Passo: Mostrar os resultados na tela
		printf("Produtos Solicitados:\n\n");
		printf("Cadeiras = %d\n", cadeira);
		printf("Mesas de Computador = %d\n", mesaComputador);
		printf("Estantes de Livros = %d\n", estanteLivro);
		printf("Mesas de Impressora = %d\n", mesaImpressora);
		printf("Estante de CD = %d\n", estanteCD);
	
	//8º Passo: Retorno da função	
	return 0;

//9º Passo: Fim da função principal
}
