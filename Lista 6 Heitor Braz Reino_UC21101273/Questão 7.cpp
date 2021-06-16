//Algoritimo para determinar qual é o melhor Jogador, Pelé ou Maradona

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int votosPele=0, votosMaradona=0, votosBrancos=0, votosNulos=0, opcao, contador=0, totalVotos=0, vencedor;
	
	//5º Passo: Criar repetição para cada pessoa que for votar
	do{
		
	//6º Passo: Mostrar opções de voto para a pessoa
		printf("Votação Melhor Jogador Mundo (Contagem de Votos: %d)\n\n", contador);
		printf("0- Voto Branco\n");
		printf("25- Pelé\n");
		printf("33- Maradona\n");
		printf("10- Fechar votação\n\n");
		printf("Atenção: Digitar outro valor resulta em voto nulo!\n");
		scanf("%d", &opcao);
	
		//6º Passo: Switch Case para cada uma das opções do menu
		switch(opcao){
		
			//7º Caso usuário vote em Branco, somar +1 na quantidade de Votos Brancos e Total
			case 0:
				votosBrancos++;
				totalVotos++;
				break;
			
			//8º Caso usuário vote no Pelé, somar +1 na quantidade de Votos do Pelé e Total
			case 25:
				votosPele++;
				totalVotos++;
				break;
				
			//9º Caso usuário vote em Maradona, somar +1 na quantidade de Votos do Maradona e Total
			case 33:
				votosMaradona++;
				totalVotos++;
				break;
			
			//10º Caso usuário vote em 10, finalizar laço	
			case 10:
				break;
			
			//11º Caso usuário vote em valor não existente, +1 na quantidade de Votos Nulos e Total
			default:
				votosNulos++;
				totalVotos++;
				break;
		}
	
	contador++;
	system("cls");

	}while(opcao!=10);
	
	//12º Passo: Comparar votos e mostrar ganhador
	printf("Resultado:\n\n");
	
	//Pele ganha
	if(votosPele>votosMaradona){
		printf("O Vencedor foi Pelé!!\n\n\n");
	}
	
	//Maradona ganha
	else if(votosMaradona>votosPele){
		printf("O Vencedor foi Maradona!!\n\n\n");
	}
	
	//Empate
	else{
		printf("Pelé e Maradona empataram.\n\n\n");
	}
	
	//13º Passo: Mostrar contagem dos votos
	printf("Resumo dos Votos:\n\n");
	printf("Votos Pelé: %d\n", votosPele);
	printf("Votos Maradona: %d\n", votosMaradona);	
	printf("Votos Brancos: %d\n", votosBrancos);
	printf("Votos Nulos: %d\n", votosNulos);
	
	//14º Passo: Retorno da função
	return 0;

//15º Passo: Fim da função principal	
}
