//Algorito que ordena letras por ordem decresente A<B<C ou procura determinada letra. q8 e q15

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	char letra[30], letraComparacao;
	int maximoLetras, contador, opcao;
	
	printf("Esse programa ordena as letras digitadas em ordem decresente A<B<C...\n\n");
	
	//5º Passo: Perguntar para o usuário quantas letras o programa vai ler
	
	printf("Digite quantas letras você deseja que o programa leia? (Entre 1 e 30)\n");
	
	//Validar número de letras entre 1 e 30
	do{
		
		scanf("%d", &maximoLetras);
			
		if(maximoLetras > 30 || maximoLetras < 1){
				
			printf("\nDigite somente números entre 1 e 30: ");
		
		}
		
	}while(maximoLetras > 30 || maximoLetras < 1);
	
	system("cls");
	
	//6º Passo: Ler cada uma das letras que o usuário digitar
	printf("\nAgora digite letras entre A e Z.");
	
	//Comando de repetição pra perguntar as letras
	for(contador=1; contador<=maximoLetras; contador++){
		printf("\nDigite a %dª letra: ", contador);
		scanf(" %c", &letra[contador]);
	}
	
	//7º Passo: Mostrar para o usuário o menu de opções
	printf("\nO que deseja fazer agora?");
	printf("\n\n1- Procurar letra em especifico no vetor");
	printf("\n2- Colocar as letra em ordem decrescente.\n");
	scanf("%d", &opcao);
	system("cls");
	
	//8º Passo: Switch Case para escolher entre opções do menu
	switch(opcao){
	
	//Primeira opção: Descobrir letras iguais no vetor	
	case 1:
			
		//Perguntar qual letra o usuário quer saber se existem iguais no vetor
		printf("Digite a letra que você deseja saber se existe uma igual no vetor: ");
		scanf(" %c", &letraComparacao);
		
		//Compara letras do vetor com a letra selecionada
		for(contador=1; contador<= maximoLetras; contador++){
			
			if(letra[contador] == letraComparacao){ //Se letra X do contador for igual a letra de comparação, escrever a posiçao e a letra an tela
				printf("\nPosição Vetor: %dª | Letra: %c",contador, letra[contador]);
			}
			
		}
		
	break;
	
	//7º Passo: Comparar cada uma das letras do vetor com as letras de Z a A, caso seja igual, digitar na tela
	
	case 2:
	
	printf("Letras digitadas em ordem decresente:");
	
	//Z
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='z'||letra[contador]=='Z'){
			printf("\n\n-Z");
		}
	}
	
	//X
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='z'||letra[contador]=='Y'){
			printf("\n-Y");
		}
	}
	
	//Y
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='x'||letra[contador]=='X'){
			printf("\n-X");
		}
	}
	
	//W
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='w'||letra[contador]=='W'){
			printf("\n-W");
		}
	}
	
	//V
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='v'||letra[contador]=='V'){
			printf("\n-V");
		}
	}
	
	//U
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='u'||letra[contador]=='U'){
			printf("\n-U");
		}
	}
	
	//T
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='t'||letra[contador]=='T'){
			printf("\n-T");
		}
	}
	
	//S
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='s'||letra[contador]=='S'){
			printf("\n-S");
		}
	}
	
	//R
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='r'||letra[contador]=='R'){
			printf("\n-R");
		}
	}
	
	//Q
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='q'||letra[contador]=='Q'){
			printf("\n-Q");
		}
	}
	
	//P
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='p'||letra[contador]=='P'){
			printf("\n-P");
		}
	}
	
	//O
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='o'||letra[contador]=='O'){
			printf("\n-O");
		}
	}
	
	//N
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='n'||letra[contador]=='N'){
			printf("\n-N");
		}
	}
	
	//M
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='m'||letra[contador]=='M'){
			printf("\n-M");
		}
	}
	
	//L
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='l'||letra[contador]=='L'){
			printf("\n-L");
		}
	}
	
	//K
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='k'||letra[contador]=='K'){
			printf("\n-K");
		}
	}
	
	//J
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='j'||letra[contador]=='J'){
			printf("\n-J");
		}
	}
	
	//I
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='i'||letra[contador]=='I'){
			printf("\n-I");
		}
	}
	
	//H
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='h'||letra[contador]=='H'){
			printf("\n-H");
		}
	}
	
	//G
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='g'||letra[contador]=='G'){
			printf("\n-G");
		}
	}
	
	//F
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='f'||letra[contador]=='F'){
			printf("\n-F");
		}
	}
	
	//E
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='e'||letra[contador]=='E'){
			printf("\n-E");
		}
	}
	
	//D
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='d'||letra[contador]=='D'){
			printf("\n-D");
		}
	}
	
	//C
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='c'||letra[contador]=='C'){
			printf("\n-C");
		}
	}
	
	//B
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='b'||letra[contador]=='B'){
			printf("\n-B");
		}
	}
	
	//A
	for(contador=1; contador<=maximoLetras; contador++){
		if(letra[contador]=='a'||letra[contador]=='A'){
			printf("\n-A");
		}
	}
	
	
		break;
	
	default:
		printf("Opção Inválida!");
		break;
		
	}
	
	printf("\n\nObrigado por utilizar esse programa!");
	
	return 0;

}
