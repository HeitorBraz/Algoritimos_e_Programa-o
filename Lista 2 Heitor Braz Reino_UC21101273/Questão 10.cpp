//Algoritimo para mostrar qual dos 3 valores inseridos � o menor

//1� Passo: Inserir bibliotecas necess�rias.
#include<stdio.h>
#include <locale.h>

// 2� Passo: Iniciar algoritimos.
int main(){
	
	//3� Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir vari�veis.
	float numeroA, numeroB, numeroC;
	
	//5� Passo: Pedir valores para o usu�rio. Chineisinho: N�meros inseridos = 15, 10 e 5
	printf("Ol�! Esse programa ir� mostrar qual dos 3 valores que ser�o inseridos por � o menor.\n");
	printf("Insira o 1� valor: ");//Inserido o 15
	scanf("%f", &numeroA);
	printf("Insira o 2� valor: ");//Inserido o 10
	scanf("%f", &numeroB);
	printf("Insira o 3� valor: ");//Inserido o 5
	scanf("%f", &numeroC);
	
	printf("N�meros inseridos: %.1f; %.1f e %.1f", numeroA, numeroB, numeroC); //Mostrar n�meros inseridos na tela. Ir� aparecer: 15, 10 e 5
	printf("\nO menor valor inserido �: "); //Mensagem que acompanha o maior n�mero.
	
	//6� Passo: Caso valor A seja o menor valor, escrever o valor de A. //15 n�o � o menor valor(nada acontece)
	if(numeroA < numeroB && numeroA < numeroC){
		printf("%.1f", numeroA);
	}
		
		//7� Passo: Caso valor B seja o menor valor, escrever o valor de B. //10 n�o � o menor valor(nada acontece)
		else if(numeroB < numeroA && numeroB < numeroC){
			printf("%.1f", numeroB);
		}
		
			//8� Passo: Caso valor C seja o menor valor, escrever o valor de C. //5 � o menor valor. O programa ir� mostrar 5 na tela
			else if(numeroC < numeroA && numeroC < numeroB){
				printf("%.1f", numeroC);
			}
			
				//9� Passo: Se todos os valores forem iguais, escrever valor de A.
				else if(numeroA = numeroB = numeroC){
					printf("%.1f", numeroA);
				}
				
					//10� Passo: Se o valor de A e C forem iguais e menor que o valor de B, escrever valor de A.
					else if(numeroA = numeroC > numeroB){
							printf("%.1f", numeroA);
						}
						
						//11� Passo: Se o valor de B e C forem iguais e menor que o valor de A, escrever valor de B.
							else if(numeroB = numeroC < numeroA){
								printf("%.1f", numeroB);
							}
							
							//12� Passo: Se o valor de A e B forem iguais e menor que o valor de C, escrever valor de A. Observa��o: Essa � a unica condi��o que n�o est� funcionando como deveria.
								else if(numeroA = numeroB < numeroC){
									printf("%.1f", numeroA);
								}
								
	printf("\nObrigado por utilizar esse programa! :D"); //Agradecimento.							
								
	//13� Passo: Retorno da fun��o.
	return 0;
	
	//14� Passo: Fim do algoritimo.											
}	
