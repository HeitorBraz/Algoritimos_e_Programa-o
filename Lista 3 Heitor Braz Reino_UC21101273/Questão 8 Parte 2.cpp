// Algoritimo que auxilia na precificação com for

//1º Passo: Incluir bibliotecas necessárias
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int numeroProdutos, contador;
	float preco, precoNovo;
	int identificacaoProduto;
	
	//5º Passo: Perguntar o número de produtos que o preço será alterado
	printf("Bem-Vindo(a)! Esse programa irá te auxiliar a calcular o aumento de preço nos seus produtos.");
	printf("\n\nEscreva a quantidade de produtos que o preço será alterado: ");
	scanf("%d", &numeroProdutos);

	//6º Passo: Perguntar o idenficador e o preço de cada produto
	for(contador=1; contador<=numeroProdutos; contador++){
		
		printf("\n\nDigite a identificação do %dº produto (número inteiro): ", contador);
		scanf("%d", &identificacaoProduto);
		printf("\nDigite o preço do atual do produto: ");
		scanf("%f", &preco);
		
		//7º Passo: Definir a fórmula para o novo preço
		precoNovo = preco*1.1;
		
		//8º Passo: Mostrar novo preço na tela
		printf("\nO novo preço do produto (%d) é: (%.2f reais)", identificacaoProduto, precoNovo);
		printf("\nObrigado por utilizar esse programa!");
	
	}
		
		//9º Passo: Retorno da função
		return 0;

//10º Passo: Fim do algoritimo		
}
