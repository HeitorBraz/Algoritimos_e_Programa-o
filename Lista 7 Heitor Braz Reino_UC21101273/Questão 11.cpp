//OBS: Não usei função e procedimentos
//Algoritimo que mostra o maior e menor salário de um funcionário e a media

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int contador, contador2, maximoFuncionarios;
	float  salarioVetor[100], matriculaVetor[100], maiorSalario=0, menorSalario=999999, media, somaMedia;
	
	//5º Passo: Perguntar para o usuário a quantidade de numeros que serão lidos;
	printf("Olá! Esse programa irá comparar o salário dos funcionários e calcular a media salarias.\n\n");
	printf("Digite quantos salários você deseja que o programa leia (Máximo 100): ");
	
		scanf("%d", &maximoFuncionarios);
			
	
	//6º Passo: Perguntar matricula e salario para cada um dos funcionários
	for(contador=1; contador<=maximoFuncionarios; contador++){
		
		//Perguntar matrícula do funcionário x
		printf("Digite a matrícula do %dº funciónario: ", contador);
		scanf("%d", &matriculaVetor[contador]);
		
		//Perguntar salário do funcionário x
		printf("Digite o salário do %dº salário: ", contador);
		scanf("%f", &salarioVetor[contador]);
		somaMedia= somaMedia+salarioVetor[contador];
		
		//7º Passo: Definir maior salário
		if(salarioVetor[contador]>maiorSalario){
			maiorSalario=salarioVetor[contador];
		}
		
		//8º Passo: Definir menor salário
		if(salarioVetor[contador]<menorSalario){
			menorSalario=salarioVetor[contador];
		}
	
	media=somaMedia/maximoFuncionarios;
		
	}
	
	system("cls");
	
	//9º Passo: Mostrar resultado na tela
	printf("Maior Salário entre os funcionários: %.2f Reais\n", maiorSalario);
	printf("Menor Salário entre os funcionários: %.2f Reais\n", menorSalario);
	printf("Média Salarial dos Funcionários: %.2f Reais\n\n", media);
	printf("Obrigado por utilizar esse programa!");
	
	//10º Passo: Retorno da função
	return 0;

//11º Passo: Fim da função principal	
}
