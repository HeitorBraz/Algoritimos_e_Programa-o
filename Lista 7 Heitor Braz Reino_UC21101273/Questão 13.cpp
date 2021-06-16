//Algoritimo que lê uma frase e depois mostra quantidade de letras 'a' 'espaços em branco' e pares de caracteres repetidos

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	char frase[80];
	int espacosBrancos=0, letrasA=0, contador, paresRepetidos=0, contador2;
	
	//5º Passo: Pedir e ler frase do usuário
	printf("Digite um frase de até 80 caracteres (Incluíndo espaços em branco):\n");
	fgets(frase,80,stdin);
	
	//6º Passo: Comando de repetição, irá comparar cada uma das letras com as 3 condições(espaço branco, letraA)
	while(contador<=frase[contador]){
 	
 		//Verifica se o caractere é um espaço em branco
		if(frase[contador]==' '){
        	espacosBrancos++;
    	}
		
		//Verifica se o caractere é uma letra A
		else if (frase[contador]=='A'||frase[contador]=='a'){
			letrasA++;
		} 
		
		contador++;
    
	}
	
	system("cls");
	
	//7º Passo: Mostrar resultado de espaços em brancos e letras 'a' na frase
	printf("Número de Espaços em Branco na Frase = %d", espacosBrancos);
	printf("\nNúmero de Letras 'A' na Frase = %d", letrasA);
	
	printf("\n\nPares de Letra que se repetem:");
	
	//8º Passo: Compara pares de letras repetidos
	for(contador=1;contador<=frase[contador]; contador++){ //1º Par
		
		for(contador2=1; contador2<=frase[contador]; contador2++){ //2º Par
			
			if(frase[contador] == frase[contador2+2] && frase[contador+1] == frase[contador2+3]){ //Comparação
				paresRepetidos++; //Total de pares de letras repetidos
				printf("\n-%c%c", frase[contador], frase[contador2+1]);
			}
		
		}
		
	}
	
	//9º Passo: Mostrar quantidade de pares de letras repetidos
	printf("\n\nPares de Letra Repetidos = %d", paresRepetidos);
	
	//10º Passo: Retorno da função
	return 0;	
	
//11º Passo: Fim do algoritimo
}
