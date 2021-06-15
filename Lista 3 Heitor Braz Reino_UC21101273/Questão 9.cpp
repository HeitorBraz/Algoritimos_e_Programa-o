/*Algoritimo que mostra porcentagem dos entrevistados 
que a idade est� entre 18 e 35 anos e que tenham olhos verdes e cabelos loiros*/

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int idade;
	int maiorIdade=0, contador=0, opcaoPessoa;
	float porcentagemLoiras;
	float mulherLoiraVerde=0, pessoasTotal=0;
	
	//5� Passo: Do While que pergunta idade da pessoa at� usu�rio digitar -1
	do{
		
		//6� Passo: Perguntar idade do entrevistado x
		contador++;
		printf("\nDigite a idade do %d� entrevistado: (Digite -1 caso deseje finalizar a pesquisa)\n", contador);
		scanf("%d", &idade);
			
			
			//7� Passo: Se a idade do entrevistado for maior que a maior idade anterior, essa passa ser a maior idade.
			if(idade > maiorIdade){
				maiorIdade = idade;
				printf("\nMaior idade: %d", idade);
			}
			
			//8� Passo: Se idade do entrevistado estiver entre 18 e 35, programa pergunta se esse pessoa � mulher, tem cabelo loiro e olho verde
			if(idade >= 18 && idade <= 35){
				printf("\nEsse entrevistado possu� todas as seguintes caracter�stica? (Mulher de olhos verdes e cabelo loiro)");
				printf("\n1- Sim");
				printf("\n2- N�o\n");
				scanf("%d", &opcaoPessoa);
				//9� Passo: Se entrevistado tiver essas caracter�sticas � somado +1 na quantidade de pessoas com essa caracter�stica
				if(opcaoPessoa == 1){
					mulherLoiraVerde++;
				}
			}
		//10� Passo: Cada entrevista aumenta em 1 a quantidade de pessoas total
		pessoasTotal++;	
			
	//11� Passo: Fim do la�o
	}while(idade != -1);
	
	//12� Passo: Pausa algoritimo e limpa tela
	system("pause");
	system("cls");
	
	//13� Passo: Definir f�rmula para porcentagem de pessoas com a caracteristica: mulher, entre 18 e 35 anos, loira, olhos verdes
	porcentagemLoiras=mulherLoiraVerde/(pessoasTotal-1)*100;
	
	//14� Passo: Mostrar na tela resultados
	printf("Maior Idade entre os entrevistados: %d ", maiorIdade);
	printf("\n\nPorcentagem dos entrevistados que s�o mulheres entre 18 e 35 anos, loiras e de olhos verdes: %.1f Porcento", porcentagemLoiras);
	printf("\n\nObrigado por utilizar esse programa!");
	
	//15� Passo: Retorno da fun��o
	return 0;

//16� Passo: Fim da fun��o principal
}

