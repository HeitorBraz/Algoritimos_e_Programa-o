//Algoritimo que mostrar na tela a regi�o do brasil escolhida pelo usu�rio

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int selecaoMenu;
	
	//5� Passo: Mostrar menu de op��es para o usu�rio
	do{
	printf("|==================================|\n");
	printf("|          Menu de Op��es          |\n");
	printf("|==================================|\n");
	printf("| 1- Norte                         |\n");
	printf("| 2- Nordeste                      |\n");
	printf("| 3- Centro-Oeste                  |\n");
	printf("| 4- Sudeste                       |\n");
	printf("| 5- Sul                           |\n");
	printf("| 0- Sair do Programa              |\n");
	printf("|==================================|\n");
	printf("\n\nDigite a op��o: ");
	scanf("%d", &selecaoMenu);
	system("cls");
	}while(selecaoMenu < 0 || selecaoMenu > 5);
	
	//6� Passo: Switch Case para cada das op��es do menu
	switch(selecaoMenu){
	
	//Op��o 1
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
	
	//Op��o 2
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
	
	//Op��o 3	
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
	
	//Op��o 4
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
	
	//Op��o 5
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
	
	//Op��o 0 (Sair do programa)		
	case 0:
		break;
	}
	
	//7� Passo: Retorno da fun��o
	return 0;

//8� Passo: Fim da fun��o principal	
}
