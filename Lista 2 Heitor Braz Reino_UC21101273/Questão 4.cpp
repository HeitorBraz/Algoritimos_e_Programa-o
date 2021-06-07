//Algoritimo para mostrar  Ilmo. Sr ou Ilma. Sra + Nome
//1º Passo: Inserir Bibliotecas
#include<stdio.h>
#include<locale.h>

//2º Passo: Iniciar Algoritimo
int main(){	
	
	//3º Passo: Definir locale.h
	setlocale(LC_ALL,"Portuguese");
	
	//4º Passo: Definir Variáveis
	char nome;
	int sexo;
	
	//5º Passo: Pedir o Nome do Usuário
	printf("Olá! Insira o seu nome: ");
	scanf("%s", &nome);
	
	//6º Passo: Pedir o Gênero do Usuário
	printf("Bem-Vindo(a)! %s\n", &nome);
	printf("Selecione a opcção que corresponde ao seu gênero. \n");
	printf("1 para Masculino\n");
	printf("2 para Feminino\n");
	printf("Opção: ");
	scanf("%d", &sexo);
	
	//7º Passo: Switch Case
	switch (sexo){
	
	//8º Passo: Se Gênero for Masculino = Escrever Ilmo. Sr...
		case (1):
		printf("Ilmo. Sr. %s", &nome);
		break;
	
	//9º Passo: Se Gênero for Feminino = Escrever Ilma. Sra...
		case (2):
		printf("Ilma. Sra. %s", &nome);
		break;
	
	//10º Passo: Se Escreverem outra Opção = Tente Novamente com outro valor.
		default:
		printf("Por-Favor. Selecione uma opção válida!");
	}
	
	//11º Passo: Retorno da Função
	return 0;
	
	//12º Passo: Finalizar o Algoritimo
}
