//Algoritimo que calcula a multiplicação de um número pelo outro, usando o comando for.

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar função principal
int main(){

	//3º Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	//4º Passo: Definir variáveis

	int numeroA, numeroB;
	int contador, resultado=0;
	
	//5º Passo: Pedir o valor dos números 
	printf("Olá! Esse programa calcula a multiplicação de um número por outro.\n");
	printf("\nDigite o valor do 1º número: ");
	scanf("%d", &numeroA);
	printf("Digite o valor do 2º número: ");
	scanf("%d", &numeroB);
	
	//6º Passo: Uso do for para somar o número A com ele mesmo a quantidade de vezes do número B
	for(contador = 1; contador <= numeroB; contador++){
		resultado = resultado + numeroA;
	}
	
	//7º Passo: Mostrar resultado na tela
	printf("\nO resultado de %d x %d é: %d", numeroA, numeroB, resultado);
	
	//8º Passo: Retorno da função
	return 0;

//9º Passo: Fim da função	
}
