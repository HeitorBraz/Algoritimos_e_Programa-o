//Algoritimo que pede a placa do ve�culo de um motorista e multa ele se ele estiver trafegando acima do limite no Eixo Rodovi�rio.

//1� Passo: Inserir Bibliotecas necess�rias:
#include<stdio.h> 
#include<locale.h>

//2� Passo: Iniciar Algoritimo
int main(){
	
	//3� Passo: Definir biblioteca locale.h:
	setlocale(LC_ALL, "Portuguese");
	
	//4� Passo: Definir Vari�veis
	char placaVeiculo;
	float velocidadeVeiculo;
	
	//5� Passo: Pedir a Placa e a Velocidade do Ve�culo
	printf("Bem-Vindo(a). Esse programa ir� te ajudar na consuta de multas \n");
	printf("Insira a Placa de seu ve�culo: \n");
	scanf("%s", &placaVeiculo);
	printf("Insira a velocidade que voc� estava dirigindo no Eixo Rodivi�rio: ");
	scanf("%f", &velocidadeVeiculo);

	//5� Passo: Se Velocidade < 0, Programa n�o Funciona
	if(velocidadeVeiculo < 0){
		printf("Por-Favor, insira um valor positivo!");
	}

	//6� Passo: Se Velocidade > 80, Multar	
	else if(velocidadeVeiculo > 80){
		printf("Voc� estava acima do limite de velocidade! Isso implicar� em uma multa!");
 }
	
	//7� Passo: Se Velocidade <= 80, N�o Multar
	else {
	printf("Voc� estava dentro do limite de velocidade da via");
}
	
	//8� Passo: Retorno da Fun��o
	return 0;
	
	//9� Passo: Finalizar Algoritimo
}
