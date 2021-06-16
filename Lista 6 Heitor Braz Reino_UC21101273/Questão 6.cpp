//Algoritimo para determinar a quantidade de digitos que um numero natural possui

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int numeroDigitado, numero, contador=0;
	
	//5º Passo: Perguntar o número desejado ao usuário
	do{
		printf("Digite o número natural que você deseja descobrir a quantidade de dígitos: ");
		scanf("%d", &numeroDigitado);
		if(numeroDigitado<=0){
			printf("Digite apenas números postivos!\n\n");
		}
	}while(numeroDigitado<=0);
	
	numero=numeroDigitado;
	
	//6º Passo: Dividir um número por 10 até dar 0, e sempre contar o número de divisões
	while(numero!=0){
		numero=numero/10;
		contador++;
	}
	
	system("cls");
	
	//7º Passo: Mostrar resultado na tela
	printf("Número Digitado: %d", numeroDigitado);
	printf("\nQuantidade de Dígitos: %d ", contador);
	printf("\n\nObrigado por utilizar esse programa!");
	
	
	//8º Passo: Retorno da função
	return 0;

//9º Passo: Fim da função principal	
}
