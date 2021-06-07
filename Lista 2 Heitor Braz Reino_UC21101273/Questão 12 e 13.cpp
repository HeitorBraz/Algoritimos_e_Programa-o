//Algoritimo que mostra a qual cidade pertence determinado DDD + Chinesinho

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int opcaoMenu;
	
	//5º Passo: Pedir DDD para o usuário
	printf("Bem-Vindo(a)! Informe o DDD e informaremos a qual cidade ele pertence. (Apenas algumas localidades estão disponíveis)");
	scanf("%d", &opcaoMenu); //Foi inserido o valor 50
	fflush(stdin);
	
	//
	switch(opcaoMenu){
		case 61: //50 não faz parte desse caso, segue para o próximo
			printf("O DDD pertence a Brasília");
			break;
		case 71: //50 não faz parte desse caso, segue para o próximo
			printf("O DDD pertence a Salvador");
			break;
		case 11: //50 não faz parte desse caso, segue para o próximo
			printf("O DDD pertence a São Paulo");
			break;
		case 21: //50 não faz parte desse caso, segue para o próximo
			printf("O DDD pertence a Rio de Janeiro");
			break;
		case 32: //50 não faz parte desse caso, segue para o próximo
			printf("O DDD pertence a Juiz de Fora");
			break;
		case 19: //50 não faz parte desse caso, segue para o próximo
			printf("O DDD pertence a Campinas");
			break;
		case 27: //50 não faz parte desse caso, segue para o próximo
			printf("O DDD pertence a Vitória");
			break;
		case 31: //50 não faz parte desse caso, segue para o próximo
			printf("O DDD pertence a Belo Horizonte");
			break;
		default: //50 faz parte desse caso, segue para o próximo
			printf("Cidade sem identificação!"); //Será exibida essa mensagem na tela
	}
	return 0;
			
	
}
