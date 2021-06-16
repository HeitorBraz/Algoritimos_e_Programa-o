//Algoritimo que l� uma frase e depois mostra quantidade de letras 'a' 'espa�os em branco' e pares de caracteres repetidos

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	char frase[80];
	int espacosBrancos=0, letrasA=0, contador, paresRepetidos=0, contador2;
	
	//5� Passo: Pedir e ler frase do usu�rio
	printf("Digite um frase de at� 80 caracteres (Inclu�ndo espa�os em branco):\n");
	fgets(frase,80,stdin);
	
	//6� Passo: Comando de repeti��o, ir� comparar cada uma das letras com as 3 condi��es(espa�o branco, letraA)
	while(contador<=frase[contador]){
 	
 		//Verifica se o caractere � um espa�o em branco
		if(frase[contador]==' '){
        	espacosBrancos++;
    	}
		
		//Verifica se o caractere � uma letra A
		else if (frase[contador]=='A'||frase[contador]=='a'){
			letrasA++;
		} 
		
		contador++;
    
	}
	
	system("cls");
	
	//7� Passo: Mostrar resultado de espa�os em brancos e letras 'a' na frase
	printf("N�mero de Espa�os em Branco na Frase = %d", espacosBrancos);
	printf("\nN�mero de Letras 'A' na Frase = %d", letrasA);
	
	printf("\n\nPares de Letra que se repetem:");
	
	//8� Passo: Compara pares de letras repetidos
	for(contador=1;contador<=frase[contador]; contador++){ //1� Par
		
		for(contador2=1; contador2<=frase[contador]; contador2++){ //2� Par
			
			if(frase[contador] == frase[contador2+2] && frase[contador+1] == frase[contador2+3]){ //Compara��o
				paresRepetidos++; //Total de pares de letras repetidos
				printf("\n-%c%c", frase[contador], frase[contador2+1]);
			}
		
		}
		
	}
	
	//9� Passo: Mostrar quantidade de pares de letras repetidos
	printf("\n\nPares de Letra Repetidos = %d", paresRepetidos);
	
	//10� Passo: Retorno da fun��o
	return 0;	
	
//11� Passo: Fim do algoritimo
}
