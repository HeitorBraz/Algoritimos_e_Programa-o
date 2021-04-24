//Nome Completo: Heitor Braz Reino
//Matr�cula: UC21101273
//Curso: Engenharia de Software

//Importandi as blibliotecas
#include <stdio.h> //Permite o uso das fun��es printf e scanf
#include <locale.h> //Permite formatar textos em utf-8
#include <string.h> //Permite o uso de fun��es para trabalhar com strings
#include <stdlib.h> //Permite o uso da  fun��o de limpar a tela
#include <ctype.h> //Permite o uso da fun��o toupper

//Inic�o da fun��o principal
int main(){
	setlocale(LC_ALL, "Portuguese"); //Usado pra definir a linguagem principal do programa
	
	/*
		Aqui foi usada o fun��o "struct", cujo o objetive era criar uma forma de registra os clientes
		Onde o struct Cliente possui tr�s vari�veis:
		- nome, do tipo char[], que representa o nome do cliente;
		- idade, do tipo int, que representa a idade do cliente;
		- sexo, do tipo char, que representa o sexo do cliente.
	*/
		struct Cliente {
		char nome[30]; //nova funcionalidade: nome do Cliente
		int idade;
		char sexo;
	};
	
	int sessoesRealizadas = 0, clientesAssistiramFilme = 0, clientesMasculino = 0, clientesFeminino = 0, maioresIdadeMasculino = 0, maioresIdadeFeminino = 0; //v�riaveis aux�liares
	int criancas = 0, adolescentes = 0, adultos = 0, idosos = 0; //vari�veis das classifica��es
	char nomeFilme[40]; //vari�vel representativa do nome do filme
	
		/*
		o "do" e o "while" s�o estruturas de repeti��o, que ser� executada pelo menos uma vez e ser� finalizado quando "sessoesRealizadas" for != a 2
		o printf ir� mostrar o compando para o usu�rio que est� manuseando o programa;
		o scanf ir� armazenar o que o usu�rio digitou na respectiva vari�vel;
		o fflush(stdin) ir� retirar o lixo da mem�ria.
	*/
	do {
		printf("Quantas sess�es ser�o realizadas? ");
		scanf("%d", &sessoesRealizadas); //tipo int
		fflush(stdin);
	} while(sessoesRealizadas != 2);
	
	/*
		o "do" e o "while" s�o estruturas de repeti��o, que ser� executada pelo menos uma vez e ser� finalizado quando "nomeFilme" n�o for nulo
		o printf ir� mostrar o comando para o usu�rio que est� manuseando o programa;
		o fgets ir� armazenar o que o usu�rio digitou na respectiva vari�vel;
		o fflush(stdin) ir� retirar o lixo da mem�ria.
	*/
	do {
		printf("Qual o nome do filme? ");
		fgets(nomeFilme, 30, stdin);
		fflush(stdin);
		nomeFilme[strlen(nomeFilme) - 1] = '\0'; //remover o \n de uma poss�vel "entrada nula", e assim, respeitando a l�gica do while
	} while(strlen(nomeFilme) == 0);
	
	/*
		o "do" e o "while" s�o estruturas de repeti��o, que ser� executada pelo menos uma vez e ser� finalizada quando "clientesAssistiramFilme" for <=10
		o printf ir� mostrar o comando para o usu�rio que est� manuseando o programa;
		o scanf ir� armazenar o que o usu�rio digitou na respectiva vari�vel;
		o fflush(stdin) ir� retirar o lixo da mem�ria.
	*/
	do {
		printf("Quantos clientes assistiram ao filme? ");
		scanf("%d", &clientesAssistiramFilme);
		fflush(stdin);
	} while(clientesAssistiramFilme < 10);
	
	//criando a vari�vel que ira representa cada clientes que est� vinculado ao ecossistema, onde Cliente � um struct
	struct Cliente clientes[clientesAssistiramFilme];
	
	//fun��o for que se repetir� o numeros de vez iformado pelo usu�rio em "clientesAssistiramFilme"
	for(int i = 0; i < clientesAssistiramFilme; i++) {
		system("cls");//fun��o usa pra limpar a tela do usuario, para maior fluidez no uso do programa
		
		/*
			o "do" e o "while" s�o estruturas de repeti��o, que ser� executada pelo menos uma vez e ser� finalizada quando "clientes[i].nome" n�o for nulo
			o printf ir� mostrar o comando para o usu�rio que est� manuseando o programa;
			o fgets ir� armazenar o que o usu�rio digitou na respectiva vari�vel;
			o fflush(stdin) ir� retirar o lixo da mem�ria.
			*IMPORTANTE*: Essa � a nova fun��o pedida pela professora!
		*/
		do {
			printf("Qual o nome do %d� cliente? ", i + 1); // "i + 1" foi usado pq a contagem do "for" come�a no zero, portanto, para melhor a visualiza��o, isso � necess�rio
			fgets(clientes[i].nome, 30, stdin);
			fflush(stdin);
			clientes[i].nome[strlen(clientes[i].nome) - 1] = '\0'; //remover o \n de uma poss�vel "entrada nula", e assim, respeitando a l�gica do while
		} while(strlen(clientes[i].nome) == 0);
		
		/*
			o "do" e o "while" s�o estruturas de repeti��o, que ser� executada pelo menos uma vez e ser� finalizada quando "clientes[i].sexo" for "M" ou "F"
			o printf ir� mostrar o comando para o usu�rio que est� manuseando o programa;
			o fgets ir� armazenar o que o usu�rio digitou na respectiva vari�vel;
			o fflush(stdin) ir� retirar o lixo da mem�ria.
		*/
		do {	
			printf("Qual o sexo de %s? M = Masculino; F = Feminino: ", clientes[i].nome);
			scanf("%c", &clientes[i].sexo);
			clientes[i].sexo = toupper(clientes[i].sexo); //"toupper" usa para torna o que o usu�rio digitou mai�sculo (lib ctype.h)
			fflush(stdin);
		} while((clientes[i].sexo != 'M') && (clientes[i].sexo != 'F'));
		
		// Fun��o "if" responsvel pela l�gica que acrecenta um Cliente na respectiva vari�vel, sempre relacionada ao seu sexo.
			if(clientes[i].sexo == 'M')
			clientesMasculino++;
		else
			clientesFeminino++;
			
		/*
			o "do" e o "while" s�o estruturas de repeti��o, que ser� executada pelo menos uma vez e ser� finalizada quando "clientes[i].idade" >= 3 && <= 100
			o printf ir� mostrar o comando para o usu�rio que est� manuseando o programa;
			o scanf ir� armazenar o que o usu�rio digitou na respectiva vari�vel;
			o fflush(stdin) ir� retirar o lixo da mem�ria.
		*/	
		do {
			printf("Qual a idade de %s? ", clientes[i].nome);
			scanf("%d", &clientes[i].idade);
			fflush(stdin);
		} while((clientes[i].idade < 3) || (clientes[i].idade > 100));
		
		/*
			Fun��o "if" responsave l�gica que ir� dizer onde a Cliente se encaixa de acordo com a classifica��o fornecida pelo usu�rio.
			as vari�veis s�o acrecentadas de acordo com a classifica��o
		*/
		if((clientes[i].idade >= 3) && (clientes[i].idade <= 13)) // de 3 at� 13 anos - Crian�as
			criancas++;
		else if((clientes[i].idade >= 14) && (clientes[i].idade <= 17)) // de 14 at� 17 anos - Adolescentes
			adolescentes++;
		else if((clientes[i].idade >= 18) && (clientes[i].idade <= 64)) // de 18 at� 64 anos - Adultos
			adultos++;
		else // de 65 at� 100 anos - Idosos
			idosos++;
	}
	system("cls"); //fun��o usa pra limpar a tela do usuario, para maior fluidez no uso do programa
	
		/*
		A partir daqui ser� exibido um relat�rio com todas a informa��o fonecidas por maio das perguntas para o usu�rio.
		Onde ser� infomado:
			- o nome do filme, a quantidade de clientes do sexo feminino e a quantidade de clientes do sexo masculino que assistiram ao filme
			- a quantidade de clientes, seguindo a classifica��o da tabela
		*/
		printf("========================\n\n");
		printf("O filme assistido foi: %s, com %d espectadores.\n", nomeFilme, clientesAssistiramFilme);
		printf("%d homens e %d mulheres assistiram ao filme.\n\n", clientesMasculino, clientesFeminino);
		printf("%d Crian�as (3 � 13 anos)\n", criancas);
		printf("%d Adolescentes (14 � 17 anos)\n", adolescentes);
		printf("%d Adultos (18 � 64 anos)\n", adultos);
		printf("%d Idosos (65 � 100 anos)\n\n", idosos);
		
		//fun��o "for" usada pra separar as idades dos clientes entre maior e menor de idade
		for(int i = 0; i < clientesAssistiramFilme; i++) {
			if(clientes[i].idade >= 18){ // checando se � maior de idade (adulto)
				switch(clientes[i].sexo){ //fun��o "switch" responsavel pela l�gica que separa os clientes de acordo com o sexo
					case 'M':
						maioresIdadeMasculino++; //acrecenta
						break; // quebra ao "switch"
					case 'F':
						maioresIdadeFeminino++; //acrecenta
						break; // quebra ao "switch"
					default: // valor desconhecido
						printf("*SEXO N�O INFORMADO*"); //exibe na tela do usu�rio
			}
		}
	}
	// Parte final do relat�rio que exibe o n�mero de clientes separados que acordo com o sexo e apenas os maiores de idade, fun��o do printf: exibir na tela do usu�rio
	printf("%d Homens maiores de idade assistiram ao filme %s.\n", maioresIdadeMasculino, nomeFilme);
	printf("%d Mulheres maiores de idade assistiram ao filme %s.", maioresIdadeFeminino, nomeFilme);
	printf("\n\n========================");	
	
	return 0;//Retorno da fun��o "main"
}
