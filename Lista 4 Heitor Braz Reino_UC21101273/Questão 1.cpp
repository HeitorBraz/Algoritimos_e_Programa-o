//Algoritimo para verificar se determinada data � v�lida.

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int ano, mes, dia, resto, anoBissexto=0;
	
	//5� Passo: Perguntar o ano
	printf("Bem-Vindo(a)! Esse programa ir� te informar se a data inserida � v�lida.");
	printf("\n\nDigite o Ano: ");
	
	//6� Passo: Validar o ano
	do{
		scanf("%d", &ano);
			if(ano<=0){
				printf("\nO Ano inv�lido! Digite um ano de valor positivo: ");
			}
	}while(ano<=0);
	
	//7� Passo: Verificar se o ano � bissexto
	resto = ano % 4;
		if(resto==0){
			anoBissexto = 1;
		}
	
	//8� Passo: Perguntar o m�s
		
		printf("Digite o m�s: ");
		
		//8.1� Passo: Validar m�s
		do{
			scanf("%d", &mes);
				if(mes>12 || mes<1){
					printf("\nM�s inv�lido! Digite um m�s entre 1 e 12: ");
				}
		}while(mes>12 || mes<1);
		
		//9� Passo: Verificar dias para cada m�s
		switch(mes){
			
			//Janeiro
			case 1:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inv�lido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;
			
			//Fevereiro
			case 2:
				printf("Digite o dia: ");
				
				//Feveiro(Ano Bissexto)
				if(anoBissexto == 1){
		
					do{
						scanf("%d", &dia);
						if(dia<1 || dia>29){
							printf("Dia inv�lido! Digite um dia entre 1 e 29: ");
						}
					}while(dia<1 || dia>29);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				
				}
				
				//Fevereiro(Ano Normal)
				else{
					
					do{
						scanf("%d", &dia);
						if(dia<1 || dia>28){
							printf("Dia inv�lido! Digite um dia entre 1 e 28: ");
						}
					}while(dia<1 || dia>28);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
					
				}
				
				break;
		
			//Mar�o
			case 3:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inv�lido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;
			
			//Abril
			case 4:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inv�lido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;	
			
			//Maio
			case 5:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inv�lido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;
			
			//Junho
			case 6:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inv�lido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;	
			
			//Julho	
			case 7:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inv�lido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;
			
			//Agosto
			case 8:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inv�lido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;
			
			//Setembro
			case 9:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inv�lido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;
			
			//Outubro
			case 10:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inv�lido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;
				
			//Novembro
			case 11:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inv�lido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;
			
			//Dezembro	
			case 12:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inv�lido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d � v�lida.", dia, mes, ano);
				break;				
				
		}
		
		printf("\nObrigado por usar esse programa! ");
		
		
	//10� Passo: Retorno da fun��o
	return 0;
	
//11� Passo: Fim da fun��o principal	
}
