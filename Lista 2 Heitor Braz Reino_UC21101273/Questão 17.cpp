//Algoritimo para calcular quantos dias aproximadamente uma pessoa viveu
//1º Passo: Inserir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar algoritimo.
int main(){
	
	//3º Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir variáveis.
	int anoNascimento, anoAtual, numeroDias;
	
	//5º Passo: Pedir ano de nascimento do usuário
	printf("Olá! Esse programa irá te dizer quantos dias você viveu aproximadamente.");
	printf("\nDigite o ano em que você nasceu: ");
	scanf("%d", &anoNascimento);
	
	//6º Passo: Pedir ano atual ao usuário
	printf("Escreva em qual ano você está usando esse programa: ");
	scanf("%d", &anoAtual);
	
	//7º Passo: Definir fórmulas para conversão de anos vividos em dias
	numeroDias = (anoAtual - anoNascimento) * 365;
	
	//8º Passo: Mostrar resultado na tela
	printf("Você possui aprroximadamente %d dias de vida!", numeroDias);
	printf("\nObrigado por usar esse programa!");
	
	//9º Passo: Retorno da função
	return 0;
	
	//10º Passo: Fim do algoritimo
}
