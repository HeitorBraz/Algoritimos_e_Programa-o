//Algoritimo para printar um caractere em decimal, binario e hexadecimal

//1� Passo: Inserir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>

// 2� Passo: Iniciar algoritimos.
int main(){
	
	//3� Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir vari�veis.
	char caractere;
	
	//5� Passo: Pedir o caractere para o usu�rio
	printf("Esse programa converte o caractere digitado em formato de Octal, Decimal, Hexadecimal");
	printf("\n\nDigite um caractere: ");
	scanf("%c", &caractere);
	
	system("cls");
	
	//6� Passo: Mostrar resultado na tela
	printf("\nCaractere: %c", caractere);
	printf("\nOctal: %o", caractere);
	printf("\nDecimal: %d", caractere);
	printf("\nHexadecimal: %x ", caractere);
	
	//7� Passo: Retorno da fun��o
	return 0;
	
//8� Passo: Fim da fun��o	
}
