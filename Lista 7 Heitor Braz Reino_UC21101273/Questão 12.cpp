//Algoritimo que mostra os 3 empregados mais recentes

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador=1, contador2, maximoFuncionarios=1, mesesTrabalho[50], menorTrabalho=1000;
	int  matriculaVetor[50], resposta;

	do{
		
		//Perguntar matrícula do funcionário x
		printf("Digite a matrícula do %dº funciónario (0 Para finalizar a leitura das matrículas) ", contador);
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
	
	//5º Passo: Perguntar quantos meses cada um dos funcionários trabalha na empresa
	for(contador=1; contador<=maximoFuncionarios; contador++){
		printf("Agora digite quantos meses o %dº funcionário trabalha na empresa: ", contador);
		scanf("%d", &mesesTrabalho[contador]);
		if(mesesTrabalho[contador]<menorTrabalho){
			menorTrabalho=mesesTrabalho[contador];
		}
	}
	
	//6º Passo: Verificar se existem funcionários que entraram no mesmo mês
	for(contador=1; contador <= maximoFuncionarios; contador++){
        
		for (contador2 = contador + 1; contador2 < maximoFuncionarios; contador2++){
            	
			if (mesesTrabalho[contador2] == mesesTrabalho[contador]){
                	
				resposta=1;
            	
			}
        	
		}
		
    }
    
   //Caso existam, fechar programa
	if(resposta==1){
		printf("\n\nNenhum funcionário pode ter entrado no mesmo mês! Execute o programa novamente com valores diferentes para cada funcionário.");
		exit(0);
	}
	
	system("cls");
	
	//7º Passo: Comparar qual dos meses de trabalho é o menor e escrever para o usuário a matrícula correspondente
	//Não consegui pensar ou encontrar um forma de mostrar somente os 3 usuários mais recentes
	for(contador=1; contador<=maximoFuncionarios; contador++){
		
		if(mesesTrabalho[contador]==menorTrabalho){
			printf("O funcionário de matrícula %d é o funcionário mais recente.", matriculaVetor[contador]);
		}
		
	}
	//8º Passo: Retorno da função
	return 0;
		
//9º Passo: Fim da função principal		
}
	

