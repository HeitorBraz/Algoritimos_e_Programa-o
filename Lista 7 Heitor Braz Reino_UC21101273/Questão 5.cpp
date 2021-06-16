//Algoritimo que lê um vetor de até 80 elementos e depois lê um número e verifica se existe igual no vetor

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador, maximoNumeros, vezesNumero=0;
	float  numerosVetor[80], numeroComparacao;
	
	//5º Passo: Perguntar para o usuário a quantidade de numeros que serão lidos;
	printf("Olá! Esse programa irá ler uma quantidade de números e depois e verificar se o número que você especificar existe nesse vetor.\n\n");
	printf("Digite quantos números você deseja que o programa leia (Máximo 80): ");
	
	//Validação: Quantidade de números deve ser entre 1 e 80
	do{
		
		scanf("%d", &maximoNumeros);
			
		if(maximoNumeros > 80 || maximoNumeros < 1){
				
			printf("\nDigite somente números entre 1 e 80: ");
			
		}
		
	}while(maximoNumeros > 80 || maximoNumeros < 1);
	
	//6º Passo: Perguntar o valor do número na posição x do vetor
	for(contador=1;contador<=maximoNumeros;contador++){
		
		printf("\nDigite o %d número: ", contador);
		scanf("%f", &numerosVetor[contador]);
		
	}
	
	system("cls");
	
	//7º Passo: Perguntar ao usuário o número que ele deseja saber que existe no vetor
	printf("\nAgora, digite o número que você deseja saber se existe no vetor: ");
	scanf("%f", &numeroComparacao);
	
	system("cls");
	
	printf("O Número %.2f aparece no vetor nas seguintes posições:\n\n", numeroComparacao);
	
	
	//8º Passo: Comparar o número dado pelo usuário com cada um dos números do vetor, e se forem iguais escrever a posição na tela e somar +1 na quantidade de igualdades
	for(contador=1;contador<=maximoNumeros;contador++){
		
		
		if(numeroComparacao == numerosVetor[contador]){
			printf("Posição %d = %.2f\n",contador, numerosVetor[contador]);
			vezesNumero++;
			
		}
		
	}
	
	system("pause");
	system("cls");
	
	//9º Passo: Escrever na tela o número de vezes que o número dado pelo usuário aparece  no vetor
	printf("Número de Vezes que %.2f aparece no vetor = %d", numeroComparacao, vezesNumero);
	
	
	//10º Passo: Retorno da função
	return 0;

//11º Passo: Fim da função principal	
}
