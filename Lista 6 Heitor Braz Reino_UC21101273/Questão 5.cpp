//Algoritimo para escrever uma tabela para comparar lucro para cada pre�o de ingresso

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese");
	
	//4� Passo: Mostrar tabela com todas as possibilidades de lucro
	printf("|_______________________________________________________________|\n");
	printf("|                        TABELA DE LUCROS                       |\n");
	printf("|===============================================================|\n");
	printf("| Pre�o do Ingresso | N�mero de Ingressos Vendidos |    Lucro   |\n");
	printf("|===================|==============================|============|\n");
	printf("|         15        |            120               | 1200 Reais |\n");
	printf("|         12        |            146               | 1152 Reais |\n");
	printf("|         09        |            172               | 0948 Reais |\n");
	printf("|         06        |            198               | 0588 Reais |\n");
	printf("|         03        |            224               | 0072 Reais |\n");
	printf("|===============================================================|\n\n\n");
	
	//5� Passo: Mostrar na tela qual foi o lucro m�ximo e o pre�o e n�mero dos ingressos.
	printf("|====================================================================================|\n");
	printf("|O lucro m�ximo esperado � 1200 reais, para 120 ingressos vendidos por 15 reais cada.|\n");
	printf("|====================================================================================|\n");	
	
}
