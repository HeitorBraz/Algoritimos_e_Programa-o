//Algoritimo para pesquisa de altura e sexo de um grupo de pessoas

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int altura, contador, sexo, maiorAltura=0, qntdMulher=0, somaAlturaMulher=0, mediaAlturaMulher, menorAltura=1000;
	int pessoas, qntdHomens=0, opcao=0;
	
	printf("Quantas pessoas irão fazer a pesquisa? (Máximo 10): ");
	
	//5º Passo: Perguntar a quantidade de pessoas que irão participar da pesquisa
	while(opcao!=1){
		
		//5.1 Passo: Validar o valor
		do{
			printf("\nDigite o número de pessoas: ");
			scanf("%d", &pessoas);
			if(pessoas>10||pessoas<0){
				printf("Digite um valor válido: ");		
			}
 		}while(pessoas>10||pessoas<0);
 		
 		//5.2 Passo: Perguntar se a pessoa deseja troca o valor
 		printf("\n\nValor digitado: %d", pessoas);
 		printf("\n\nDeseja alterar o valor?");
 		printf("\n1- Não");
 		printf("\n2- Sim\n");
 		scanf("%d", &opcao);
 
	}
	
	//6º Passo: Repetição for para cada pessoa do grupo
	for(contador=1; contador <= pessoas; contador++){
		
		//7º Passo: Perguntar altura da pessoa
		do{
			printf("\nDigite a altura(em centímetros) da %dª pessoa: ", contador);
			scanf("%d", &altura);
				if(altura<=0){
					printf("\nDigite uma altura válida!");
				}
		}while(altura<=0);
		
		//8º Passo: Caso seja a maior altura
		if(altura>maiorAltura){
			maiorAltura = altura;
		}
		
		//9º Passo: Caso seja a menor altura
		if(altura<menorAltura){
			menorAltura = altura;
		}
		
		//10º Passo: Perguntar sexo da pessoa
		do{
			printf("\nDigite o sexo da %dª pessoa.", contador);
			printf("\n1- Masculino");
			printf("\n2- Feminino\n ");
			scanf("%d", &sexo);
			if(sexo != 1 && sexo != 2){
				printf("\nDigite um valor válido!");
			}
		}while(sexo != 1 && sexo != 2);
		
		//11º Passo: Se sexo for feminino, aumentar em 1 a quantidade de mulher e somar altura ao total
		if(sexo==2){
			qntdMulher++;
			somaAlturaMulher = somaAlturaMulher + altura;
		}
		
		//11.1 Passo: Se sexo for masculino, aumentar em 1 a quantidade de homens
		else if(sexo==1){
			qntdHomens++;
		}

	}
	
	//12º Passo: Fórmula da média da altura das mulheres
	mediaAlturaMulher = somaAlturaMulher/qntdMulher;
	
	system("pause");
	system("cls");
	
	//13º Passo: Mostrar dados na tela
	printf("Resumo da pesquisa: ");
	printf("\n\nQuantidade de Homens: %d", qntdHomens);
	printf("\nMaior Altura entre as pessoas do grupo: %d Centímetros", maiorAltura);
	printf("\nMenor Altura entre as pessoas do grupo: %d Centímetros", menorAltura);
	printf("\nMédia da altura das mulheres: %d Centímetros", mediaAlturaMulher);
	printf("\n\nObrigado por usar esse programa!");
	
	//14º Passo: Retorno da função principal
	return 0;
	
//15º Passo: Fim da função principal	
}
	
