//Algoritimo para calcular o módulo (valor absoluto) de um número.

// 1º Passo: Inserir Bibliotecas:
#include<stdio.h>
#include<locale.h>

// 2º Passo: Iniciar Algoritimo:
int main(){

	// 3º Passo: Definir locale.h:
	setlocale(LC_ALL, "Portuguese");

	// 4º Passo: Definir Variáveis:
	double numero, modulo;	

	// 5º Passo: Pedir o Número
	printf("Bem-Vindo(a)! Esse programa mostra o valor do módulo do número que será inserido.\n");
	printf("Insira o número aqui: ");
	scanf("%lf", &numero);

	// 6º Passo: Se Número => 0 , Móudulo = Número
	if (numero >=0){
		modulo = numero;
		printf("Número que foi inserido: %.1lf", numero);
		printf("\nMódulo do número inserido: %.1lf", modulo);
	}

	// 7º Passo: Se Número < 0, Módulo = Número * -1
	else{
		modulo = numero * -1;
		printf("Número que foi inserido: %.1lf", numero);
		printf("\nMódulo do número inserido: %.1lf", modulo);
	}

	// 8º Passo: Retorno da Função
	return 0;
	
	// 9º Passo: Finalizar Algoritimo
}

