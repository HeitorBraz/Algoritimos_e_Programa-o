//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador, numero;
	
	//
	printf("Ol�! Esse algoritimo ir� ler os n�meros inteiros que voc� digitar e mostrar a quantidade de n�meros que voc� digitou. ");
	printf("\nPara parar a contagem digite um n�mero negativo ou escreva mais de 100 n�meros\n");
	
	do{
		printf("\nDigite um n�mero: ");
		scanf("%d", &numero);
		fflush(stdin);
			if(numero > 0){
				contador++;
			}
			
	}while(numero >= 0 && contador < 100);
	
	system("cls");
	
	printf("A quantidade de n�meros digitados foi: %d", contador);
	
	return 0;

}

