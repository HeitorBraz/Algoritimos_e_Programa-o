//Algoritimo para mostrar qual dos 3 valores inseridos é o maior por meio de uma janela limpa

//1º Passo: Inserir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

// 2º Passo: Iniciar algoritimos.
int main(){
	
	//3º Passo: Definir locale.h.
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir variáveis.
	float numeroA, numeroB, numeroC;
	char continuar;
	
	//5º Passo: Pedir valores para o usuário.
	printf("Olá! Esse programa irá mostrar qual dos 3 valores inseridos por você é o maior.\n\n");
	printf("Insira o 1º valor: ");
	scanf("%f", &numeroA);
	printf("Insira o 2º valor: ");
	scanf("%f", &numeroB);
	printf("Insira o 3º valor: ");
	scanf("%f", &numeroC);
	
	printf("\n\nDigite qualque caractere para continuar:\n ");
	scanf("%c", &continuar);
	system("cls");
	
	printf("Números inseridos: %.1f; %.1f e %.1f\n\n", numeroA, numeroB, numeroC); //Mostrar números inseridos na tela.
	printf("O maior valor inserido é: "); //Mensagem que acompanha o maior número.
	
	//6º Passo: Caso valor A seja o maior valor, escrever o valor de A.
	if(numeroA>numeroB && numeroA>numeroC){
		printf("%.1f", numeroA);
	}
		
		//7º Passo: Caso valor B seja o maior valor, escrever o valor de B.
		else if(numeroB > numeroA && numeroB  >numeroC){
			printf("%.1f", numeroB);
		}
		
			//8º Passo: Caso valor C seja o maior valor, escrever o valor de C.
			else if(numeroC > numeroA && numeroC > numeroB){
				printf("%.1f", numeroC);
			}
			
				//9º Passo: Se todos os valores forem iguais, escrever valor de A.
				else if(numeroA == numeroB &&  numeroA == numeroC && numeroB==numeroC){
					printf("%.1f", numeroA);
				}
				
					//10º Passo: Se o valor de A e C forem iguais e maior que o valor de B, escrever valor de A.
					else if(numeroA == numeroC && numeroA > numeroB && numeroC >numeroB){
							printf("%.1f", numeroA);
						}
						
						//11º Passo: Se o valor de B e C forem iguais e maior que o valor de A, escrever valor de B.
							else if(numeroB == numeroC && numeroB > numeroA && numeroC > numeroA){
								printf("%.1f", numeroB);
							}
							
							//12º Passo: Se o valor de A e B forem iguais e maior que o valor de C, escrever valor de A. Observação: Essa é a unica condição que não está funcionando como deveria.
								else{
									printf("%.1f", numeroA);
								}
								
	printf("\n\nObrigado por utilizar esse programa! :D"); //Agradecimento.							
								
	//13º Passo: Retorno da função.
	return 0;
	
	//14º Passo: Fim do algoritimo.											
}	
