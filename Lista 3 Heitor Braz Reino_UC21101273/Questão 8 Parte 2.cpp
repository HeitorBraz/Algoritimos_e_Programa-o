// Algoritimo que auxilia na precifica��o com for

//1� Passo: Incluir bibliotecas necess�rias
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int numeroProdutos, contador;
	float preco, precoNovo;
	int identificacaoProduto;
	
	//5� Passo: Perguntar o n�mero de produtos que o pre�o ser� alterado
	printf("Bem-Vindo(a)! Esse programa ir� te auxiliar a calcular o aumento de pre�o nos seus produtos.");
	printf("\n\nEscreva a quantidade de produtos que o pre�o ser� alterado: ");
	scanf("%d", &numeroProdutos);

	//6� Passo: Perguntar o idenficador e o pre�o de cada produto
	for(contador=1; contador<=numeroProdutos; contador++){
		
		printf("\n\nDigite a identifica��o do %d� produto (n�mero inteiro): ", contador);
		scanf("%d", &identificacaoProduto);
		printf("\nDigite o pre�o do atual do produto: ");
		scanf("%f", &preco);
		
		//7� Passo: Definir a f�rmula para o novo pre�o
		precoNovo = preco*1.1;
		
		//8� Passo: Mostrar novo pre�o na tela
		printf("\nO novo pre�o do produto (%d) �: (%.2f reais)", identificacaoProduto, precoNovo);
		printf("\nObrigado por utilizar esse programa!");
	
	}
		
		//9� Passo: Retorno da fun��o
		return 0;

//10� Passo: Fim do algoritimo		
}
