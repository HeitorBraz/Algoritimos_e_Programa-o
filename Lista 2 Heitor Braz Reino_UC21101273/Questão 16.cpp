//Algoritimo para mostrar qual das 3 pessoas � a mais alta

//1� Passo: Inserir bibliotecas necess�rias.
#include<stdio.h>
#include <locale.h>

// 2� Passo: Iniciar algoritimos.
int main(){
	
	//3� Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir vari�veis.
	char pessoaA[20], pessoaB[20], pessoaC[20];
	int alturaA, alturaB, alturaC, contador;
	
	//5� Passo: Perguntar o nome das 3 pessoas.
	printf("Insira o nome da primeira pessoa: ");
	scanf("%s", pessoaA);
	fflush(stdin);
	printf("Insira o nome da segunda pessoa: ");
	scanf("%s", pessoaB);
	fflush(stdin);
	printf("Insira o nome da terceira pessoa: ");
	scanf("%s", pessoaC);
	fflush(stdin);
	
	//6� Passo: Perguntar a altura das 3 pessoas.
	printf("Insira a altura da primeira pessoa em cent�metros: ");
	scanf("%d",&alturaA);
	printf("Insira a altura da segunda pessoa em cent�metros: ");
	scanf("%d",&alturaB);
	printf("Insira a altura da terceira pessoa em cent�metros: ");
	scanf("%d",&alturaC);
	
	//7� Passo: Pessoa A mais alta.
 if(alturaA > alturaB && alturaA > alturaC){
		printf("%s � a pessoa mais alta com %d cent�metros.",pessoaA, alturaA);
	}
	
	//8� Passo: Pessoa B mais alta.
	else if(alturaB > alturaA && alturaB > alturaC){
		printf("%s � a pessoa mais alta com %d cent�metros.",pessoaB, alturaB);
	}
	
	//9� Passo: Pessoa C mais alta.
	else if(alturaC > alturaA && alturaC > alturaB){
		printf("%s � a pessoa mais alta com %d cent�metros.",pessoaC, alturaC);
	}
	
	//10� Passo: Pessoa A e B mais altas.
	else if(alturaA == alturaB && alturaA > alturaC){
		printf("%s e %s s�o as pessoas mais altas com %d cent�metros.",pessoaA, pessoaB, alturaA);
	}
	
	//7� Passo: Pessoas A e C mais altas.
	else if(alturaA == alturaC && alturaA > alturaB){
		printf("%s e %s s�o as pessoas mais altas com %d cent�metros.",pessoaA, pessoaC, alturaA);
	}
	
	//8� Passo: Pessoas B e C mais altas.
	else if(alturaB == alturaC && alturaB > alturaA){
		printf("%s e %s s�o as pessoas mais altas com %d cent�metros.",pessoaB, pessoaC, alturaB);
	}
	
	//9� Passo: Todas as pessoas tem a mesma altura.
	else{
		printf("%s, %s e %s tem a mesma altura, %d cent�metros.",pessoaA, pessoaB, pessoaC, alturaA);
	}
	
	printf("\nObrigado por utilizar esse programa!");
	
	//10� Passo: Retorno da Fun��o.
	return 0;
	
//11� Passo: Fim do Algoritimo.	
}
