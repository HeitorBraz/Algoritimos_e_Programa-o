// Algoritimo que auxilia na precificação com while

//1º Passo: Incluir bibliotecas necessárias
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int numeroProdutos, contador=1;
	float preco, precoNovo;
	int identificacaoProduto, adicionarProduto;
	
	printf("Bem-Vindo(a)! Esse programa irá te auxiliar a calcular o aumento de preço nos seus produtos.");
	
	//6º Passo: Perguntar o idenficador e o preço de cada produto
	while(adicionarProduto != -1){

		printf("\n\nDigite a identificação do %dº produto (número inteiro): ", contador);
		scanf("%d", &identificacaoProduto);
		printf("\nDigite o preço do atual do produto (Digite -1 caso deseje parar de adicionar produtos): ");
		scanf("%f", &preco);
			if(preco == -1){
				printf("\nObrigado por utilizar esse programa!");
				break;
			}
		//7º Passo: Definir a fórmula para o novo preço
		precoNovo = preco*1.1;
		
		//8º Passo: Mostrar novo preço na tela
		printf("\nO novo preço do produto (%d) é: (%.2f reais)", identificacaoProduto, precoNovo);
		contador++;
	}
		//9º Passo: Retorno da função
		return 0;

//10º Passo: Fim do algoritimo		
}
