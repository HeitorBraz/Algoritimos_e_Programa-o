///Algoritimo que imprimi todos os valores primos entre 2 n�meros naturais dados pelo usu�rio

//1� Passo: Inserir bibliotecas necess�rias111

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int numeroPensado, qntdChute=0, chute;
	
	//5� Passo: Perguntar o n�mero que o jogador 1 pensou
	printf("Ol� Jogador 1!\n\nDigite um n�mero natural: ");

	//6� Passo: Validar n�mero
	do{
		
		scanf("%d", &numeroPensado);
			if(numeroPensado<=0){
				printf("Digite somente um n�mero positivo: ");
			}
		
	}while(numeroPensado<=0);
	
	//7� Passo: Limpar tela pro jogado 2 n�o ver o n�mero pensado
	system("cls");
	
	//8� Passo: Pedir pra jogador 2 chutar um n�mero
	printf("Jogador 2, tente adivinhar o n�mero que o jogador 1 pensou.\n");
	
	//9� Passo: Repeti��o que continua at� o jogador 2 acertar o n�mero
	do{
		scanf("%d", &chute);
		
		//10� Passo: Dica pro jogador 2 chutar um n�mero maior
		if(chute<numeroPensado){
			printf("\nTente de novo com um n�mero maior.\n ");
			qntdChute++;
		}
		
		//11� Passo: Dica para o jogador 2 chutar um n�mero menor
		else if(chute>numeroPensado){
			printf("\nTente de novo com um n�mero menor.\n");
			qntdChute++;
		}
	
	}while(chute!=numeroPensado);
	
		system("cls");
		
		//12� Passo: Quando o jogador acertar o n�mero mostrar resultado e quantidade de chutes na tela	
		printf("\n\nParab�ns! Voc� acertou o n�mero que o outro jogador pensou.");
		printf("\nN�mero de Chutes: %d", qntdChute+1);
		
	//13� Passo: Retorno da fun��o	
	return 0;

//14� Passo: Fim da fun��o principal
}
	
