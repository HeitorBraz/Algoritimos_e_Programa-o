//Algoritimo para c�lculo de valor a ser pago a sua provedora de acesso � internet.
//
#include<stdio.h>
#include<locale.h>

//
int main(){
	
	//
	setlocale(LC_ALL,"Portuguese");
	
	//
	int horasUtilizadas, valorDaInternet;
	
	//
	printf("Digite o valor inteiro de horas que voc� utilizou a internet: ");
	scanf("%d", &horasUtilizadas);
	
	//
	if(horasUtilizadas <= 20){
		printf("O valor a ser pago para provedora de internet � de 30 reais.");
	}
	
	//
	else{
		valorDaInternet = 30 + (horasUtilizadas - 20)* 3;
		printf("O valor a ser pago para provedora de internet � de %d reais.", valorDaInternet);
	}
	
	//
	return 0;
	
	//
}
