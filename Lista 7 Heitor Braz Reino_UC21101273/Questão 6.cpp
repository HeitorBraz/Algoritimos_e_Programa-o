//Algoritimo que mostra o maior e menor sal�rio de um funcion�rio

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador, contador2, maximoFuncionarios, resposta;
	float  salarioVetor[100], matriculaVetor[100], maiorSalario=0, menorSalario=999999;
	
	//5� Passo: Perguntar para o usu�rio a quantidade de numeros que ser�o lidos;
	printf("Ol�! Esse programa ir� comparar o sal�rio dos funcion�rios.\n\n");
	printf("Digite quantos sal�rios voc� deseja que o programa leia (M�ximo 100): ");
	
	//Valida��o: Quantidade de funcion�rios deve ser entre 1 e 100
	do{
		
		scanf("%d", &maximoFuncionarios);
			
		if(maximoFuncionarios > 100 || maximoFuncionarios < 1){
				
			printf("\nDigite somente n�meros entre 1 e 100: ");
		
		}
		
	}while(maximoFuncionarios > 100 || maximoFuncionarios < 1);
	
	//6� Passo: Perguntar matricula e salario para cada um dos funcion�rios
	for(contador=1; contador<=maximoFuncionarios; contador++){
		
		//Perguntar matr�cula do funcion�rio x
		printf("Digite a matr�cula do %d� funci�nario: ", contador);
		scanf("%f", &matriculaVetor[contador]);
		
	}
	
	//7� Passo: Verificar se existem matr�culas iguais
	for(contador=1; contador <= maximoFuncionarios; contador++){
        
		for (contador2 = contador + 1; contador2 < maximoFuncionarios; contador2++){
            	
			if (matriculaVetor[contador2] == matriculaVetor[contador]){
                	
				resposta=1;
            	
			}
        	
		}
		
    }
    
	//8� Passo: Caso exista funcion�rios com as matr�culas iguais, pedir para ele tentar novamente.	
	if(resposta==1){
		printf("\n\nExistem funcion�rios com as matr�culas iguais! Execute o programa novamente usando valores diferentes para as matr�culas.");
		exit(0);
	}
	
	for(contador=1; contador<=maximoFuncionarios; contador++){	
		
		//Perguntar sal�rio do funcion�rio x
		printf("Digite o sal�rio do %d� sal�rio: ", contador);
		scanf("%f", &salarioVetor[contador]);
		
		//9� Passo: Definir maior sal�rio
		if(salarioVetor[contador]>maiorSalario){
			maiorSalario=salarioVetor[contador];
		}
		
		//10� Passo: Definir menor sal�rio
		if(salarioVetor[contador]<menorSalario){
			menorSalario=salarioVetor[contador];
		}
	
	}
	
	system("cls");
	
	//11� Passo: Mostrar resultado na tela
	printf("Matr�cula do Funcion�rio | Salar�o\n");
	
	for(contador=1;contador<=maximoFuncionarios; contador++){
	printf("         %.0f              |  %f    \n", matriculaVetor[contador], salarioVetor[contador]);
	}
	
	printf("\n\nMaior Sal�rio entre os funcion�rios: %.2f", maiorSalario);
	printf("\nMenor Sal�rio entre os funcion�rios: %.2f", menorSalario);
	printf("\n\nObrigado por utilizar esse programa!");
	
	//12� Passo: Retorno da fun��o
	return 0;

//13� Passo: Fim da fun��o principal	
}
