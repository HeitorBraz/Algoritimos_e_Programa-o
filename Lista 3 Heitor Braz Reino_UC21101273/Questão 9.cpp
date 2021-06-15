/*Algoritimo que mostra porcentagem dos entrevistados 
que a idade está entre 18 e 35 anos e que tenham olhos verdes e cabelos loiros*/

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int idade;
	int maiorIdade=0, contador=0, opcaoPessoa;
	float porcentagemLoiras;
	float mulherLoiraVerde=0, pessoasTotal=0;
	
	//5º Passo: Do While que pergunta idade da pessoa até usuário digitar -1
	do{
		
		//6º Passo: Perguntar idade do entrevistado x
		contador++;
		printf("\nDigite a idade do %dº entrevistado: (Digite -1 caso deseje finalizar a pesquisa)\n", contador);
		scanf("%d", &idade);
			
			
			//7º Passo: Se a idade do entrevistado for maior que a maior idade anterior, essa passa ser a maior idade.
			if(idade > maiorIdade){
				maiorIdade = idade;
				printf("\nMaior idade: %d", idade);
			}
			
			//8º Passo: Se idade do entrevistado estiver entre 18 e 35, programa pergunta se esse pessoa é mulher, tem cabelo loiro e olho verde
			if(idade >= 18 && idade <= 35){
				printf("\nEsse entrevistado possuí todas as seguintes característica? (Mulher de olhos verdes e cabelo loiro)");
				printf("\n1- Sim");
				printf("\n2- Não\n");
				scanf("%d", &opcaoPessoa);
				//9º Passo: Se entrevistado tiver essas características é somado +1 na quantidade de pessoas com essa característica
				if(opcaoPessoa == 1){
					mulherLoiraVerde++;
				}
			}
		//10º Passo: Cada entrevista aumenta em 1 a quantidade de pessoas total
		pessoasTotal++;	
			
	//11º Passo: Fim do laço
	}while(idade != -1);
	
	//12º Passo: Pausa algoritimo e limpa tela
	system("pause");
	system("cls");
	
	//13º Passo: Definir fórmula para porcentagem de pessoas com a caracteristica: mulher, entre 18 e 35 anos, loira, olhos verdes
	porcentagemLoiras=mulherLoiraVerde/(pessoasTotal-1)*100;
	
	//14º Passo: Mostrar na tela resultados
	printf("Maior Idade entre os entrevistados: %d ", maiorIdade);
	printf("\n\nPorcentagem dos entrevistados que são mulheres entre 18 e 35 anos, loiras e de olhos verdes: %.1f Porcento", porcentagemLoiras);
	printf("\n\nObrigado por utilizar esse programa!");
	
	//15º Passo: Retorno da função
	return 0;

//16º Passo: Fim da função principal
}

