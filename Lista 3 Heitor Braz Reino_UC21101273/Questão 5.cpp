//Algoritimo para calcular fatorial de um número usando Do e While

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int numero, contador=1, fatorial=1;
	
	//5ª Passo: Pedir para o usuário o valor desejado
	printf("Bem-Vindo(a) Esse programa calcula o fatorial do número inserido\n");
	printf("\nDigite o número desejado: ");
	scanf("%d", &numero);
	
	//6º Passo: Caso número seja 0, o fatorial é 1
	if(numero == 0){
		fatorial = 1;
	}
	
	//7º Passo: Caso número seja diferente de 1, o fatorial é contador*fatorial
	else{
		
		do{
			fatorial = contador*fatorial; 
			contador++;
		}while(contador<=numero);
	
		}		
	
	
	//8º Passo: Imprimir na tela o resultado para o usuário
	printf("O Fatorial de %d é: %d",numero, fatorial);
	
	//9º Passo: Retorno da função
	return 0;
	
//10º Passo: Fim da função
}


