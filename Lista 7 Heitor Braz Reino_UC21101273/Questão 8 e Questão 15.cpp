//Algorito que ordena letras por ordem decresente A<B<C ou procura determinada letra. q8 e q15

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	char letra[30], letraComparacao;
	int maximoLetras, contador, opcao;
	
	printf("Esse programa ordena as letras digitadas em ordem decresente A<B<C...\n\n");
	
	//5� Passo: Perguntar para o usu�rio quantas letras o programa vai ler
	
	printf("Digite quantas letras voc� deseja que o programa leia? (Entre 1 e 30)\n");
	
	//Validar n�mero de letras entre 1 e 30
	do{
		
		scanf("%d", &maximoLetras);
			
		if(maximoLetras > 30 || maximoLetras < 1){
				
			printf("\nDigite somente n�meros entre 1 e 30: ");
		
		}
		
	}while(maximoLetras > 30 || maximoLetras < 1);
	
	system("cls");
	
	//6� Passo: Ler cada uma das letras que o usu�rio digitar
	printf("\nAgora digite letras entre A e Z.");
	
	//Comando de repeti��o pra perguntar as letras
	for(contador=1; contador<=maximoLetras; contador++){
		printf("\nDigite a %d� letra: ", contador);
		scanf(" %c", &letra[contador]);
	}
	
	//7� Passo: Mostrar para o usu�rio o menu de op��es
	printf("\nO que deseja fazer agora?");
	printf("\n\n1- Procurar letra em especifico no vetor");
	printf("\n2- Colocar as letra em ordem decrescente.\n");
	scanf("%d", &opcao);
	system("cls");
	
	//8� Passo: Switch Case para escolher entre op��es do menu
	switch(opcao){
	
	//Primeira op��o: Descobrir letras iguais no vetor	
	case 1:
			
		//Perguntar qual letra o usu�rio quer saber se existem iguais no vetor
		printf("Digite a letra que voc� deseja saber se existe uma igual no vetor: ");
		scanf(" %c", &letraComparacao);
		
		//Compara letras do vetor com a letra selecionada
		for(contador=1; contador<= maximoLetras; contador++){
			
			if(letra[contador] == letraComparacao){ //Se letra X do contador for igual a letra de compara��o, escrever a posi�ao e a letra an tela
				printf("\nPosi��o Vetor: %d� | Letra: %c",contador, letra[contador]);
			}
			
		}
		
	break;
	
	//7� Passo: Comparar cada uma das letras do vetor com as letras de Z a A, caso seja igual, digitar na tela
	
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
		printf("Op��o Inv�lida!");
		break;
		
	}
	
	printf("\n\nObrigado por utilizar esse programa!");
	
	return 0;

}
