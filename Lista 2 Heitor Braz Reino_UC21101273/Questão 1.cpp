//Algoritimo que pede a placa do ve�culo de um motorista e multa ele se ele estiver trafegando acima do limite no Eixo Rodovi�rio.

//1� Passo: Inserir Bibliotecas necess�rias:
#include<stdio.h> 
#include<locale.h>

//2� Passo: Iniciar Algoritimo
int main(){
	
	//3� Passo: Definir biblioteca locale.h:
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir Vari�veis
	char placaVeiculo[7];
	float velocidadeVeiculo;
	
	//5� Passo: Pedir a Placa e a Velocidade do Ve�culo
	printf("Bem-Vindo(a). Esse programa ir� te ajudar na consuta de multas \n");
	printf("Insira a Placa de seu ve�culo: \n");
	scanf("%s", &placaVeiculo);
	printf("Insira a velocidade que voc� estava dirigindo no Eixo Rodivi�rio: ");
	scanf("%f", &velocidadeVeiculo);

	//6� Passo: Se Velocidade > 80, Multar	
	if(velocidadeVeiculo > 80){
		printf("Voc� estava acima do limite de velocidade! Isso implicar� em uma multa!");
 }
	//7� Passo: Retorno da Fun��o
	return 0;
	
	//8� Passo: Finalizar Algoritimo
}
