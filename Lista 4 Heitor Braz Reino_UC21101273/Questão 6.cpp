//Algoritimo que imprimi todos os valores primos entre 2 números naturais dados pelo usuário

//1º Passo: Inserir bibliotecas necessárias111

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int numeroA, numeroB, contador1, contador2, resto, resultado;
	
	printf("Bem-Vindo! Esse programa irá listar todos os números primos entre os 2 números digitados por você.\n");
	
	//5º Passo: Pedir o 1º número natural
	do{
	printf("\n\nInsira o 1º número natural: ");
	scanf("%d", &numeroA);
		if(numeroA<=0){
			printf("\nDigite apenas números naturais! ");
		}
	}while(numeroA<=0);
	
	//6º Passo: Pedir o 2º número
	do{
	printf("\nInsira o 2º número natural: ");
	scanf("%d", &numeroB);
		if(numeroB<=0){
			printf("\nDigite apenas números naturais! ");
		}
		if(numeroB<numeroA){
			printf("\nO 2º número precisa ter um valor maior que o 1º. ");
		}
	}while(numeroB<=0 || numeroB<numeroA);

	printf("\nLista de Números Primos entre %d e %d", numeroA, numeroB);
	
	//7º Passo: Comando de repetição para cada um dos números que serão testados
	for(contador1 = numeroA; contador1 <= numeroB; contador1++){
		
		//8º Passo: Comando de repetição para divisor de cada um dos números que serão testados 	
		for(contador2 = 2; contador2 < contador1; contador2++){
			resto = contador1 % contador2;
			
			//O Contador 1 será dividido pelo contador 2, e caso o resultado de uma das divisões der resto 0, o número não é primo
			if(resto==0){
				resultado = 1;
				break;
			
			//Caso nenhuma divisão der resto 0, o número é primo	
			}
			else if(resto != 0){
				resultado = 2;
			}
	
		}

		//9º Passo: Mostra os números primos na tela
		if(resultado == 2){
			printf("\n- %d", contador1);
		}
		
	}

	//10º Passo: Retorno da função
	return 0;

//11º Passo: Fim da função	
}
