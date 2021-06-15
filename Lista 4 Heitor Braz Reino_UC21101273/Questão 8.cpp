//Algoritimo que mostra quanto tempo demora para Felisberto ficar mais alto que Anacleto

//1º Passo: Incluir bibliotecas necessárias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2º Passo: Iniciar função principal
int main(){
	
	//3º Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4º Passo: Definir variáveis
	int ano=0;
	float alturaAnacleto=1.50, alturaFelisberto=1.10;
	
	//5º Passo: Criar do While que a cada repetição soma 3cm e 2cm na altura de Felisberto e Anacleto respectivamente
	do{
		printf("\nAno %d",ano);
		printf("\n\nAnacleto: %.2f",alturaAnacleto);
		printf("\nFelisberto: %.2f\n\n", alturaFelisberto);
		alturaAnacleto = alturaAnacleto + 0.02;
		alturaFelisberto = alturaFelisberto + 0.03;
		ano++;
		system("pause");
	
	}while(alturaAnacleto > alturaFelisberto);
	
	//6º Passo: Mostrar na tela quantos anos leva para Felisberto ficar mais alto que Anacleto
	printf("São necessários %d para Felisberto ficar mais alto que Anacleto", ano);
	
	return 0;

}
