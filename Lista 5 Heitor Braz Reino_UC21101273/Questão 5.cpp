//Algoritimo que mostra o sexo do usu�rio por extenso 

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
	char sexo;
	
	//5� Passo: Pedir caracter ao usu�rio
	printf("Ol�!");
	printf("\nDigite o caractere correspondente ao seu sexo. ");
	printf("\nF ou M.\n");
	
	//6� Passo: Validar caracter
	do{
		scanf("%c", &sexo);
			if(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M'){
		printf("\nDigite um caractere v�lido! [F/M]");
		}
		
	}while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M');
	
	//7� Passo: Criar condi��o para imprimir o sexo por extenso baseado no caractere digitado
	sexo == 'f' || sexo =='F' ? printf("\nSexo Feminino") : printf("\nSexo Masculino");
	
	//8� Passo: Retorno da fun��o
	return 0;

//9� Passo: Fim da fun��o	
}
	
	
