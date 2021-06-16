//Algoritimo para printar um caractere em decimal, binario e hexadecimal

//1º Passo: Inserir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>

// 2º Passo: Iniciar algoritimos.
int main(){
	
	//3º Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir variáveis.
	char caractere;
	
	//5º Passo: Pedir o caractere para o usuário
	printf("Esse programa converte o caractere digitado em formato de Octal, Decimal, Hexadecimal");
	printf("\n\nDigite um caractere: ");
	scanf("%c", &caractere);
	
	system("cls");
	
	//6º Passo: Mostrar resultado na tela
	printf("\nCaractere: %c", caractere);
	printf("\nOctal: %o", caractere);
	printf("\nDecimal: %d", caractere);
	printf("\nHexadecimal: %x ", caractere);
	
	//7º Passo: Retorno da função
	return 0;
	
//8º Passo: Fim da função	
}
