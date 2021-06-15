//Algoritimo que funciona como uma urna eletronica. Vota��o + Resultados

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int auxiliar, auxiliar2;
	int votos1=0, votos2=0, votos3=0, votos4=0,votosBranco=0, votosNulo=0, votosTotal=0;
	int porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagemNulo, porcentagemBranco;
	
	printf("Bem-Vindo a Urna Eletr�nica!\n\n");
	
	//5� Passo: Mostra para o usu�rio as op��es de voto e pedir a op��o	
	//5.1 Passo: Valida��o. Caso o usu�rio escreva 0, o programa ir� para pr�xima tela.
	do{
		printf("Digite o n�mero corresponte a sua op��o de voto. Contagem: %d\n\n",votosTotal);
		printf("0- Fechar vota��o\n");
		printf("1- Candidato 1\n");
		printf("2- Candidato 2\n");
		printf("3- Candidato 3\n");
		printf("4- Candidato 4\n");
		printf("5- Voto Nulo\n");
		printf("6- Voto Branco\n");
		scanf("%d", &auxiliar);
		
		//6� Passo: Switch + Case para cada uma das op��es. A op��o escolhida soma +1 nos votos especificos e gerais
		switch(auxiliar){
			
			case 0:
				break;
					
			case 1:
				votos1++;
				votosTotal++;
				break;
		
			case 2:
				votos2++;
				votosTotal++;
				break;
			
			case 3:
				votos3++;
				votosTotal++;
				break;
			
			case 4:
				votos4++;
				votosTotal++;
				break;
			
			case 5:
				votosNulo++;
				votosTotal++;
				break;
				
			case 6:
				votosBranco++;
				votosTotal++;
				break;	
			
			default:
				printf("Valor Inv�lido!\n");
		}

		system("cls");
		
	}while(auxiliar!=0);
	
	//7� Passo: F�rmulas para calculo das porcentagens
	porcentagem1 = (votos1* 100)/ votosTotal;
	porcentagem2 = (votos2* 100)/votosTotal;
	porcentagem3 = (votos3* 100) /votosTotal;
	porcentagem4 = (votos4* 100) /votosTotal;
	porcentagemBranco = (votosBranco* 100) / votosTotal;
	porcentagemNulo = (votosNulo*100) / votosTotal;
	
	//8� Passo: Mostrar resumo dos votos
	printf("Total de Votos: %d\n\n", votosTotal);
	printf("Total de Votos Candidato 1: %d\n", votos1);
	printf("Total de Votos Candidato 2: %d\n", votos2);
	printf("Total de Votos Candidato 3: %d\n", votos3);
	printf("Total de Votos Candidato 4: %d\n", votos4);
	printf("Total de Votos Brancos: %d\n", votosBranco);
	printf("Total de Votos Nulos: %d\n\n", votosNulo);
	
	//9� Passo: Mostrar porcentagem dos votos
	printf("Porcentagem de Votos Candidato 1: %d Porcento\n", porcentagem1);
	printf("Porcentagem de Votos Candidato 2: %d Porcento\n", porcentagem2);
	printf("Porcentagem de Votos Candidato 3: %d Porcento\n", porcentagem3);	
	printf("Porcentagem de Votos Candidato 4: %d Porcento\n", porcentagem4);
	printf("Porcentagem de Votos Candidato Brancos: %d Porcento\n", porcentagemBranco);
	printf("Porcentagem de Votos Candidato Nulos: %d Porcento\n", porcentagemNulo);
	
	//10� Passo: Retorno da fun��o
	return 0;

//11� Passo: Fim da fun��o principal	
}
