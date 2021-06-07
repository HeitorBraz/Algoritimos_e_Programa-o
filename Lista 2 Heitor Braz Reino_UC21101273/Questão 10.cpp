//Algoritimo para mostrar qual dos 3 valores inseridos é o menor

//1º Passo: Inserir bibliotecas necessárias.
#include<stdio.h>
#include <locale.h>

// 2º Passo: Iniciar algoritimos.
int main(){
	
	//3º Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir variáveis.
	float numeroA, numeroB, numeroC;
	
	//5º Passo: Pedir valores para o usuário. Chineisinho: Números inseridos = 15, 10 e 5
	printf("Olá! Esse programa irá mostrar qual dos 3 valores que serão inseridos por é o menor.\n");
	printf("Insira o 1º valor: ");//Inserido o 15
	scanf("%f", &numeroA);
	printf("Insira o 2º valor: ");//Inserido o 10
	scanf("%f", &numeroB);
	printf("Insira o 3º valor: ");//Inserido o 5
	scanf("%f", &numeroC);
	
	printf("Números inseridos: %.1f; %.1f e %.1f", numeroA, numeroB, numeroC); //Mostrar números inseridos na tela. Irá aparecer: 15, 10 e 5
	printf("\nO menor valor inserido é: "); //Mensagem que acompanha o maior número.
	
	//6º Passo: Caso valor A seja o menor valor, escrever o valor de A. //15 não é o menor valor(nada acontece)
	if(numeroA < numeroB && numeroA < numeroC){
		printf("%.1f", numeroA);
	}
		
		//7º Passo: Caso valor B seja o menor valor, escrever o valor de B. //10 não é o menor valor(nada acontece)
		else if(numeroB < numeroA && numeroB < numeroC){
			printf("%.1f", numeroB);
		}
		
			//8º Passo: Caso valor C seja o menor valor, escrever o valor de C. //5 é o menor valor. O programa irá mostrar 5 na tela
			else if(numeroC < numeroA && numeroC < numeroB){
				printf("%.1f", numeroC);
			}
			
				//9º Passo: Se todos os valores forem iguais, escrever valor de A.
				else if(numeroA = numeroB = numeroC){
					printf("%.1f", numeroA);
				}
				
					//10º Passo: Se o valor de A e C forem iguais e menor que o valor de B, escrever valor de A.
					else if(numeroA = numeroC > numeroB){
							printf("%.1f", numeroA);
						}
						
						//11º Passo: Se o valor de B e C forem iguais e menor que o valor de A, escrever valor de B.
							else if(numeroB = numeroC < numeroA){
								printf("%.1f", numeroB);
							}
							
							//12º Passo: Se o valor de A e B forem iguais e menor que o valor de C, escrever valor de A. Observação: Essa é a unica condição que não está funcionando como deveria.
								else if(numeroA = numeroB < numeroC){
									printf("%.1f", numeroA);
								}
								
	printf("\nObrigado por utilizar esse programa! :D"); //Agradecimento.							
								
	//13º Passo: Retorno da função.
	return 0;
	
	//14º Passo: Fim do algoritimo.											
}	
