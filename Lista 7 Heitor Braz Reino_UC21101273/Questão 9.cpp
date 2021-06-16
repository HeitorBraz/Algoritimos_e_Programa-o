//Algoritimo para ler idade de X pessoas, calcular a media e mostrar quais s�o as pessoas mais velhas e mostrar sua posi��o no vetor

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	float idade[100], media, maiorIdade=0;
	int maximaIdade, contador, somaIdades=0;
	
	
	//5� Passo: Perguntar para o usu�rio a quantidade de numeros que ser�o lidos;
	
	printf("Ol�! Esse programa calcular a m�dia de idade das pessoas desejadas e mostrar� quem � a mais velha\n\n");
	printf("Digite quantas idades voc� deseja que o programa leia (M�ximo 100): ");
	
	//Valida��o: Quantidade de pessoas deve ser entre 1 e 100
	do{
		
		scanf("%d", &maximaIdade);
			
		if(maximaIdade > 100 || maximaIdade < 1){
				
			printf("\nDigite somente n�meros entre 1 e 100: ");
		
		}
		
	}while(maximaIdade > 100 || maximaIdade < 1);
	
	//7� Passo: Perguntar a idade de cada uma das pessoas
	for(contador=1; contador<=maximaIdade; contador++){
		
		printf("Digite a idade da %d� pessoa: ", contador);
		scanf("%f", &idade[contador]);
		somaIdades=somaIdades+idade[contador]; //8� Passo: Somar a idade ao n�mero total da idade das pessoas
		
		if(idade[contador]>=maiorIdade){ //9� Passo:Identificar qual � a maior idade
			maiorIdade=idade[contador];
		}
	
	media=somaIdades/contador; //10� Passo: F�rmula para calcular a m�dia das pessoas
		
	}
	
	system("cls");
	
	//11� Passo: Mostrar m�dia na tela
	printf("A m�dia de idade das pessoas desse grupo � = %.2f anos", media);
	printf("\n\nA(s) pessoa(s) mais velha(s) do grupo s�o:\n");
	
	//12� Passo: Comparar cada uma das idades do vetor com a idade m�xima encontrada para identificar qual posi��o do vetor est� a maior m�dia
	for(contador=1;contador<=maximaIdade;contador++){
		
		if(idade[contador]==maiorIdade){
			printf("\nPosi��o no Vetor = %d | Idade = %.0f",contador, idade[contador]); //13� Passo: Mostrar as posi��es do vetor que se encontram a maior idade	
		}
	}
	
	printf("\n\nObrigado por usar esse programa!");
	
	
	
	//13� Passo: Retorno da fun��o
	return 0;

//14� Passo: Fim da fun��o principal	
}
