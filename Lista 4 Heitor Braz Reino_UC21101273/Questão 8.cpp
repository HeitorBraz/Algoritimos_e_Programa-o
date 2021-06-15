//Algoritimo que mostra quanto tempo demora para Felisberto ficar mais alto que Anacleto

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int ano=0;
	float alturaAnacleto=1.50, alturaFelisberto=1.10;
	
	//5� Passo: Criar do While que a cada repeti��o soma 3cm e 2cm na altura de Felisberto e Anacleto respectivamente
	do{
		printf("\nAno %d",ano);
		printf("\n\nAnacleto: %.2f",alturaAnacleto);
		printf("\nFelisberto: %.2f\n\n", alturaFelisberto);
		alturaAnacleto = alturaAnacleto + 0.02;
		alturaFelisberto = alturaFelisberto + 0.03;
		ano++;
		system("pause");
	
	}while(alturaAnacleto > alturaFelisberto);
	
	//6� Passo: Mostrar na tela quantos anos leva para Felisberto ficar mais alto que Anacleto
	printf("S�o necess�rios %d para Felisberto ficar mais alto que Anacleto", ano);
	
	return 0;

}
