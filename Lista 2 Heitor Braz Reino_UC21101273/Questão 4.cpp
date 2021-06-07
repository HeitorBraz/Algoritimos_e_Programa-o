//Algoritimo para mostrar  Ilmo. Sr ou Ilma. Sra + Nome
//1� Passo: Inserir Bibliotecas
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar Algoritimo
int main(){	
	
	//3� Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	//4� Passo: Definir Vari�veis
	char nome;
	int sexo;
	
	//5� Passo: Pedir o Nome do Usu�rio
	printf("Ol�! Insira o seu nome: ");
	scanf("%s", &nome);
	
	//6� Passo: Pedir o G�nero do Usu�rio
	printf("Bem-Vindo(a)! %s\n", &nome);
	printf("Selecione a opc��o que corresponde ao seu g�nero. \n");
	printf("1 para Masculino\n");
	printf("2 para Feminino\n");
	printf("Op��o: ");
	scanf("%d", &sexo);
	
	//7� Passo: Switch Case
	switch (sexo){
	
	//8� Passo: Se G�nero for Masculino = Escrever Ilmo. Sr...
		case (1):
		printf("Ilmo. Sr. %s", &nome);
		break;
	
	//9� Passo: Se G�nero for Feminino = Escrever Ilma. Sra...
		case (2):
		printf("Ilma. Sra. %s", &nome);
		break;
	
	//10� Passo: Se Escreverem outra Op��o = Tente Novamente com outro valor.
		default:
		printf("Por-Favor. Selecione uma op��o v�lida!");
	}
	
	//11� Passo: Retorno da Fun��o
	return 0;
	
	//12� Passo: Finalizar o Algoritimo
}
