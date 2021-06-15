//Algoritimo que imprimi todas as possibilidades do lançamento de 2 dados somarem 7

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Mostrar na tela todas as possibilidades
	printf("        |Possibilidades de lançamentos|\n\n");
	printf("    Dado A           Dado B        Resultado\n");
	printf("      1        +       6        =     	7\n");
	printf("      2        +       5        =     	7\n");
	printf("      3        +       4        =     	7\n");
	printf("      4        +       3        =     	7\n");
	printf("      5        +       2        =     	7\n");
	printf("      6        +       1        =     	7\n");
	
	//5º Passo: Retorno da função
	return 0;

//6º Passo: Fim da função principal	
}
	
	
