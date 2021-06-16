//Algoritimo que l� um vetor de at� 80 elementos e depois l� um n�mero e verifica se existe igual no vetor

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador, maximoNumeros, vezesNumero=0;
	float  numerosVetor[80], numeroComparacao;
	
	//5� Passo: Perguntar para o usu�rio a quantidade de numeros que ser�o lidos;
	printf("Ol�! Esse programa ir� ler uma quantidade de n�meros e depois e verificar se o n�mero que voc� especificar existe nesse vetor.\n\n");
	printf("Digite quantos n�meros voc� deseja que o programa leia (M�ximo 80): ");
	
	//Valida��o: Quantidade de n�meros deve ser entre 1 e 80
	do{
		
		scanf("%d", &maximoNumeros);
			
		if(maximoNumeros > 80 || maximoNumeros < 1){
				
			printf("\nDigite somente n�meros entre 1 e 80: ");
			
		}
		
	}while(maximoNumeros > 80 || maximoNumeros < 1);
	
	//6� Passo: Perguntar o valor do n�mero na posi��o x do vetor
	for(contador=1;contador<=maximoNumeros;contador++){
		
		printf("\nDigite o %d n�mero: ", contador);
		scanf("%f", &numerosVetor[contador]);
		
	}
	
	system("cls");
	
	//7� Passo: Perguntar ao usu�rio o n�mero que ele deseja saber que existe no vetor
	printf("\nAgora, digite o n�mero que voc� deseja saber se existe no vetor: ");
	scanf("%f", &numeroComparacao);
	
	system("cls");
	
	printf("O N�mero %.2f aparece no vetor nas seguintes posi��es:\n\n", numeroComparacao);
	
	
	//8� Passo: Comparar o n�mero dado pelo usu�rio com cada um dos n�meros do vetor, e se forem iguais escrever a posi��o na tela e somar +1 na quantidade de igualdades
	for(contador=1;contador<=maximoNumeros;contador++){
		
		
		if(numeroComparacao == numerosVetor[contador]){
			printf("Posi��o %d = %.2f\n",contador, numerosVetor[contador]);
			vezesNumero++;
			
		}
		
	}
	
	system("pause");
	system("cls");
	
	//9� Passo: Escrever na tela o n�mero de vezes que o n�mero dado pelo usu�rio aparece  no vetor
	printf("N�mero de Vezes que %.2f aparece no vetor = %d", numeroComparacao, vezesNumero);
	
	
	//10� Passo: Retorno da fun��o
	return 0;

//11� Passo: Fim da fun��o principal	
}
