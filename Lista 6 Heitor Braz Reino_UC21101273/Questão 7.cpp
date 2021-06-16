//Algoritimo para determinar qual � o melhor Jogador, Pel� ou Maradona

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int votosPele=0, votosMaradona=0, votosBrancos=0, votosNulos=0, opcao, contador=0, totalVotos=0, vencedor;
	
	//5� Passo: Criar repeti��o para cada pessoa que for votar
	do{
		
	//6� Passo: Mostrar op��es de voto para a pessoa
		printf("Vota��o Melhor Jogador Mundo (Contagem de Votos: %d)\n\n", contador);
		printf("0- Voto Branco\n");
		printf("25- Pel�\n");
		printf("33- Maradona\n");
		printf("10- Fechar vota��o\n\n");
		printf("Aten��o: Digitar outro valor resulta em voto nulo!\n");
		scanf("%d", &opcao);
	
		//6� Passo: Switch Case para cada uma das op��es do menu
		switch(opcao){
		
			//7� Caso usu�rio vote em Branco, somar +1 na quantidade de Votos Brancos e Total
			case 0:
				votosBrancos++;
				totalVotos++;
				break;
			
			//8� Caso usu�rio vote no Pel�, somar +1 na quantidade de Votos do Pel� e Total
			case 25:
				votosPele++;
				totalVotos++;
				break;
				
			//9� Caso usu�rio vote em Maradona, somar +1 na quantidade de Votos do Maradona e Total
			case 33:
				votosMaradona++;
				totalVotos++;
				break;
			
			//10� Caso usu�rio vote em 10, finalizar la�o	
			case 10:
				break;
			
			//11� Caso usu�rio vote em valor n�o existente, +1 na quantidade de Votos Nulos e Total
			default:
				votosNulos++;
				totalVotos++;
				break;
		}
	
	contador++;
	system("cls");

	}while(opcao!=10);
	
	//12� Passo: Comparar votos e mostrar ganhador
	printf("Resultado:\n\n");
	
	//Pele ganha
	if(votosPele>votosMaradona){
		printf("O Vencedor foi Pel�!!\n\n\n");
	}
	
	//Maradona ganha
	else if(votosMaradona>votosPele){
		printf("O Vencedor foi Maradona!!\n\n\n");
	}
	
	//Empate
	else{
		printf("Pel� e Maradona empataram.\n\n\n");
	}
	
	//13� Passo: Mostrar contagem dos votos
	printf("Resumo dos Votos:\n\n");
	printf("Votos Pel�: %d\n", votosPele);
	printf("Votos Maradona: %d\n", votosMaradona);	
	printf("Votos Brancos: %d\n", votosBrancos);
	printf("Votos Nulos: %d\n", votosNulos);
	
	//14� Passo: Retorno da fun��o
	return 0;

//15� Passo: Fim da fun��o principal	
}
