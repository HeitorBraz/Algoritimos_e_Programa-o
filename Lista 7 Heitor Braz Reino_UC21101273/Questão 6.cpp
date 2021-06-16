//Algoritimo que mostra o maior e menor salário de um funcionário

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador, contador2, maximoFuncionarios, resposta;
	float  salarioVetor[100], matriculaVetor[100], maiorSalario=0, menorSalario=999999;
	
	//5º Passo: Perguntar para o usuário a quantidade de numeros que serão lidos;
	printf("Olá! Esse programa irá comparar o salário dos funcionários.\n\n");
	printf("Digite quantos salários você deseja que o programa leia (Máximo 100): ");
	
	//Validação: Quantidade de funcionários deve ser entre 1 e 100
	do{
		
		scanf("%d", &maximoFuncionarios);
			
		if(maximoFuncionarios > 100 || maximoFuncionarios < 1){
				
			printf("\nDigite somente números entre 1 e 100: ");
		
		}
		
	}while(maximoFuncionarios > 100 || maximoFuncionarios < 1);
	
	//6º Passo: Perguntar matricula e salario para cada um dos funcionários
	for(contador=1; contador<=maximoFuncionarios; contador++){
		
		//Perguntar matrícula do funcionário x
		printf("Digite a matrícula do %dº funciónario: ", contador);
		scanf("%f", &matriculaVetor[contador]);
		
	}
	
	//7º Passo: Verificar se existem matrículas iguais
	for(contador=1; contador <= maximoFuncionarios; contador++){
        
		for (contador2 = contador + 1; contador2 < maximoFuncionarios; contador2++){
            	
			if (matriculaVetor[contador2] == matriculaVetor[contador]){
                	
				resposta=1;
            	
			}
        	
		}
		
    }
    
	//8º Passo: Caso exista funcionários com as matrículas iguais, pedir para ele tentar novamente.	
	if(resposta==1){
		printf("\n\nExistem funcionários com as matrículas iguais! Execute o programa novamente usando valores diferentes para as matrículas.");
		exit(0);
	}
	
	for(contador=1; contador<=maximoFuncionarios; contador++){	
		
		//Perguntar salário do funcionário x
		printf("Digite o salário do %dº salário: ", contador);
		scanf("%f", &salarioVetor[contador]);
		
		//9º Passo: Definir maior salário
		if(salarioVetor[contador]>maiorSalario){
			maiorSalario=salarioVetor[contador];
		}
		
		//10º Passo: Definir menor salário
		if(salarioVetor[contador]<menorSalario){
			menorSalario=salarioVetor[contador];
		}
	
	}
	
	system("cls");
	
	//11º Passo: Mostrar resultado na tela
	printf("Matrícula do Funcionário | Salarío\n");
	
	for(contador=1;contador<=maximoFuncionarios; contador++){
	printf("         %.0f              |  %f    \n", matriculaVetor[contador], salarioVetor[contador]);
	}
	
	printf("\n\nMaior Salário entre os funcionários: %.2f", maiorSalario);
	printf("\nMenor Salário entre os funcionários: %.2f", menorSalario);
	printf("\n\nObrigado por utilizar esse programa!");
	
	//12º Passo: Retorno da função
	return 0;

//13º Passo: Fim da função principal	
}
