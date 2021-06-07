//Algoritimo para mostrar  Ilmo. Sr ou Ilma. Sra + nome.
//1� Passo: Inserir bibliotecas.
#include<stdio.h>
#include<locale.h>

//2� Passo: Iniciar algoritimo.
int main(){	
	
	//3� Passo: Definir locale.h.
	setlocale(LC_ALL,"Portuguese");
	
	//4� Passo: Definir vari�veis.
	char nome;
	int sexo;
	float altura, peso;
	
	//5� Passo: Pedir o nome do usu�rio.
	printf("Ol�! Insira o seu nome: ");
	scanf("%s", &nome);
	
	//6� Passo: Pedir o g�nero do usu�rio.
	printf("Bem-Vindo(a)! %s\n", &nome);
	printf("Escreva o n�mero correspondente ao seu g�nero. \n");
	printf("1 para Masculino\n");
	printf("2 para Feminino\n");
	printf("Op��o: ");
	scanf("%d", &sexo);
	
	//7� Passo: Switch case.
	switch (sexo){
	
	//8� Passo: Se g�nero for masculino, escrever: Ilmo. Sr (nome) e pedir altura.
		case (1):
		printf("Ilmo. Sr. %s. Insira sua altura em metros: ", &nome);
		scanf("%f", &altura);
		peso = (72.5 * altura) - 58; //F�rmula do peso ideal para homens.
		printf("O seu peso ideal, baseado em sua altura, �: %.1f", peso); //Mostrar o peso ideal na tela.
		break;
	
	//9� Passo: Se G�nero for Feminino = Escrever Ilma. Sra (nome) e pedir altura.
		case (2):
		printf("Ilma. Sra. %s. Insira sua altura em metros: ", &nome);
		scanf("%f", &altura);
		peso = (62.1 * altura) - 44.7; //F�rmula do peso ideal para mulheres.
		printf("O seu peso ideal, baseado em sua altura, �: %.1f", peso); //Mostrar o peso ideal na tela.
		break;
	
	//10� Passo: Se Escreverem outra Op��o, Tente Novamente com outro valor.
		default:
		printf("Por-Favor. Selecione uma op��o v�lida!");
	}
	
	//11� Passo: Retorno da Fun��o
	return 0;
	
	//12� Passo: Finalizar o Algoritimo
}
