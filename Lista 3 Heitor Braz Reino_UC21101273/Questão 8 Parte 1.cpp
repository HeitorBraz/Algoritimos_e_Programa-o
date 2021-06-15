// Algoritimo que auxilia na precifica��o com do while.

//1� Passo: Incluir bibliotecas necess�rias
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int numeroProdutos, contador=1;
	float preco, precoNovo;
	int identificacaoProduto, adicaoProduto;
	
	printf("Bem-Vindo(a)! Esse programa ir� te auxiliar a calcular o aumento de pre�o nos seus produtos.");
	
	//6� Passo: Perguntar o idenficador e o pre�o de cada produto
	do{

		printf("\n\nDigite a identifica��o do %d� produto (n�mero inteiro): ", contador);
		scanf("%d", &identificacaoProduto);
		printf("\nDigite o pre�o do atual do produto: ");
		scanf("%f", &preco);
		
		//7� Passo: Definir a f�rmula para o novo pre�o
		precoNovo = preco*1.1;
		
		//8� Passo: Mostrar novo pre�o na tela
		printf("\nO novo pre�o do produto (%d) �: (%.2f reais)", identificacaoProduto, precoNovo);
		contador++;
		
		//9
		printf("\n\nDeseja adicionar outro produto?");
		printf("\n1- Sim");
		printf("\n2- N�o\n");
		scanf("%d", &adicaoProduto);
		
		
	}while(adicaoProduto == 1);
	
		printf("\nObrigado por utilizar esse programa!");
		
		//9� Passo: Retorno da fun��o
		return 0;

//10� Passo: Fim do algoritimo		
}
