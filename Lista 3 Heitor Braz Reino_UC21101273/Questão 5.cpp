//Algoritimo para calcular fatorial de um n�mero usando Do e While

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int numero, contador=1, fatorial=1;
	
	//5� Passo: Pedir para o usu�rio o valor desejado
	printf("Bem-Vindo(a) Esse programa calcula o fatorial do n�mero inserido\n");
	printf("\nDigite o n�mero desejado: ");
	scanf("%d", &numero);
	
	//6� Passo: Caso n�mero seja 0, o fatorial � 1
	if(numero == 0){
		fatorial = 1;
	}
	
	//7� Passo: Caso n�mero seja diferente de 1, o fatorial � contador*fatorial
	else{
		
		do{
			fatorial = contador*fatorial; 
			contador++;
		}while(contador<=numero);
	
		}		
	
	
	//8� Passo: Imprimir na tela o resultado para o usu�rio
	printf("O Fatorial de %d �: %d",numero, fatorial);
	
	//9� Passo: Retorno da fun��o
	return 0;
	
//10� Passo: Fim da fun��o
}


