//Algoritimo para verificar se determinada data é válida.

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int mes, dia;
	
	//5º Passo: Perguntar o mês que a pessoa nasceu.
	printf("Bem-Vindo! Esse programa irá te mostrar qual é o seu signo.");
	printf("\nDigite o seu mês de nascimento: ");
	
	//6º Passo: Validar mês
	do{
		scanf("%d", &mes);
		if(mes>12||mes<1){
			printf("Digite um mês entre 1 e 12: ");
		}
		
	}while(mes>12||mes<1);
	
	//8º Passo: 
		
		switch(mes){
				
		//Janeiro	
		case 1:
			printf("Digite o dia: ");
	
			do{
				scanf("%d", &dia);
				if(dia<1 || dia>31){
					printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
			
			if(dia>=1 && dia<=20){
				printf("\nSeu signo é Capricórnio!");
			}
			else{
				printf("\nSeu signo é Aquário!");
			}	

				break;
			
			//Fevereiro
			case 2:
				printf("Digite o dia: ");
				
					do{
						scanf("%d", &dia);
						if(dia<1 || dia>28){
							printf("Dia inválido! Digite um dia entre 1 e 29: ");
						}
					}while(dia<1 || dia>29);
					
				if(dia>=1 && dia<=19){
					printf("\nSeu signo é Aquário!");
				}
				else{
					printf("\nSeu signo é Peixes!");
				}	
				
				break;
		
			//Março
			case 3:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				if(dia>=1 && dia<=20){
					printf("\nSeu signo é Peixes!");
				}
				else{
					printf("\nSeu signo é Áries!");
				}
				
				break;
			
			//Abril
			case 4:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inválido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				if(dia>=1 && dia<=20){
					printf("\nSeu signo é Áries!");
				}
				else{
					printf("\nSeu signo é Touro!");
				}
				
				break;	
			
			//Maio
			case 5:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				if(dia>=1 && dia<=20){
					printf("\nSeu signo é Touro!");
				}
				else{
					printf("\nSeu signo é Gêmeos!");
				}

				break;
			
			//Junho
			case 6:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inválido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				if(dia>=1 && dia<=20){
					printf("\nSeu signo é Gêmeos!");
				}
				else{
					printf("\nSeu signo é Câncer!");
				}
			
				break;	
			
			//Julho	
			case 7:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				if(dia>=1 && dia<=21){
					printf("\nSeu signo é Câncer!");
				}
				else{
					printf("\nSeu signo é Leão!");
				}
		
				break;
			
			//Agosto
			case 8:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				if(dia>=1 && dia<=22){
					printf("\nSeu signo é Leão!");
				}
				else{
					printf("\nSeu signo é Virgem!");
				}
			
				break;
			
			//Setembro
			case 9:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inválido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				if(dia>=1 && dia<=22){
					printf("\nSeu signo é Virgem!");
				}
				else{
					printf("\nSeu signo é Libra!");
				}

				break;
			
			//Outubro
			case 10:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
								
				if(dia>=1 && dia<=22){
					printf("\nSeu signo é Libra!");
				}
				else{
					printf("\nSeu signo é Escorpião!");
				}
				break;
				
			//Novembro
			case 11:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inválido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				if(dia>=1 && dia<=21){
					printf("\nSeu signo é Escorpião!");
				}
				else{
					printf("\nSeu signo é Sagitário!");
				}
				break;
			
			//Dezembro	
			case 12:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
								
				if(dia>=1 && dia<=21){
					printf("\nSeu signo é Sagitário!");
				}
				else{
					printf("\nSeu signo é Capricórnio!");
				}

				break;
		}
				
		
		
		printf("\n\nObrigado por usar esse programa!");

	//
	return 0;

//	
}


