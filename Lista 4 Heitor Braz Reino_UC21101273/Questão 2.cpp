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
	int mes, dia;
	
	//5� Passo: Perguntar o m�s que a pessoa nasceu.
	printf("Bem-Vindo! Esse programa ir� te mostrar qual � o seu signo.");
	printf("\nDigite o seu m�s de nascimento: ");
	
	//6� Passo: Validar m�s
	do{
		scanf("%d", &mes);
		if(mes>12||mes<1){
			printf("Digite um m�s entre 1 e 12: ");
		}
		
	}while(mes>12||mes<1);
	
	//8� Passo: 
		
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
			
			if(dia>=1 && dia<=20){
				printf("\nSeu signo � Capric�rnio!");
			}
			else{
				printf("\nSeu signo � Aqu�rio!");
			}	

				break;
			
			//Fevereiro
			case 2:
				printf("Digite o dia: ");
				
					do{
						scanf("%d", &dia);
						if(dia<1 || dia>28){
							printf("Dia inv�lido! Digite um dia entre 1 e 29: ");
						}
					}while(dia<1 || dia>29);
					
				if(dia>=1 && dia<=19){
					printf("\nSeu signo � Aqu�rio!");
				}
				else{
					printf("\nSeu signo � Peixes!");
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
				
				if(dia>=1 && dia<=20){
					printf("\nSeu signo � Peixes!");
				}
				else{
					printf("\nSeu signo � �ries!");
				}
				
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
				
				if(dia>=1 && dia<=20){
					printf("\nSeu signo � �ries!");
				}
				else{
					printf("\nSeu signo � Touro!");
				}
				
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
				
				if(dia>=1 && dia<=20){
					printf("\nSeu signo � Touro!");
				}
				else{
					printf("\nSeu signo � G�meos!");
				}

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
				
				if(dia>=1 && dia<=20){
					printf("\nSeu signo � G�meos!");
				}
				else{
					printf("\nSeu signo � C�ncer!");
				}
			
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
				
				if(dia>=1 && dia<=21){
					printf("\nSeu signo � C�ncer!");
				}
				else{
					printf("\nSeu signo � Le�o!");
				}
		
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
				
				if(dia>=1 && dia<=22){
					printf("\nSeu signo � Le�o!");
				}
				else{
					printf("\nSeu signo � Virgem!");
				}
			
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
				
				if(dia>=1 && dia<=22){
					printf("\nSeu signo � Virgem!");
				}
				else{
					printf("\nSeu signo � Libra!");
				}

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
								
				if(dia>=1 && dia<=22){
					printf("\nSeu signo � Libra!");
				}
				else{
					printf("\nSeu signo � Escorpi�o!");
				}
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
				
				if(dia>=1 && dia<=21){
					printf("\nSeu signo � Escorpi�o!");
				}
				else{
					printf("\nSeu signo � Sagit�rio!");
				}
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
								
				if(dia>=1 && dia<=21){
					printf("\nSeu signo � Sagit�rio!");
				}
				else{
					printf("\nSeu signo � Capric�rnio!");
				}

				break;
		}
				
		
		
		printf("\n\nObrigado por usar esse programa!");

	//
	return 0;

//	
}


