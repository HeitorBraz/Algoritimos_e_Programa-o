//Algoritimo que mostra todos os números pares até o valor especificado pelo usuário. Máximo 2000

//1º Passo: Inserir bibliotecas necessárias
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int numeroMaximo, contador;
	
	//6º Passo: Pedir valor ao usuário
	printf("Olá! Esse programa irá mostrar todos números pares até o número digitado.");
	printf("\n\nDigite um número natural até 2000: ");
	scanf("%d", &numeroMaximo);
	
	//7º Passo: Caso valor seja maior que 2000, mostrar mensagem de erro em uma tela limpa
	if(numeroMaximo > 2000){
		system("cls");
		printf("Número digitado: %d", numeroMaximo);
		printf("\n2Esse programa só aceita números até 2000!");
	}
	
	//8º Passo: Caso valor menor que 2000, prosseguir normalmente
	else{
		
		//9º Passo: Comando de repetição for que somará o contador de 2 em 2 e sempre imprimindo seu valor a cada volta
		for(contador=1;contador<numeroMaximo; contador++){
			contador++;
			printf("\n%d",contador);
		}
		
	}
	
	//10º Passo: Retorno da função
	return 0;

//11º Passo: Fim do algoritimo
}
	

