//Algoritimo que mostrar na tela a região do brasil escolhida pelo usuário

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int selecaoMenu;
	
	//5º Passo: Mostrar menu de opções para o usuário
	do{
	printf("|==================================|\n");
	printf("|          Menu de Opções          |\n");
	printf("|==================================|\n");
	printf("| 1- Norte                         |\n");
	printf("| 2- Nordeste                      |\n");
	printf("| 3- Centro-Oeste                  |\n");
	printf("| 4- Sudeste                       |\n");
	printf("| 5- Sul                           |\n");
	printf("| 0- Sair do Programa              |\n");
	printf("|==================================|\n");
	printf("\n\nDigite a opção: ");
	scanf("%d", &selecaoMenu);
	system("cls");
	}while(selecaoMenu < 0 || selecaoMenu > 5);
	
	//6º Passo: Switch Case para cada das opções do menu
	switch(selecaoMenu){
	
	//Opção 1
	case 1:	
	printf("|==================================|\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|              Norte               |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|==================================|\n");
	break;
	
	//Opção 2
	case 2:
	printf("|==================================|\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|             Nordeste             |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|==================================|\n");
	break;
	
	//Opção 3	
	case 3:
	printf("|==================================|\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|           Centro-Oeste           |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|==================================|\n");
	break;
	
	//Opção 4
	case 4:
	printf("|==================================|\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|            Sudeste               |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|==================================|\n");
	break;
	
	//Opção 5
	case 5:
	printf("|==================================|\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|              Sul                 |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("|==================================|\n");
	break;
	
	//Opção 0 (Sair do programa)		
	case 0:
		break;
	}
	
	//7º Passo: Retorno da função
	return 0;

//8º Passo: Fim da função principal	
}
