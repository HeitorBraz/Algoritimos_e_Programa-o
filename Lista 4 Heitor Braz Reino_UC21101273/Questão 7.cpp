
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
	
	//5� Passo: Repeti��o for para cada pessoa do grupo
	for(contador=1; contador <=50; contador++){
		
		//6� Passo: Perguntar altura da pessoa
		do{
			printf("\nDigite a altura(em cent�metros) da %d� pessoa: ", contador);
			scanf("%d", &altura);
				if(altura<=0){
					printf("\nDigite uma altura v�lida!");
				}
		}while(altura<=0);
		
		//7� Passo: Caso seja a maior altura
		if(altura>maiorAltura){
			maiorAltura = altura;
		}
		
		//8� Passo: Caso seja a menor altura
		if(altura<menorAltura){
			menorAltura = altura;
		}
		
		//9� Passo: Perguntar sexo da pessoa
		do{
			printf("\nDigite o sexo da %d� pessoa.", contador);
			printf("\n1- Masculino");
			printf("\n2- Feminino\n ");
			scanf("%d", &sexo);
			if(sexo != 1 && sexo != 2){
				printf("\nDigite um valor v�lido!");
			}
		}while(sexo != 1 && sexo != 2);
		
		//10� Passo: Se sexo for feminino, aumentar em 1 a quantidade de mulher e somar altura ao total
		if(sexo==2){
			qntdMulher++;
			somaAlturaMulher = somaAlturaMulher + altura;
		}

	}
	
	//11� Passo: F�rmula da m�dia da altura das mulheres
	mediaAlturaMulher = somaAlturaMulher/qntdMulher;
	
	system("pause");
	system("cls");
	
	//12� Passo: Mostrar dados na tela
	printf("Resumo da pesquisa: ");
	printf("\n\nMaior Altura entre as pessoas do grupo: %d Cent�metros", maiorAltura);
	printf("\nMenor Altura entre as pessoas do grupo: %d Cent�metros", menorAltura);
	printf("\nM�dia da altura das mulheres: %d Cent�metros", mediaAlturaMulher);
	printf("\n\nObrigado por usar esse programa!");
	
	//13� Passo: Retorno da fun��o principal
	return 0;
	
//14� Passo: Fim da fun��o principal	
}	
