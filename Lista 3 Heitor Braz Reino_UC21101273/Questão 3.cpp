//Algoritimo que apresenta a menor altura entre 10 pessoas

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar função principal
int main(){

	//3º Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	//4º Passo: Definir variáveis
	int alturaPessoa[10];
	int contador=2;
	int menorValor;
	int maiorValor;
	
	
	//5º Passo: Pedir altura da primeira pessoa
	printf("Olá! Esse programa irá mostrar qual das 10 alturas digitadas é a menor.\n");
	printf("\nDigite a altura da 1ª pessoa em centímetros: ");
	scanf("%d", &alturaPessoa[1]);
	fflush(stdin);
	menorValor = alturaPessoa[1]; //A primeira altura inserida passa a ser a menor altura
	
	//Criar o comando while para perguntar a altura das outras 9 pessoas
	while(contador<=10){
		printf("Digita a altura da %dª pessoa em centímetros: ", contador);
		scanf("%d", &alturaPessoa[contador]);
		fflush(stdin);
		
		//Se a altura da pessoa X for menor que o menor valor anterior a altura da pessoa X passa a ser o novo menor valor
		if(alturaPessoa[contador] < menorValor){
			menorValor = alturaPessoa[contador];
		}
		
		//Se não, não é o menor valor
		else if(alturaPessoa[contador] > menorValor)
			alturaPessoa[contador] = maiorValor;

			
		contador++;	
	}
	
	//Mostrar na tela o maior valor
	printf("A menor altura entre as 10 é: %d", menorValor);
	
	//Retorno da Função
	return 0;

//Fim da Função
}
