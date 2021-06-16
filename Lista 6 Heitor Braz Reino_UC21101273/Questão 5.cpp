//Algoritimo para escrever uma tabela para comparar lucro para cada preço de ingresso

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese");
	
	//4º Passo: Mostrar tabela com todas as possibilidades de lucro
	printf("|_______________________________________________________________|\n");
	printf("|                        TABELA DE LUCROS                       |\n");
	printf("|===============================================================|\n");
	printf("| Preço do Ingresso | Número de Ingressos Vendidos |    Lucro   |\n");
	printf("|===================|==============================|============|\n");
	printf("|         15        |            120               | 1200 Reais |\n");
	printf("|         12        |            146               | 1152 Reais |\n");
	printf("|         09        |            172               | 0948 Reais |\n");
	printf("|         06        |            198               | 0588 Reais |\n");
	printf("|         03        |            224               | 0072 Reais |\n");
	printf("|===============================================================|\n\n\n");
	
	//5º Passo: Mostrar na tela qual foi o lucro máximo e o preço e número dos ingressos.
	printf("|====================================================================================|\n");
	printf("|O lucro máximo esperado é 1200 reais, para 120 ingressos vendidos por 15 reais cada.|\n");
	printf("|====================================================================================|\n");	
	
}
