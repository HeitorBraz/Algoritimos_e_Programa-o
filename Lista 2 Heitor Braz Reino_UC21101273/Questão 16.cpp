//Algoritimo para mostrar qual das 3 pessoas é a mais alta

//1º Passo: Inserir bibliotecas necessárias.
#include<stdio.h>
#include <locale.h>

// 2º Passo: Iniciar algoritimos.
int main(){
	
	//3º Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir variáveis.
	char pessoaA[20], pessoaB[20], pessoaC[20];
	int alturaA, alturaB, alturaC, contador;
	
	//5º Passo: Perguntar o nome das 3 pessoas.
	printf("Insira o nome da primeira pessoa: ");
	scanf("%s", pessoaA);
	fflush(stdin);
	printf("Insira o nome da segunda pessoa: ");
	scanf("%s", pessoaB);
	fflush(stdin);
	printf("Insira o nome da terceira pessoa: ");
	scanf("%s", pessoaC);
	fflush(stdin);
	
	//6º Passo: Perguntar a altura das 3 pessoas.
	printf("Insira a altura da primeira pessoa em centímetros: ");
	scanf("%d",&alturaA);
	printf("Insira a altura da segunda pessoa em centímetros: ");
	scanf("%d",&alturaB);
	printf("Insira a altura da terceira pessoa em centímetros: ");
	scanf("%d",&alturaC);
	
	//7º Passo: Pessoa A mais alta.
 if(alturaA > alturaB && alturaA > alturaC){
		printf("%s é a pessoa mais alta com %d centímetros.",pessoaA, alturaA);
	}
	
	//8º Passo: Pessoa B mais alta.
	else if(alturaB > alturaA && alturaB > alturaC){
		printf("%s é a pessoa mais alta com %d centímetros.",pessoaB, alturaB);
	}
	
	//9º Passo: Pessoa C mais alta.
	else if(alturaC > alturaA && alturaC > alturaB){
		printf("%s é a pessoa mais alta com %d centímetros.",pessoaC, alturaC);
	}
	
	//10º Passo: Pessoa A e B mais altas.
	else if(alturaA == alturaB && alturaA > alturaC){
		printf("%s e %s são as pessoas mais altas com %d centímetros.",pessoaA, pessoaB, alturaA);
	}
	
	//7º Passo: Pessoas A e C mais altas.
	else if(alturaA == alturaC && alturaA > alturaB){
		printf("%s e %s são as pessoas mais altas com %d centímetros.",pessoaA, pessoaC, alturaA);
	}
	
	//8º Passo: Pessoas B e C mais altas.
	else if(alturaB == alturaC && alturaB > alturaA){
		printf("%s e %s são as pessoas mais altas com %d centímetros.",pessoaB, pessoaC, alturaB);
	}
	
	//9º Passo: Todas as pessoas tem a mesma altura.
	else{
		printf("%s, %s e %s tem a mesma altura, %d centímetros.",pessoaA, pessoaB, pessoaC, alturaA);
	}
	
	printf("\nObrigado por utilizar esse programa!");
	
	//10º Passo: Retorno da Função.
	return 0;
	
//11º Passo: Fim do Algoritimo.	
}
