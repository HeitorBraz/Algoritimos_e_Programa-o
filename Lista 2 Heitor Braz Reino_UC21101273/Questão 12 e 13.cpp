//Algoritimo que mostra a qual cidade pertence determinado DDD + Chinesinho

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int opcaoMenu;
	
	//5� Passo: Pedir DDD para o usu�rio
	printf("Bem-Vindo(a)! Informe o DDD e informaremos a qual cidade ele pertence. (Apenas algumas localidades est�o dispon�veis)");
	scanf("%d", &opcaoMenu); //Foi inserido o valor 50
	fflush(stdin);
	
	//
	switch(opcaoMenu){
		case 61: //50 n�o faz parte desse caso, segue para o pr�ximo
			printf("O DDD pertence a Bras�lia");
			break;
		case 71: //50 n�o faz parte desse caso, segue para o pr�ximo
			printf("O DDD pertence a Salvador");
			break;
		case 11: //50 n�o faz parte desse caso, segue para o pr�ximo
			printf("O DDD pertence a S�o Paulo");
			break;
		case 21: //50 n�o faz parte desse caso, segue para o pr�ximo
			printf("O DDD pertence a Rio de Janeiro");
			break;
		case 32: //50 n�o faz parte desse caso, segue para o pr�ximo
			printf("O DDD pertence a Juiz de Fora");
			break;
		case 19: //50 n�o faz parte desse caso, segue para o pr�ximo
			printf("O DDD pertence a Campinas");
			break;
		case 27: //50 n�o faz parte desse caso, segue para o pr�ximo
			printf("O DDD pertence a Vit�ria");
			break;
		case 31: //50 n�o faz parte desse caso, segue para o pr�ximo
			printf("O DDD pertence a Belo Horizonte");
			break;
		default: //50 faz parte desse caso, segue para o pr�ximo
			printf("Cidade sem identifica��o!"); //Ser� exibida essa mensagem na tela
	}
	return 0;
			
	
}
