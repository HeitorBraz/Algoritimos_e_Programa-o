
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
	
	//5º Passo: Repetição for para cada pessoa do grupo
	for(contador=1; contador <=50; contador++){
		
		//6º Passo: Perguntar altura da pessoa
		do{
			printf("\nDigite a altura(em centímetros) da %dª pessoa: ", contador);
			scanf("%d", &altura);
				if(altura<=0){
					printf("\nDigite uma altura válida!");
				}
		}while(altura<=0);
		
		//7º Passo: Caso seja a maior altura
		if(altura>maiorAltura){
			maiorAltura = altura;
		}
		
		//8º Passo: Caso seja a menor altura
		if(altura<menorAltura){
			menorAltura = altura;
		}
		
		//9º Passo: Perguntar sexo da pessoa
		do{
			printf("\nDigite o sexo da %dª pessoa.", contador);
			printf("\n1- Masculino");
			printf("\n2- Feminino\n ");
			scanf("%d", &sexo);
			if(sexo != 1 && sexo != 2){
				printf("\nDigite um valor válido!");
			}
		}while(sexo != 1 && sexo != 2);
		
		//10º Passo: Se sexo for feminino, aumentar em 1 a quantidade de mulher e somar altura ao total
		if(sexo==2){
			qntdMulher++;
			somaAlturaMulher = somaAlturaMulher + altura;
		}

	}
	
	//11º Passo: Fórmula da média da altura das mulheres
	mediaAlturaMulher = somaAlturaMulher/qntdMulher;
	
	system("pause");
	system("cls");
	
	//12º Passo: Mostrar dados na tela
	printf("Resumo da pesquisa: ");
	printf("\n\nMaior Altura entre as pessoas do grupo: %d Centímetros", maiorAltura);
	printf("\nMenor Altura entre as pessoas do grupo: %d Centímetros", menorAltura);
	printf("\nMédia da altura das mulheres: %d Centímetros", mediaAlturaMulher);
	printf("\n\nObrigado por usar esse programa!");
	
	//13º Passo: Retorno da função principal
	return 0;
	
//14º Passo: Fim da função principal	
}	
