//Algoritimo para determinar a quantidade de digitos que um numero natural possui

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int numeroDigitado, numero, contador=0;
	
	//5� Passo: Perguntar o n�mero desejado ao usu�rio
	do{
		printf("Digite o n�mero natural que voc� deseja descobrir a quantidade de d�gitos: ");
		scanf("%d", &numeroDigitado);
		if(numeroDigitado<=0){
			printf("Digite apenas n�meros postivos!\n\n");
		}
	}while(numeroDigitado<=0);
	
	numero=numeroDigitado;
	
	//6� Passo: Dividir um n�mero por 10 at� dar 0, e sempre contar o n�mero de divis�es
	while(numero!=0){
		numero=numero/10;
		contador++;
	}
	
	system("cls");
	
	//7� Passo: Mostrar resultado na tela
	printf("N�mero Digitado: %d", numeroDigitado);
	printf("\nQuantidade de D�gitos: %d ", contador);
	printf("\n\nObrigado por utilizar esse programa!");
	
	
	//8� Passo: Retorno da fun��o
	return 0;

//9� Passo: Fim da fun��o principal	
}
