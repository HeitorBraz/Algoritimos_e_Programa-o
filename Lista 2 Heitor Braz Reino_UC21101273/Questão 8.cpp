//Algoritimo para mostrar  Ilmo. Sr ou Ilma. Sra + nome.
//1º Passo: Inserir bibliotecas.
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar algoritimo.
int main(){	
	
	//3º Passo: Definir locale.h.
	setlocale(LC_ALL,"Portuguese");
	
	//4º Passo: Definir variáveis.
	char nome;
	int sexo;
	float altura, peso;
	
	//5º Passo: Pedir o nome do usuário.
	printf("Olá! Insira o seu nome: ");
	scanf("%s", &nome);
	
	//6º Passo: Pedir o gênero do usuário.
	printf("Bem-Vindo(a)! %s\n", &nome);
	printf("Escreva o número correspondente ao seu gênero. \n");
	printf("1 para Masculino\n");
	printf("2 para Feminino\n");
	printf("Opção: ");
	scanf("%d", &sexo);
	
	//7º Passo: Switch case.
	switch (sexo){
	
	//8º Passo: Se gênero for masculino, escrever: Ilmo. Sr (nome) e pedir altura.
		case (1):
		printf("Ilmo. Sr. %s. Insira sua altura em metros: ", &nome);
		scanf("%f", &altura);
		peso = (72.5 * altura) - 58; //Fórmula do peso ideal para homens.
		printf("O seu peso ideal, baseado em sua altura, é: %.1f", peso); //Mostrar o peso ideal na tela.
		break;
	
	//9º Passo: Se Gênero for Feminino = Escrever Ilma. Sra (nome) e pedir altura.
		case (2):
		printf("Ilma. Sra. %s. Insira sua altura em metros: ", &nome);
		scanf("%f", &altura);
		peso = (62.1 * altura) - 44.7; //Fórmula do peso ideal para mulheres.
		printf("O seu peso ideal, baseado em sua altura, é: %.1f", peso); //Mostrar o peso ideal na tela.
		break;
	
	//10º Passo: Se Escreverem outra Opção, Tente Novamente com outro valor.
		default:
		printf("Por-Favor. Selecione uma opção válida!");
	}
	
	//11º Passo: Retorno da Função
	return 0;
	
	//12º Passo: Finalizar o Algoritimo
}
