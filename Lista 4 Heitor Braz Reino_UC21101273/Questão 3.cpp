//Algoritimo que calcula qual dos 3 pa�ses ganhou as olimpiadas com base nas medalhas e no peso de cada um delas

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int qntdOuroA, qntdPrataA, qntdBronzeA;
	int qntdOuroB, qntdPrataB, qntdBronzeB;
	int qntdOuroC, qntdPrataC, qntdBronzeC;
	char paisA[20], paisB[20], paisC[20];
	int pontuacaoA, pontuacaoB, pontuacaoC;
	
	//5� Passo: Perguntar nome dos 3 pa�ses
	printf("Bem-Vindo! Esse programa ir� mostrar qual dos 3 pa�ses ganharam as olimp�adas.");
	printf("\n\nDigite o nome do 1� pa�s: ");
	scanf("%s", &paisA);
	printf("\nDigite o nome do 2� pa�s: ");
	scanf("%s", &paisB);  
	printf("\nDigite o nome do 3� pa�s: ");
	scanf("%s", &paisC); 
		
	//6� Passo: Perguntar as medalhas do 1� pa�s
	printf("\nAgora digite a quantidade de medalhas de Ouro que %s ganhou: ", paisA);
	scanf("%d", &qntdOuroA);
	printf("Agora digite a quantidade de medalhas de Prata que %s ganhou: ", paisA);
	scanf("%d", &qntdPrataA);
	printf("Agora digite a quantidade de medalhas de Bronze que %s ganhou: ", paisA);
	scanf("%d", &qntdBronzeA);
	
	//7� Passo: Perguntar as medalhas do 2� pais
	printf("\nAgora digite a quantidade de medalhas de Ouro que %s ganhou: ", paisB);
	scanf("%d", &qntdOuroB);
	printf("Agora digite a quantidade de medalhas de Prata que %s ganhou: ", paisB);
	scanf("%d", &qntdPrataB);
	printf("Agora digite a quantidade de medalhas de Bronze que %s ganhou: ", paisB);
	scanf("%d", &qntdBronzeB);
	
	//8� Passo: Perguntar as medalhas do 3� pais	
	printf("\nAgora digite a quantidade de medalhas de Ouro que %s ganhou: ", paisC);
	scanf("%d", &qntdOuroC);
	printf("Agora digite a quantidade de medalhas de Prata que %s ganhou: ", paisC);
	scanf("%d", &qntdPrataC);
	printf("Agora digite a quantidade de medalhas de Bronze que %s ganhou: ", paisC);
	scanf("%d", &qntdBronzeC);
	
	//9� Passo: Definir a f�rmula de pontua��o para os 3 pa�ses
	pontuacaoA = (qntdOuroA*3) + (qntdPrataA*2) + qntdBronzeA;
	pontuacaoB = (qntdOuroB*3) + (qntdPrataB*2) + qntdBronzeB;
	pontuacaoC = (qntdOuroC*3) + (qntdPrataC*2) + qntdBronzeC;
	
	//10� Passo: Escrever na tela os resultados na ordem de maior pontua��o para menor
	if(pontuacaoA > pontuacaoB && pontuacaoA > pontuacaoC && pontuacaoB > pontuacaoC){
		printf("\nResultados: ");
		printf("\n 1� Lugar: %s. %d Pontos", paisA, pontuacaoA);
		printf("\n 2� Lugar: %s. %d Pontos", paisB, pontuacaoB);
		printf("\n 3� Lugar: %s. %d Pontos", paisC, pontuacaoC);
	}
	
	else if(pontuacaoA > pontuacaoB && pontuacaoA > pontuacaoC && pontuacaoC > pontuacaoB){
		printf("\nResultados: ");
		printf("\n 1� Lugar: %s. %d Pontos", paisA, pontuacaoA);
		printf("\n 2� Lugar: %s. %d Pontos", paisC, pontuacaoC);
		printf("\n 3� Lugar: %s. %d Pontos", paisB, pontuacaoB);
	}
	
	else if(pontuacaoB > pontuacaoA && pontuacaoB > pontuacaoC && pontuacaoA > pontuacaoC){
		printf("\nResultados: ");
		printf("\n 1� Lugar: %s. %d Pontos", paisB, pontuacaoB);
		printf("\n 2� Lugar: %s. %d Pontos", paisA, pontuacaoA);
		printf("\n 3� Lugar: %s. %d Pontos", paisC, pontuacaoC);
	}
	
	else if(pontuacaoB > pontuacaoA && pontuacaoB > pontuacaoC && pontuacaoC > pontuacaoA){
		printf("\nResultados: ");
		printf("\n 1� Lugar: %s. %d Pontos", paisB, pontuacaoB);
		printf("\n 2� Lugar: %s. %d Pontos", paisC, pontuacaoC);
		printf("\n 3� Lugar: %s. %d Pontos", paisA, pontuacaoA);
	}
	
	else if(pontuacaoC > pontuacaoA && pontuacaoC > pontuacaoB && pontuacaoB > pontuacaoA){
		printf("\nResultados: ");
		printf("\n 1� Lugar: %s. %d Pontos", paisC, pontuacaoC);
		printf("\n 2� Lugar: %s. %d Pontos", paisB, pontuacaoB);
		printf("\n 3� Lugar: %s. %d Pontos", paisA, pontuacaoA);
	}
	
	else if(pontuacaoC > pontuacaoA && pontuacaoC > pontuacaoB && pontuacaoA > pontuacaoB){
		printf("\nResultados: ");
		printf("\n 1� Lugar: %s. %d Pontos", paisC, pontuacaoC);
		printf("\n 2� Lugar: %s. %d Pontos", paisA, pontuacaoA);
		printf("\n 3� Lugar: %s. %d Pontos", paisC, pontuacaoC);
	}
	
	else{
		printf("\nHouve um empate entre 2 ou mais pa�ses. Ninguem ganhou as olimp�adas :(");
	}
	
	printf("\n\nObrigado por utilizar esse programa!");
	
	//8� Passo: Retorno da fun��o
	return 0;
	
//9� Passo: Fim da fun��o principal	
}

