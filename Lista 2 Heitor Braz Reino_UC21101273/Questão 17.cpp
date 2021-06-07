//Algoritimo para calcular quantos dias aproximadamente uma pessoa viveu
//1� Passo: Inserir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar algoritimo.
int main(){
	
	//3� Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir vari�veis.
	int anoNascimento, anoAtual, numeroDias;
	
	//5� Passo: Pedir ano de nascimento do usu�rio
	printf("Ol�! Esse programa ir� te dizer quantos dias voc� viveu aproximadamente.");
	printf("\nDigite o ano em que voc� nasceu: ");
	scanf("%d", &anoNascimento);
	
	//6� Passo: Pedir ano atual ao usu�rio
	printf("Escreva em qual ano voc� est� usando esse programa: ");
	scanf("%d", &anoAtual);
	
	//7� Passo: Definir f�rmulas para convers�o de anos vividos em dias
	numeroDias = (anoAtual - anoNascimento) * 365;
	
	//8� Passo: Mostrar resultado na tela
	printf("Voc� possui aprroximadamente %d dias de vida!", numeroDias);
	printf("\nObrigado por usar esse programa!");
	
	//9� Passo: Retorno da fun��o
	return 0;
	
	//10� Passo: Fim do algoritimo
}
