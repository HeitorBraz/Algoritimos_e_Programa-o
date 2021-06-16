// Algoritimo que lê até 100 valores e soma todos eles

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador, maximoDados;
	float dados[100], somaDados=0;
	
	//5º Passo: Perguntar para o usuário a quantidade de dados que serão lidos;
	printf("Olá! Esse programa executará a somatória dos dados númericos digitados.\n\n");
	printf("Digite quantos dados você deseja somar: ");
	
	//Validação: Quantidade de dados deve ser de no máximo 100
	do{
		
		scanf("%d", &maximoDados);
			
		if(maximoDados > 100 || maximoDados < 1){
				
			printf("\nDigite somente números entre 1 e 100: ");
			
		}
		
	}while(maximoDados > 100 || maximoDados < 1);
	
	system("cls");
	
	//6º Passo: Comando de repetição, repete 1 vez para cada aluno
	for(contador = 1;contador <= maximoDados; contador++){
		
		//7º Passo: Perguntar o valor do Xº dado
		printf("Digite o valor do %dº dado: ", contador);
		scanf("%f", &dados[contador]);
		fflush(stdin);
		
		//8º Passo: Somar valor do dado X ao total
		somaDados = somaDados + dados[contador];
		system("cls");
	
	}
	
	system("cls");
	
	printf("Resultado da soma de todos os dados inseridos: %.2f\n\n", somaDados);
	printf("Obrigado por utilizar esse progrma!");
	
	
	//8º Passo: Retorno da função
	return 0;

//9º Passo: Fim do algoritimo	
}
