// 1º Passo: Inserir bibliotecas
#include<stdio.h>
#include<locale.h>

// 2º Passo: Iniciar algoritimo
int main(){
	
	// 3º Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	// 4º Passo: Definir variáveis
	int numero, resto;
	
	// 5º Passo: Pedir o número para o usuário
	printf("Bem-Vindo(a)! Esse programa irá te dizer se o número inserido é par ou ímpar.\n");
	printf("Insira um número inteiro: ");
	scanf("%d", &numero);
	
	// 6º Passo: Fórmula de resto
	resto = numero % 2;
	
	// 7º Passo: Se resto = 0, número par
	if(resto == 0){
		
		printf("O número inserido é PAR.");
	}
	
	// 8º Passo: Se resto != 0, número ímpar
	else{
		printf("O número inserido é ÍMPAR");
	}
	
	// 9º Passo: Retorno da função
	return 0;
	
	// 10º Passo: Fim da função
}
