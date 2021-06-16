//Algoritimo para pesquisa de mortalidade infantil

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int criancasTotal=0, contador=1, criancasMortas=0, meninosMortos=0, prematuros=0, mesesVida;
	char sexoCrianca;
	int porcentagemMortos, porcentagemMeninosMortos, porcentagemPrematuros;
	
	//5� Passo: Perguntar a quantidade da amostra de beb�s que ir�o participar da pesquisa

		
		//5.1 Passo: Validar o valor
		do{
			printf("Digite o n�mero de crian�as que ir�o ser analisados pela pesquisa: ");
			scanf("%d", &criancasTotal);
			if(criancasTotal<=0){
				printf("\nDigite um valor v�lido!\n\n ");		
			}
		}while(criancasTotal<=0);
		
		printf("\n\nAgora iremos fazer perguntas acerca das crian�as que morreram.");
		
		//6� Passo: Repeti��o para contagem de crian�as mortas
		do{
			
			//7� Passo: Perguntar e validar sexo da crian�a morta X
			printf("\n\nDigite o sexo da %d� crian�a. [F/M] (Digite V caso n�o tenham mais crian�as mortas na amostra): ", contador);
			
			do{
				scanf("%c", &sexoCrianca);
			}while(sexoCrianca != 'f' && sexoCrianca != 'F' && sexoCrianca != 'm' && sexoCrianca != 'M' && sexoCrianca != 'v' && sexoCrianca != 'V');
			
			system("cls");
			
			//8� Passo: Perguntar quantos meses de vida tem a crian�a morta X
			do{
				printf("\n\nDigite quantos meses de vida tem a %d� crian�a (Digite qualquer valor caso tenha selecionado v): ", contador);
				scanf("%d", &mesesVida);
				if(mesesVida<=0){
					printf("\nDigite um valor v�lido!");
				}
			}while(mesesVida<=0);
			
			system("cls");
			
			//9� Passo: Se crian�a for menino somar +1 na contagem de meninos mortos
			if(sexoCrianca=='m'||sexoCrianca=='M'){
				meninosMortos++;
			}
			
			//10� Passo: Se crian�a morreu com - de 24 meses +1 na contagem de prematuros
			if(mesesVida<=24){
				prematuros++;
			}
			
			//11� Passo: somar 1 na contagem de criancasMortas e no contador
			criancasMortas++;
			contador++;
		
		}while(sexoCrianca != 'v' && sexoCrianca != 'V');
		
	system("cls");
		
	//12� Passo: Definir f�rmula para c�lculo das porcentagens		
	criancasMortas = criancasMortas-1;
	prematuros = prematuros-1;
	porcentagemMortos = criancasMortas*100 / criancasTotal;
	porcentagemMeninosMortos =  meninosMortos*100/ criancasTotal;
	porcentagemPrematuros =  prematuros*100 / criancasTotal;
		
	//13� Passo: Mostrar resultado na tela
	printf("Resultados da Pesquisa:\n\n");
	printf("Total de Crian�as: %d\n", criancasTotal);
	printf("Total de Crian�as Mortas: %d\n", criancasMortas);
	printf("Taxa de Mortalidade Infantil: %d %%\n", porcentagemMortos);
	printf("Taxa de Meninos Mortos: %d %%\n", porcentagemMeninosMortos);
	printf("Crian�as que morreram com menos de 24 meses de vida: %d %%", porcentagemPrematuros);
		
	//14� Passo: Retorno da fun��o principal
 	return 0;

//15� Passo: Fim do algoritimo 	
}
