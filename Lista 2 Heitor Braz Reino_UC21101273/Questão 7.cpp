//Algoritimo que lê dois valores númericos e apresenta a diferença do menor valor pelo menor valor:

//1º Passo: Inserir bibliotecas necessárias
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar algoritimo
int main(){
	
	//3º Passo: Definir locale.h
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir variáveis
	float valorA, valorB;
	
	//5º Passo: Pedir valores ao usuário
	printf("Bem-Vindo(a)! Esse programa irá calcular a diferença entre 2 valores que serão inseridos por você.");
	printf("\nInsira o primeiro valor: ");
	scanf("%f", &valorA);
	printf("Insira o segundo valor: ");
	scanf("%f", &valorB);
	printf("Resultado:");
	
	//6º Passo: Se o valor A for maior que o valor B, resultado = a - b
	if(valorA >= valorB){
		printf("\n(%.1f) - (%.1f) = (%.1f)", valorA, valorB, valorA - valorB);	
	}
	
	//7º Passo: Se o valor B for maior que o valor A, resultado = b - a
	else{
		printf("\n(%.1f) - (%.1f) = (%.1f)", valorB, valorA, valorB - valorA);
	}

	printf("\nObrigado por utilizar esse programa!"); //Agradecimento
	
	//8º Passo: Retorno da função
	return 0;
	
	//9º Passo: Fim do algoritimo
}
