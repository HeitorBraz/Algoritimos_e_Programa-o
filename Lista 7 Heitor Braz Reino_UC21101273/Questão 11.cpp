//OBS: N�o usei fun��o e procedimentos
//Algoritimo que mostra o maior e menor sal�rio de um funcion�rio e a media

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador, contador2, maximoFuncionarios;
	float  salarioVetor[100], matriculaVetor[100], maiorSalario=0, menorSalario=999999, media, somaMedia;
	
	//5� Passo: Perguntar para o usu�rio a quantidade de numeros que ser�o lidos;
	printf("Ol�! Esse programa ir� comparar o sal�rio dos funcion�rios e calcular a media salarias.\n\n");
	printf("Digite quantos sal�rios voc� deseja que o programa leia (M�ximo 100): ");
	
		scanf("%d", &maximoFuncionarios);
			
	
	//6� Passo: Perguntar matricula e salario para cada um dos funcion�rios
	for(contador=1; contador<=maximoFuncionarios; contador++){
		
		//Perguntar matr�cula do funcion�rio x
		printf("Digite a matr�cula do %d� funci�nario: ", contador);
		scanf("%d", &matriculaVetor[contador]);
		
		//Perguntar sal�rio do funcion�rio x
		printf("Digite o sal�rio do %d� sal�rio: ", contador);
		scanf("%f", &salarioVetor[contador]);
		somaMedia= somaMedia+salarioVetor[contador];
		
		//7� Passo: Definir maior sal�rio
		if(salarioVetor[contador]>maiorSalario){
			maiorSalario=salarioVetor[contador];
		}
		
		//8� Passo: Definir menor sal�rio
		if(salarioVetor[contador]<menorSalario){
			menorSalario=salarioVetor[contador];
		}
	
	media=somaMedia/maximoFuncionarios;
		
	}
	
	system("cls");
	
	//9� Passo: Mostrar resultado na tela
	printf("Maior Sal�rio entre os funcion�rios: %.2f Reais\n", maiorSalario);
	printf("Menor Sal�rio entre os funcion�rios: %.2f Reais\n", menorSalario);
	printf("M�dia Salarial dos Funcion�rios: %.2f Reais\n\n", media);
	printf("Obrigado por utilizar esse programa!");
	
	//10� Passo: Retorno da fun��o
	return 0;

//11� Passo: Fim da fun��o principal	
}
