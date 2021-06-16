//Algoritimo qual é a porcentagem que o usuário deseja saber do valor fixo de 555

//1º Passo: Inserir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

// 2º Passo: Iniciar algoritimos.
int main(){
	
	//3º Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir variáveis.
	float porcentagem, resultado;
	int opcao;
	
	printf("Esse programa irá calcular o percentual desejado do valor 555.");
	
	//5º Passo: Pedir valor ao usuário
	do{
	printf("\n\nDigite o valor percentual desejado: ");
	scanf("%f", &porcentagem);
	printf("Valor inserido = %.0f%%\n\n", porcentagem);
	printf("Deseja trocar o valor? ");
	printf("\n\n1- Sim\n");
	printf("2- Não\n");
	scanf("%d", &opcao);
	}while(opcao==1);
	
	//6º Passo: Definir fórmula
	resultado= (porcentagem*555)/100;
	
	system("cls");
	
	//7º Passo: Mostrar
	printf("%.0f%% de 555 é = %.0f", porcentagem, resultado);
	printf("\n\nObrigado por utilizar esse programa!");
	
	//8º Passo: Retorno da função
	return 0;
	
//9º Passo: Fim da função principal	
}
