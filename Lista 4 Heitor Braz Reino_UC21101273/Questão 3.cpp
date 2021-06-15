//Algoritimo que calcula qual dos 3 países ganhou as olimpiadas com base nas medalhas e no peso de cada um delas

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int qntdOuroA, qntdPrataA, qntdBronzeA;
	int qntdOuroB, qntdPrataB, qntdBronzeB;
	int qntdOuroC, qntdPrataC, qntdBronzeC;
	char paisA[20], paisB[20], paisC[20];
	int pontuacaoA, pontuacaoB, pontuacaoC;
	
	//5º Passo: Perguntar nome dos 3 países
	printf("Bem-Vindo! Esse programa irá mostrar qual dos 3 países ganharam as olimpíadas.");
	printf("\n\nDigite o nome do 1º país: ");
	scanf("%s", &paisA);
	printf("\nDigite o nome do 2º país: ");
	scanf("%s", &paisB);  
	printf("\nDigite o nome do 3º país: ");
	scanf("%s", &paisC); 
		
	//6º Passo: Perguntar as medalhas do 1º país
	printf("\nAgora digite a quantidade de medalhas de Ouro que %s ganhou: ", paisA);
	scanf("%d", &qntdOuroA);
	printf("Agora digite a quantidade de medalhas de Prata que %s ganhou: ", paisA);
	scanf("%d", &qntdPrataA);
	printf("Agora digite a quantidade de medalhas de Bronze que %s ganhou: ", paisA);
	scanf("%d", &qntdBronzeA);
	
	//7º Passo: Perguntar as medalhas do 2º pais
	printf("\nAgora digite a quantidade de medalhas de Ouro que %s ganhou: ", paisB);
	scanf("%d", &qntdOuroB);
	printf("Agora digite a quantidade de medalhas de Prata que %s ganhou: ", paisB);
	scanf("%d", &qntdPrataB);
	printf("Agora digite a quantidade de medalhas de Bronze que %s ganhou: ", paisB);
	scanf("%d", &qntdBronzeB);
	
	//8º Passo: Perguntar as medalhas do 3º pais	
	printf("\nAgora digite a quantidade de medalhas de Ouro que %s ganhou: ", paisC);
	scanf("%d", &qntdOuroC);
	printf("Agora digite a quantidade de medalhas de Prata que %s ganhou: ", paisC);
	scanf("%d", &qntdPrataC);
	printf("Agora digite a quantidade de medalhas de Bronze que %s ganhou: ", paisC);
	scanf("%d", &qntdBronzeC);
	
	//9º Passo: Definir a fórmula de pontuação para os 3 países
	pontuacaoA = (qntdOuroA*3) + (qntdPrataA*2) + qntdBronzeA;
	pontuacaoB = (qntdOuroB*3) + (qntdPrataB*2) + qntdBronzeB;
	pontuacaoC = (qntdOuroC*3) + (qntdPrataC*2) + qntdBronzeC;
	
	//10º Passo: Escrever na tela os resultados na ordem de maior pontuação para menor
	if(pontuacaoA > pontuacaoB && pontuacaoA > pontuacaoC && pontuacaoB > pontuacaoC){
		printf("\nResultados: ");
		printf("\n 1º Lugar: %s. %d Pontos", paisA, pontuacaoA);
		printf("\n 2º Lugar: %s. %d Pontos", paisB, pontuacaoB);
		printf("\n 3º Lugar: %s. %d Pontos", paisC, pontuacaoC);
	}
	
	else if(pontuacaoA > pontuacaoB && pontuacaoA > pontuacaoC && pontuacaoC > pontuacaoB){
		printf("\nResultados: ");
		printf("\n 1º Lugar: %s. %d Pontos", paisA, pontuacaoA);
		printf("\n 2º Lugar: %s. %d Pontos", paisC, pontuacaoC);
		printf("\n 3º Lugar: %s. %d Pontos", paisB, pontuacaoB);
	}
	
	else if(pontuacaoB > pontuacaoA && pontuacaoB > pontuacaoC && pontuacaoA > pontuacaoC){
		printf("\nResultados: ");
		printf("\n 1º Lugar: %s. %d Pontos", paisB, pontuacaoB);
		printf("\n 2º Lugar: %s. %d Pontos", paisA, pontuacaoA);
		printf("\n 3º Lugar: %s. %d Pontos", paisC, pontuacaoC);
	}
	
	else if(pontuacaoB > pontuacaoA && pontuacaoB > pontuacaoC && pontuacaoC > pontuacaoA){
		printf("\nResultados: ");
		printf("\n 1º Lugar: %s. %d Pontos", paisB, pontuacaoB);
		printf("\n 2º Lugar: %s. %d Pontos", paisC, pontuacaoC);
		printf("\n 3º Lugar: %s. %d Pontos", paisA, pontuacaoA);
	}
	
	else if(pontuacaoC > pontuacaoA && pontuacaoC > pontuacaoB && pontuacaoB > pontuacaoA){
		printf("\nResultados: ");
		printf("\n 1º Lugar: %s. %d Pontos", paisC, pontuacaoC);
		printf("\n 2º Lugar: %s. %d Pontos", paisB, pontuacaoB);
		printf("\n 3º Lugar: %s. %d Pontos", paisA, pontuacaoA);
	}
	
	else if(pontuacaoC > pontuacaoA && pontuacaoC > pontuacaoB && pontuacaoA > pontuacaoB){
		printf("\nResultados: ");
		printf("\n 1º Lugar: %s. %d Pontos", paisC, pontuacaoC);
		printf("\n 2º Lugar: %s. %d Pontos", paisA, pontuacaoA);
		printf("\n 3º Lugar: %s. %d Pontos", paisC, pontuacaoC);
	}
	
	else{
		printf("\nHouve um empate entre 2 ou mais países. Ninguem ganhou as olimpíadas :(");
	}
	
	printf("\n\nObrigado por utilizar esse programa!");
	
	//8º Passo: Retorno da função
	return 0;
	
//9º Passo: Fim da função principal	
}

