///Algoritimo que imprimi todos os valores primos entre 2 números naturais dados pelo usuário

//1º Passo: Inserir bibliotecas necessárias111

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int numeroPensado, qntdChute=0, chute;
	
	//5º Passo: Perguntar o número que o jogador 1 pensou
	printf("Olá Jogador 1!\n\nDigite um número natural: ");

	//6º Passo: Validar número
	do{
		
		scanf("%d", &numeroPensado);
			if(numeroPensado<=0){
				printf("Digite somente um número positivo: ");
			}
		
	}while(numeroPensado<=0);
	
	//7º Passo: Limpar tela pro jogado 2 não ver o número pensado
	system("cls");
	
	//8º Passo: Pedir pra jogador 2 chutar um número
	printf("Jogador 2, tente adivinhar o número que o jogador 1 pensou.\n");
	
	//9º Passo: Repetição que continua até o jogador 2 acertar o número
	do{
		scanf("%d", &chute);
		
		//10º Passo: Dica pro jogador 2 chutar um número maior
		if(chute<numeroPensado){
			printf("\nTente de novo com um número maior.\n ");
			qntdChute++;
		}
		
		//11º Passo: Dica para o jogador 2 chutar um número menor
		else if(chute>numeroPensado){
			printf("\nTente de novo com um número menor.\n");
			qntdChute++;
		}
	
	}while(chute!=numeroPensado);
	
		system("cls");
		
		//12º Passo: Quando o jogador acertar o número mostrar resultado e quantidade de chutes na tela	
		printf("\n\nParabéns! Você acertou o número que o outro jogador pensou.");
		printf("\nNúmero de Chutes: %d", qntdChute+1);
		
	//13º Passo: Retorno da função	
	return 0;

//14º Passo: Fim da função principal
}
	
