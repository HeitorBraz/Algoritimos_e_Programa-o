//Algoritimo que mostra todos os n�meros pares at� o valor especificado pelo usu�rio. M�ximo 2000

//1� Passo: Inserir bibliotecas necess�rias
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int numeroMaximo, contador;
	
	//6� Passo: Pedir valor ao usu�rio
	printf("Ol�! Esse programa ir� mostrar todos n�meros pares at� o n�mero digitado.");
	printf("\n\nDigite um n�mero natural at� 2000: ");
	scanf("%d", &numeroMaximo);
	
	//7� Passo: Caso valor seja maior que 2000, mostrar mensagem de erro em uma tela limpa
	if(numeroMaximo > 2000){
		system("cls");
		printf("N�mero digitado: %d", numeroMaximo);
		printf("\n2Esse programa s� aceita n�meros at� 2000!");
	}
	
	//8� Passo: Caso valor menor que 2000, prosseguir normalmente
	else{
		
		//9� Passo: Comando de repeti��o for que somar� o contador de 2 em 2 e sempre imprimindo seu valor a cada volta
		for(contador=1;contador<numeroMaximo; contador++){
			contador++;
			printf("\n%d",contador);
		}
		
	}
	
	//10� Passo: Retorno da fun��o
	return 0;

//11� Passo: Fim do algoritimo
}
	

