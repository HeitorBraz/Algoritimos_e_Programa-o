//Algoritimo para pesquisa de mortalidade infantil

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int criancasTotal=0, contador=1, criancasMortas=0, meninosMortos=0, prematuros=0, mesesVida;
	char sexoCrianca;
	int porcentagemMortos, porcentagemMeninosMortos, porcentagemPrematuros;
	
	//5º Passo: Perguntar a quantidade da amostra de bebês que irão participar da pesquisa

		
		//5.1 Passo: Validar o valor
		do{
			printf("Digite o número de crianças que irão ser analisados pela pesquisa: ");
			scanf("%d", &criancasTotal);
			if(criancasTotal<=0){
				printf("\nDigite um valor válido!\n\n ");		
			}
		}while(criancasTotal<=0);
		
		printf("\n\nAgora iremos fazer perguntas acerca das crianças que morreram.");
		
		//6º Passo: Repetição para contagem de crianças mortas
		do{
			
			//7º Passo: Perguntar e validar sexo da criança morta X
			printf("\n\nDigite o sexo da %dª criança. [F/M] (Digite V caso não tenham mais crianças mortas na amostra): ", contador);
			
			do{
				scanf("%c", &sexoCrianca);
			}while(sexoCrianca != 'f' && sexoCrianca != 'F' && sexoCrianca != 'm' && sexoCrianca != 'M' && sexoCrianca != 'v' && sexoCrianca != 'V');
			
			system("cls");
			
			//8º Passo: Perguntar quantos meses de vida tem a criança morta X
			do{
				printf("\n\nDigite quantos meses de vida tem a %dª criança (Digite qualquer valor caso tenha selecionado v): ", contador);
				scanf("%d", &mesesVida);
				if(mesesVida<=0){
					printf("\nDigite um valor válido!");
				}
			}while(mesesVida<=0);
			
			system("cls");
			
			//9º Passo: Se criança for menino somar +1 na contagem de meninos mortos
			if(sexoCrianca=='m'||sexoCrianca=='M'){
				meninosMortos++;
			}
			
			//10º Passo: Se criança morreu com - de 24 meses +1 na contagem de prematuros
			if(mesesVida<=24){
				prematuros++;
			}
			
			//11º Passo: somar 1 na contagem de criancasMortas e no contador
			criancasMortas++;
			contador++;
		
		}while(sexoCrianca != 'v' && sexoCrianca != 'V');
		
	system("cls");
		
	//12º Passo: Definir fórmula para cálculo das porcentagens		
	criancasMortas = criancasMortas-1;
	prematuros = prematuros-1;
	porcentagemMortos = criancasMortas*100 / criancasTotal;
	porcentagemMeninosMortos =  meninosMortos*100/ criancasTotal;
	porcentagemPrematuros =  prematuros*100 / criancasTotal;
		
	//13º Passo: Mostrar resultado na tela
	printf("Resultados da Pesquisa:\n\n");
	printf("Total de Crianças: %d\n", criancasTotal);
	printf("Total de Crianças Mortas: %d\n", criancasMortas);
	printf("Taxa de Mortalidade Infantil: %d %%\n", porcentagemMortos);
	printf("Taxa de Meninos Mortos: %d %%\n", porcentagemMeninosMortos);
	printf("Crianças que morreram com menos de 24 meses de vida: %d %%", porcentagemPrematuros);
		
	//14º Passo: Retorno da função principal
 	return 0;

//15º Passo: Fim do algoritimo 	
}
