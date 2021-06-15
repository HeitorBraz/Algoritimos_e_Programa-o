//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	char competidor1[20], competidor2[20], competidor3[20];
	int numeroJuizes, contador, notaCompetidor1=0, notaCompetidor2=0, notaCompetidor3=0, notaTotal1=0, notaTotal2=0, notaTotal3=0;
	
	printf("Bem-Vindo! Esse programa irá mostrar qual dos competidores ganha a competição de piadas.");
	
	//5º Passo: Perguntar o nome dos competidores
	printf("\nDigite o nome do 1º Competidor: ");
	fgets(competidor1, 20, stdin);
	
	printf("\nDigite o nome do 2º Competidor: ");
	fgets(competidor2, 20, stdin);
	
	printf("\nDigite o nome do 3º Competidor: ");
	fgets(competidor3, 20, stdin);
	
	//6º Passo: Perguntar  o número de Juizes
	printf("\nDigite o número de Juizes: ");
	scanf("%d", &numeroJuizes);
	
	//7º Passo: Perguntar para cada um dos juízes a nota que ele avalia cada um dos competidores
	for(contador=1; contador <= numeroJuizes; contador++){
		
		//Validação da nota 1
		do{
		printf("\nNota que o %dº juiz avalia %s", contador, competidor1);
		scanf("%d", &notaCompetidor1);
			if(notaCompetidor1 >100 || notaCompetidor1 < 0){
				printf("Insira uma nota válida!");
			}
		}while(notaCompetidor1 >100 || notaCompetidor1 < 0);
		notaTotal1 = notaTotal1 + notaCompetidor1;
	
		//Validação da nota 2
		do{
		printf("\nNota que o %dº juiz avalia %s", contador, competidor2);
		scanf("%d", &notaCompetidor2);
			if(notaCompetidor2>100 || notaCompetidor2 < 0){
				printf("Insira uma nota válida!");
			}
		}while(notaCompetidor2 >100 || notaCompetidor2 < 0);
		notaTotal2 = notaTotal2 + notaCompetidor2;
		
		//Validação da nota 3
		do{
		printf("\nNota que o %dº juiz avalia %s", contador, competidor3);
		scanf("%d", &notaCompetidor3);
			if(notaCompetidor3>100 || notaCompetidor3 < 0){
				printf("Insira uma nota válida!");
			}
		}while(notaCompetidor3 >100 || notaCompetidor3 < 0);
		notaTotal3 = notaTotal3 + notaCompetidor3;
		
	}
	
	system("cls");
	
	//8º Passo: Comparar as notas totais e mostrar o ganhador
	if(notaTotal1 > notaTotal2 && notaTotal1 > notaTotal3){
		printf("Quem ganhou a competição foi %s Pontuação: %d", competidor1, notaTotal1);
	}
	
	else if(notaTotal2 > notaTotal1 && notaTotal2 > notaTotal3){
		printf("Quem ganhou a competição foi %s Pontuação: %d", competidor2, notaTotal2);
	}
	
	else if(notaTotal3 > notaTotal1 && notaTotal3 > notaTotal2){
		printf("Quem ganhou a competição foi %s Pontuação: %d pontos", competidor3, notaTotal3);
	}
	
	else{
		printf("Houve um empate! É necessário reiniciar o programa com outras notas.");
	}
	
	return 0;
	
}
