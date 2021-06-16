//Algoritimo que mostra os 3 empregados mais recentes

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int contador=1, contador2, maximoFuncionarios=1, mesesTrabalho[50], menorTrabalho=1000;
	int  matriculaVetor[50], resposta;

	do{
		
		//Perguntar matr�cula do funcion�rio x
		printf("Digite a matr�cula do %d� funci�nario (0 Para finalizar a leitura das matr�culas) ", contador);
		scanf("%d", &matriculaVetor[contador]);
		
		if(matriculaVetor[contador] != 0){
			
			contador++;
			maximoFuncionarios++;
		
		}
		
		else{
			
			break;
	
		}
	
	}while(maximoFuncionarios <= 50);
	
	system("cls");
	
	//5� Passo: Perguntar quantos meses cada um dos funcion�rios trabalha na empresa
	for(contador=1; contador<=maximoFuncionarios; contador++){
		printf("Agora digite quantos meses o %d� funcion�rio trabalha na empresa: ", contador);
		scanf("%d", &mesesTrabalho[contador]);
		if(mesesTrabalho[contador]<menorTrabalho){
			menorTrabalho=mesesTrabalho[contador];
		}
	}
	
	//6� Passo: Verificar se existem funcion�rios que entraram no mesmo m�s
	for(contador=1; contador <= maximoFuncionarios; contador++){
        
		for (contador2 = contador + 1; contador2 < maximoFuncionarios; contador2++){
            	
			if (mesesTrabalho[contador2] == mesesTrabalho[contador]){
                	
				resposta=1;
            	
			}
        	
		}
		
    }
    
   //Caso existam, fechar programa
	if(resposta==1){
		printf("\n\nNenhum funcion�rio pode ter entrado no mesmo m�s! Execute o programa novamente com valores diferentes para cada funcion�rio.");
		exit(0);
	}
	
	system("cls");
	
	//7� Passo: Comparar qual dos meses de trabalho � o menor e escrever para o usu�rio a matr�cula correspondente
	//N�o consegui pensar ou encontrar um forma de mostrar somente os 3 usu�rios mais recentes
	for(contador=1; contador<=maximoFuncionarios; contador++){
		
		if(mesesTrabalho[contador]==menorTrabalho){
			printf("O funcion�rio de matr�cula %d � o funcion�rio mais recente.", matriculaVetor[contador]);
		}
		
	}
	//8� Passo: Retorno da fun��o
	return 0;
		
//9� Passo: Fim da fun��o principal		
}
	

