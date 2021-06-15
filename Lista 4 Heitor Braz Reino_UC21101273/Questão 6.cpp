//Algoritimo que imprimi todos os valores primos entre 2 n�meros naturais dados pelo usu�rio

//1� Passo: Inserir bibliotecas necess�rias111

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int numeroA, numeroB, contador1, contador2, resto, resultado;
	
	printf("Bem-Vindo! Esse programa ir� listar todos os n�meros primos entre os 2 n�meros digitados por voc�.\n");
	
	//5� Passo: Pedir o 1� n�mero natural
	do{
	printf("\n\nInsira o 1� n�mero natural: ");
	scanf("%d", &numeroA);
		if(numeroA<=0){
			printf("\nDigite apenas n�meros naturais! ");
		}
	}while(numeroA<=0);
	
	//6� Passo: Pedir o 2� n�mero
	do{
	printf("\nInsira o 2� n�mero natural: ");
	scanf("%d", &numeroB);
		if(numeroB<=0){
			printf("\nDigite apenas n�meros naturais! ");
		}
		if(numeroB<numeroA){
			printf("\nO 2� n�mero precisa ter um valor maior que o 1�. ");
		}
	}while(numeroB<=0 || numeroB<numeroA);

	printf("\nLista de N�meros Primos entre %d e %d", numeroA, numeroB);
	
	//7� Passo: Comando de repeti��o para cada um dos n�meros que ser�o testados
	for(contador1 = numeroA; contador1 <= numeroB; contador1++){
		
		//8� Passo: Comando de repeti��o para divisor de cada um dos n�meros que ser�o testados 	
		for(contador2 = 2; contador2 < contador1; contador2++){
			resto = contador1 % contador2;
			
			//O Contador 1 ser� dividido pelo contador 2, e caso o resultado de uma das divis�es der resto 0, o n�mero n�o � primo
			if(resto==0){
				resultado = 1;
				break;
			
			//Caso nenhuma divis�o der resto 0, o n�mero � primo	
			}
			else if(resto != 0){
				resultado = 2;
			}
	
		}

		//9� Passo: Mostra os n�meros primos na tela
		if(resultado == 2){
			printf("\n- %d", contador1);
		}
		
	}

	//10� Passo: Retorno da fun��o
	return 0;

//11� Passo: Fim da fun��o	
}
