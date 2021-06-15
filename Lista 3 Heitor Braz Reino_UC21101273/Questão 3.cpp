//Algoritimo que apresenta a menor altura entre 10 pessoas

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar fun��o principal
int main(){

	//3� Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	//4� Passo: Definir vari�veis
	int alturaPessoa[10];
	int contador=2;
	int menorValor;
	int maiorValor;
	
	
	//5� Passo: Pedir altura da primeira pessoa
	printf("Ol�! Esse programa ir� mostrar qual das 10 alturas digitadas � a menor.\n");
	printf("\nDigite a altura da 1� pessoa em cent�metros: ");
	scanf("%d", &alturaPessoa[1]);
	fflush(stdin);
	menorValor = alturaPessoa[1]; //A primeira altura inserida passa a ser a menor altura
	
	//Criar o comando while para perguntar a altura das outras 9 pessoas
	while(contador<=10){
		printf("Digita a altura da %d� pessoa em cent�metros: ", contador);
		scanf("%d", &alturaPessoa[contador]);
		fflush(stdin);
		
		//Se a altura da pessoa X for menor que o menor valor anterior a altura da pessoa X passa a ser o novo menor valor
		if(alturaPessoa[contador] < menorValor){
			menorValor = alturaPessoa[contador];
		}
		
		//Se n�o, n�o � o menor valor
		else if(alturaPessoa[contador] > menorValor)
			alturaPessoa[contador] = maiorValor;

			
		contador++;	
	}
	
	//Mostrar na tela o maior valor
	printf("A menor altura entre as 10 �: %d", menorValor);
	
	//Retorno da Fun��o
	return 0;

//Fim da Fun��o
}
