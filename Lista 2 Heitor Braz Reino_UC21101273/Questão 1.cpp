//Algoritimo que pede a placa do veículo de um motorista e multa ele se ele estiver trafegando acima do limite no Eixo Rodoviário.

//1º Passo: Inserir Bibliotecas necessárias:
#include<stdio.h> 
#include<locale.h>

//2º Passo: Iniciar Algoritimo
int main(){
	
	//3º Passo: Definir biblioteca locale.h:
	setlocale(LC_ALL, "Portuguese");
	
	//4º Passo: Definir Variáveis
	char placaVeiculo[7];
	float velocidadeVeiculo;
	
	//5º Passo: Pedir a Placa e a Velocidade do Veículo
	printf("Bem-Vindo(a). Esse programa irá te ajudar na consuta de multas \n");
	printf("Insira a Placa de seu veículo: \n");
	scanf("%s", &placaVeiculo);
	printf("Insira a velocidade que você estava dirigindo no Eixo Rodiviário: ");
	scanf("%f", &velocidadeVeiculo);

	//6º Passo: Se Velocidade > 80, Multar	
	if(velocidadeVeiculo > 80){
		printf("Você estava acima do limite de velocidade! Isso implicará em uma multa!");
 }
	//7º Passo: Retorno da Função
	return 0;
	
	//8º Passo: Finalizar Algoritimo
}
