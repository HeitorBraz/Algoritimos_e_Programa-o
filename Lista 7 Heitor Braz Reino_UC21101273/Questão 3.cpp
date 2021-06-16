// Algoritimo que l� at� 100 valores e soma todos eles

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador, maximoDados;
	float dados[100], somaDados=0;
	
	//5� Passo: Perguntar para o usu�rio a quantidade de dados que ser�o lidos;
	printf("Ol�! Esse programa executar� a somat�ria dos dados n�mericos digitados.\n\n");
	printf("Digite quantos dados voc� deseja somar: ");
	
	//Valida��o: Quantidade de dados deve ser de no m�ximo 100
	do{
		
		scanf("%d", &maximoDados);
			
		if(maximoDados > 100 || maximoDados < 1){
				
			printf("\nDigite somente n�meros entre 1 e 100: ");
			
		}
		
	}while(maximoDados > 100 || maximoDados < 1);
	
	system("cls");
	
	//6� Passo: Comando de repeti��o, repete 1 vez para cada aluno
	for(contador = 1;contador <= maximoDados; contador++){
		
		//7� Passo: Perguntar o valor do X� dado
		printf("Digite o valor do %d� dado: ", contador);
		scanf("%f", &dados[contador]);
		fflush(stdin);
		
		//8� Passo: Somar valor do dado X ao total
		somaDados = somaDados + dados[contador];
		system("cls");
	
	}
	
	system("cls");
	
	printf("Resultado da soma de todos os dados inseridos: %.2f\n\n", somaDados);
	printf("Obrigado por utilizar esse progrma!");
	
	
	//8� Passo: Retorno da fun��o
	return 0;

//9� Passo: Fim do algoritimo	
}
