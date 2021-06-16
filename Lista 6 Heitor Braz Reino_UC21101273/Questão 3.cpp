//Algoritimo para pesquisa de altura e sexo de um grupo de pessoas

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int altura, contador, sexo, maiorAltura=0, qntdMulher=0, somaAlturaMulher=0, mediaAlturaMulher, menorAltura=1000;
	int pessoas, qntdHomens=0, opcao=0;
	
	printf("Quantas pessoas ir�o fazer a pesquisa? (M�ximo 10): ");
	
	//5� Passo: Perguntar a quantidade de pessoas que ir�o participar da pesquisa
	while(opcao!=1){
		
		//5.1 Passo: Validar o valor
		do{
			printf("\nDigite o n�mero de pessoas: ");
			scanf("%d", &pessoas);
			if(pessoas>10||pessoas<0){
				printf("Digite um valor v�lido: ");		
			}
 		}while(pessoas>10||pessoas<0);
 		
 		//5.2 Passo: Perguntar se a pessoa deseja troca o valor
 		printf("\n\nValor digitado: %d", pessoas);
 		printf("\n\nDeseja alterar o valor?");
 		printf("\n1- N�o");
 		printf("\n2- Sim\n");
 		scanf("%d", &opcao);
 
	}
	
	//6� Passo: Repeti��o for para cada pessoa do grupo
	for(contador=1; contador <= pessoas; contador++){
		
		//7� Passo: Perguntar altura da pessoa
		do{
			printf("\nDigite a altura(em cent�metros) da %d� pessoa: ", contador);
			scanf("%d", &altura);
				if(altura<=0){
					printf("\nDigite uma altura v�lida!");
				}
		}while(altura<=0);
		
		//8� Passo: Caso seja a maior altura
		if(altura>maiorAltura){
			maiorAltura = altura;
		}
		
		//9� Passo: Caso seja a menor altura
		if(altura<menorAltura){
			menorAltura = altura;
		}
		
		//10� Passo: Perguntar sexo da pessoa
		do{
			printf("\nDigite o sexo da %d� pessoa.", contador);
			printf("\n1- Masculino");
			printf("\n2- Feminino\n ");
			scanf("%d", &sexo);
			if(sexo != 1 && sexo != 2){
				printf("\nDigite um valor v�lido!");
			}
		}while(sexo != 1 && sexo != 2);
		
		//11� Passo: Se sexo for feminino, aumentar em 1 a quantidade de mulher e somar altura ao total
		if(sexo==2){
			qntdMulher++;
			somaAlturaMulher = somaAlturaMulher + altura;
		}
		
		//11.1 Passo: Se sexo for masculino, aumentar em 1 a quantidade de homens
		else if(sexo==1){
			qntdHomens++;
		}

	}
	
	//12� Passo: F�rmula da m�dia da altura das mulheres
	mediaAlturaMulher = somaAlturaMulher/qntdMulher;
	
	system("pause");
	system("cls");
	
	//13� Passo: Mostrar dados na tela
	printf("Resumo da pesquisa: ");
	printf("\n\nQuantidade de Homens: %d", qntdHomens);
	printf("\nMaior Altura entre as pessoas do grupo: %d Cent�metros", maiorAltura);
	printf("\nMenor Altura entre as pessoas do grupo: %d Cent�metros", menorAltura);
	printf("\nM�dia da altura das mulheres: %d Cent�metros", mediaAlturaMulher);
	printf("\n\nObrigado por usar esse programa!");
	
	//14� Passo: Retorno da fun��o principal
	return 0;
	
//15� Passo: Fim da fun��o principal	
}
	
