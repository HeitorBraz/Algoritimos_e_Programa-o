//Algoritimo que pede a placa do veículo de um motorista e multa ele se ele estiver trafegando acima do limite no Eixo Rodoviário.

//1º Passo: Inserir Bibliotecas necessárias:
#include<stdio.h> 
#include<locale.h>

//2º Passo: Iniciar Algoritimo
int main(){
	
	//3º Passo: Definir biblioteca locale.h:
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir Variáveis
	char placaVeiculo;
	float velocidadeVeiculo;
	
	//5º Passo: Pedir a Placa e a Velocidade do Veículo
	printf("Bem-Vindo(a). Esse programa irá te ajudar na consuta de multas \n");
	printf("Insira a Placa de seu veículo: \n");
	scanf("%s", &placaVeiculo);
	printf("Insira a velocidade que você estava dirigindo no Eixo Rodiviário: ");
	scanf("%f", &velocidadeVeiculo);

	//5º Passo: Se Velocidade < 0, Programa não Funciona
	if(velocidadeVeiculo < 0){
		printf("Por-Favor, insira um valor positivo!");
	}

	//6º Passo: Se Velocidade > 80, Multar	
	else if(velocidadeVeiculo > 80){
		printf("Você estava acima do limite de velocidade! Isso implicará em uma multa!");
 }
	
	//7º Passo: Se Velocidade <= 80, Não Multar
	else {
	printf("Você estava dentro do limite de velocidade da via");
}
	
	//8º Passo: Retorno da Função
	return 0;
	
	//9º Passo: Finalizar Algoritimo
}
