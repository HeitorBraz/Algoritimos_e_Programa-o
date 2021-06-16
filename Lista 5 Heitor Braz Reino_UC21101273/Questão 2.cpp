//Algoritimo para mostrar qual dos 3 valores inseridos � o maior por meio de uma janela limpa

//1� Passo: Inserir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

// 2� Passo: Iniciar algoritimos.
int main(){
	
	//3� Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir vari�veis.
	float numeroA, numeroB, numeroC;
	char continuar;
	
	//5� Passo: Pedir valores para o usu�rio.
	printf("Ol�! Esse programa ir� mostrar qual dos 3 valores inseridos por voc� � o maior.\n\n");
	printf("Insira o 1� valor: ");
	scanf("%f", &numeroA);
	printf("Insira o 2� valor: ");
	scanf("%f", &numeroB);
	printf("Insira o 3� valor: ");
	scanf("%f", &numeroC);
	
	printf("\n\nDigite qualque caractere para continuar:\n ");
	scanf("%c", &continuar);
	system("cls");
	
	printf("N�meros inseridos: %.1f; %.1f e %.1f\n\n", numeroA, numeroB, numeroC); //Mostrar n�meros inseridos na tela.
	printf("O maior valor inserido �: "); //Mensagem que acompanha o maior n�mero.
	
	//6� Passo: Caso valor A seja o maior valor, escrever o valor de A.
	if(numeroA>numeroB && numeroA>numeroC){
		printf("%.1f", numeroA);
	}
		
		//7� Passo: Caso valor B seja o maior valor, escrever o valor de B.
		else if(numeroB > numeroA && numeroB  >numeroC){
			printf("%.1f", numeroB);
		}
		
			//8� Passo: Caso valor C seja o maior valor, escrever o valor de C.
			else if(numeroC > numeroA && numeroC > numeroB){
				printf("%.1f", numeroC);
			}
			
				//9� Passo: Se todos os valores forem iguais, escrever valor de A.
				else if(numeroA == numeroB &&  numeroA == numeroC && numeroB==numeroC){
					printf("%.1f", numeroA);
				}
				
					//10� Passo: Se o valor de A e C forem iguais e maior que o valor de B, escrever valor de A.
					else if(numeroA == numeroC && numeroA > numeroB && numeroC >numeroB){
							printf("%.1f", numeroA);
						}
						
						//11� Passo: Se o valor de B e C forem iguais e maior que o valor de A, escrever valor de B.
							else if(numeroB == numeroC && numeroB > numeroA && numeroC > numeroA){
								printf("%.1f", numeroB);
							}
							
							//12� Passo: Se o valor de A e B forem iguais e maior que o valor de C, escrever valor de A. Observa��o: Essa � a unica condi��o que n�o est� funcionando como deveria.
								else{
									printf("%.1f", numeroA);
								}
								
	printf("\n\nObrigado por utilizar esse programa! :D"); //Agradecimento.							
								
	//13� Passo: Retorno da fun��o.
	return 0;
	
	//14� Passo: Fim do algoritimo.											
}	
