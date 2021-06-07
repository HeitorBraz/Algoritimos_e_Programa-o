//Algoritimo para calcular o m�dulo (valor absoluto) de um n�mero.

// 1� Passo: Inserir Bibliotecas:
#include<stdio.h>
#include<locale.h>

// 2� Passo: Iniciar Algoritimo:
int main(){

	// 3� Passo: Definir locale.h:
	setlocale(LC_ALL, "Portuguese");

	// 4� Passo: Definir Vari�veis:
	double numero, modulo;	

	// 5� Passo: Pedir o N�mero
	printf("Bem-Vindo(a)! Esse programa mostra o valor do m�dulo do n�mero que ser� inserido.\n");
	printf("Insira o n�mero aqui: ");
	scanf("%lf", &numero);

	// 6� Passo: Se N�mero => 0 , M�udulo = N�mero
	if (numero >=0){
		modulo = numero;
		printf("N�mero que foi inserido: %.1lf", numero);
		printf("\nM�dulo do n�mero inserido: %.1lf", modulo);
	}

	// 7� Passo: Se N�mero < 0, M�dulo = N�mero * -1
	else{
		modulo = numero * -1;
		printf("N�mero que foi inserido: %.1lf", numero);
		printf("\nM�dulo do n�mero inserido: %.1lf", modulo);
	}

	// 8� Passo: Retorno da Fun��o
	return 0;
	
	// 9� Passo: Finalizar Algoritimo
}

