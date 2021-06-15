//Algoritimo que calcula a multiplica��o de um n�mero pelo outro, usando o comando for.

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar fun��o principal
int main(){

	//3� Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	//4� Passo: Definir vari�veis

	int numeroA, numeroB;
	int contador, resultado=0;
	
	//5� Passo: Pedir o valor dos n�meros 
	printf("Ol�! Esse programa calcula a multiplica��o de um n�mero por outro.\n");
	printf("\nDigite o valor do 1� n�mero: ");
	scanf("%d", &numeroA);
	printf("Digite o valor do 2� n�mero: ");
	scanf("%d", &numeroB);
	
	//6� Passo: Uso do for para somar o n�mero A com ele mesmo a quantidade de vezes do n�mero B
	for(contador = 1; contador <= numeroB; contador++){
		resultado = resultado + numeroA;
	}
	
	//7� Passo: Mostrar resultado na tela
	printf("\nO resultado de %d x %d �: %d", numeroA, numeroB, resultado);
	
	//8� Passo: Retorno da fun��o
	return 0;

//9� Passo: Fim da fun��o	
}
