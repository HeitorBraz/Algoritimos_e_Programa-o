//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	char competidor1[20], competidor2[20], competidor3[20];
	int numeroJuizes, contador, notaCompetidor1=0, notaCompetidor2=0, notaCompetidor3=0, notaTotal1=0, notaTotal2=0, notaTotal3=0;
	
	printf("Bem-Vindo! Esse programa ir� mostrar qual dos competidores ganha a competi��o de piadas.");
	
	//5� Passo: Perguntar o nome dos competidores
	printf("\nDigite o nome do 1� Competidor: ");
	fgets(competidor1, 20, stdin);
	
	printf("\nDigite o nome do 2� Competidor: ");
	fgets(competidor2, 20, stdin);
	
	printf("\nDigite o nome do 3� Competidor: ");
	fgets(competidor3, 20, stdin);
	
	//6� Passo: Perguntar  o n�mero de Juizes
	printf("\nDigite o n�mero de Juizes: ");
	scanf("%d", &numeroJuizes);
	
	//7� Passo: Perguntar para cada um dos ju�zes a nota que ele avalia cada um dos competidores
	for(contador=1; contador <= numeroJuizes; contador++){
		
		//Valida��o da nota 1
		do{
		printf("\nNota que o %d� juiz avalia %s", contador, competidor1);
		scanf("%d", &notaCompetidor1);
			if(notaCompetidor1 >100 || notaCompetidor1 < 0){
				printf("Insira uma nota v�lida!");
			}
		}while(notaCompetidor1 >100 || notaCompetidor1 < 0);
		notaTotal1 = notaTotal1 + notaCompetidor1;
	
		//Valida��o da nota 2
		do{
		printf("\nNota que o %d� juiz avalia %s", contador, competidor2);
		scanf("%d", &notaCompetidor2);
			if(notaCompetidor2>100 || notaCompetidor2 < 0){
				printf("Insira uma nota v�lida!");
			}
		}while(notaCompetidor2 >100 || notaCompetidor2 < 0);
		notaTotal2 = notaTotal2 + notaCompetidor2;
		
		//Valida��o da nota 3
		do{
		printf("\nNota que o %d� juiz avalia %s", contador, competidor3);
		scanf("%d", &notaCompetidor3);
			if(notaCompetidor3>100 || notaCompetidor3 < 0){
				printf("Insira uma nota v�lida!");
			}
		}while(notaCompetidor3 >100 || notaCompetidor3 < 0);
		notaTotal3 = notaTotal3 + notaCompetidor3;
		
	}
	
	system("cls");
	
	//8� Passo: Comparar as notas totais e mostrar o ganhador
	if(notaTotal1 > notaTotal2 && notaTotal1 > notaTotal3){
		printf("Quem ganhou a competi��o foi %s Pontua��o: %d", competidor1, notaTotal1);
	}
	
	else if(notaTotal2 > notaTotal1 && notaTotal2 > notaTotal3){
		printf("Quem ganhou a competi��o foi %s Pontua��o: %d", competidor2, notaTotal2);
	}
	
	else if(notaTotal3 > notaTotal1 && notaTotal3 > notaTotal2){
		printf("Quem ganhou a competi��o foi %s Pontua��o: %d pontos", competidor3, notaTotal3);
	}
	
	else{
		printf("Houve um empate! � necess�rio reiniciar o programa com outras notas.");
	}
	
	return 0;
	
}
