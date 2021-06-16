//Algoritimo que mostra o sexo do usuário por extenso 

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
	char sexo;
	
	//5º Passo: Pedir caracter ao usuário
	printf("Olá!");
	printf("\nDigite o caractere correspondente ao seu sexo. ");
	printf("\nF ou M.\n");
	
	//6º Passo: Validar caracter
	do{
		scanf("%c", &sexo);
			if(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M'){
		printf("\nDigite um caractere válido! [F/M]");
		}
		
	}while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M');
	
	//7º Passo: Criar condição para imprimir o sexo por extenso baseado no caractere digitado
	sexo == 'f' || sexo =='F' ? printf("\nSexo Feminino") : printf("\nSexo Masculino");
	
	//8º Passo: Retorno da função
	return 0;

//9º Passo: Fim da função	
}
	
	
