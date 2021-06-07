// 1� Passo: Inserir bibliotecas
#include<stdio.h>
#include<locale.h>

// 2� Passo: Iniciar algoritimo
int main(){
	
	// 3� Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	// 4� Passo: Definir vari�veis
	int numero, resto;
	
	// 5� Passo: Pedir o n�mero para o usu�rio
	printf("Bem-Vindo(a)! Esse programa ir� te dizer se o n�mero inserido � par ou �mpar.\n");
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &numero);
	
	// 6� Passo: F�rmula de resto
	resto = numero % 2;
	
	// 7� Passo: Se resto = 0, n�mero par
	if(resto == 0){
		
		printf("O n�mero inserido � PAR.");
	}
	
	// 8� Passo: Se resto != 0, n�mero �mpar
	else{
		printf("O n�mero inserido � �MPAR");
	}
	
	// 9� Passo: Retorno da fun��o
	return 0;
	
	// 10� Passo: Fim da fun��o
}
