//Algoritimo que imprimi todas as possibilidades do lan�amento de 2 dados somarem 7

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Mostrar na tela todas as possibilidades
	printf("        |Possibilidades de lan�amentos|\n\n");
	printf("    Dado A           Dado B        Resultado\n");
	printf("      1        +       6        =     	7\n");
	printf("      2        +       5        =     	7\n");
	printf("      3        +       4        =     	7\n");
	printf("      4        +       3        =     	7\n");
	printf("      5        +       2        =     	7\n");
	printf("      6        +       1        =     	7\n");
	
	//5� Passo: Retorno da fun��o
	return 0;

//6� Passo: Fim da fun��o principal	
}
	
	
