//Algoritimo para ler idade de X pessoas, calcular a media e mostrar quais são as pessoas mais velhas e mostrar sua posição no vetor

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	float idade[100], media, maiorIdade=0;
	int maximaIdade, contador, somaIdades=0;
	
	
	//5º Passo: Perguntar para o usuário a quantidade de numeros que serão lidos;
	
	printf("Olá! Esse programa calcular a média de idade das pessoas desejadas e mostrará quem é a mais velha\n\n");
	printf("Digite quantas idades você deseja que o programa leia (Máximo 100): ");
	
	//Validação: Quantidade de pessoas deve ser entre 1 e 100
	do{
		
		scanf("%d", &maximaIdade);
			
		if(maximaIdade > 100 || maximaIdade < 1){
				
			printf("\nDigite somente números entre 1 e 100: ");
		
		}
		
	}while(maximaIdade > 100 || maximaIdade < 1);
	
	//7º Passo: Perguntar a idade de cada uma das pessoas
	for(contador=1; contador<=maximaIdade; contador++){
		
		printf("Digite a idade da %dª pessoa: ", contador);
		scanf("%f", &idade[contador]);
		somaIdades=somaIdades+idade[contador]; //8º Passo: Somar a idade ao número total da idade das pessoas
		
		if(idade[contador]>=maiorIdade){ //9º Passo:Identificar qual é a maior idade
			maiorIdade=idade[contador];
		}
	
	media=somaIdades/contador; //10º Passo: Fórmula para calcular a média das pessoas
		
	}
	
	system("cls");
	
	//11º Passo: Mostrar média na tela
	printf("A média de idade das pessoas desse grupo é = %.2f anos", media);
	printf("\n\nA(s) pessoa(s) mais velha(s) do grupo são:\n");
	
	//12º Passo: Comparar cada uma das idades do vetor com a idade máxima encontrada para identificar qual posição do vetor está a maior média
	for(contador=1;contador<=maximaIdade;contador++){
		
		if(idade[contador]==maiorIdade){
			printf("\nPosição no Vetor = %d | Idade = %.0f",contador, idade[contador]); //13º Passo: Mostrar as posições do vetor que se encontram a maior idade	
		}
	}
	
	printf("\n\nObrigado por usar esse programa!");
	
	
	
	//13º Passo: Retorno da função
	return 0;

//14º Passo: Fim da função principal	
}
