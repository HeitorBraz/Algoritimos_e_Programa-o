//Algoritimo qual � a porcentagem que o usu�rio deseja saber do valor fixo de 555

//1� Passo: Inserir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

// 2� Passo: Iniciar algoritimos.
int main(){
	
	//3� Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir vari�veis.
	float porcentagem, resultado;
	int opcao;
	
	printf("Esse programa ir� calcular o percentual desejado do valor 555.");
	
	//5� Passo: Pedir valor ao usu�rio
	do{
	printf("\n\nDigite o valor percentual desejado: ");
	scanf("%f", &porcentagem);
	printf("Valor inserido = %.0f%%\n\n", porcentagem);
	printf("Deseja trocar o valor? ");
	printf("\n\n1- Sim\n");
	printf("2- N�o\n");
	scanf("%d", &opcao);
	}while(opcao==1);
	
	//6� Passo: Definir f�rmula
	resultado= (porcentagem*555)/100;
	
	system("cls");
	
	//7� Passo: Mostrar
	printf("%.0f%% de 555 � = %.0f", porcentagem, resultado);
	printf("\n\nObrigado por utilizar esse programa!");
	
	//8� Passo: Retorno da fun��o
	return 0;
	
//9� Passo: Fim da fun��o principal	
}
