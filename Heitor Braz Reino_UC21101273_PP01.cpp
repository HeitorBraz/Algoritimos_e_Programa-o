//Nome Completo: Heitor Braz Reino
//Matrícula: UC21101273
//Curso: Engenharia de Software

//Importandi as blibliotecas
#include <stdio.h> //Permite o uso das funções printf e scanf
#include <locale.h> //Permite formatar textos em utf-8
#include <string.h> //Permite o uso de funções para trabalhar com strings
#include <stdlib.h> //Permite o uso da  função de limpar a tela
#include <ctype.h> //Permite o uso da função toupper

//Inicío da função principal
int main(){
	setlocale(LC_ALL, "Portuguese"); //Usado pra definir a linguagem principal do programa
	
	/*
		Aqui foi usada o função "struct", cujo o objetive era criar uma forma de registra os clientes
		Onde o struct Cliente possui três variáveis:
		- nome, do tipo char[], que representa o nome do cliente;
		- idade, do tipo int, que representa a idade do cliente;
		- sexo, do tipo char, que representa o sexo do cliente.
	*/
		struct Cliente {
		char nome[30]; //nova funcionalidade: nome do Cliente
		int idade;
		char sexo;
	};
	
	int sessoesRealizadas = 0, clientesAssistiramFilme = 0, clientesMasculino = 0, clientesFeminino = 0, maioresIdadeMasculino = 0, maioresIdadeFeminino = 0; //váriaveis auxíliares
	int criancas = 0, adolescentes = 0, adultos = 0, idosos = 0; //variáveis das classificações
	char nomeFilme[40]; //variável representativa do nome do filme
	
		/*
		o "do" e o "while" são estruturas de repetição, que será executada pelo menos uma vez e será finalizado quando "sessoesRealizadas" for != a 2
		o printf irá mostrar o compando para o usuário que está manuseando o programa;
		o scanf irá armazenar o que o usuário digitou na respectiva variável;
		o fflush(stdin) irá retirar o lixo da memória.
	*/
	do {
		printf("Quantas sessões serão realizadas? ");
		scanf("%d", &sessoesRealizadas); //tipo int
		fflush(stdin);
	} while(sessoesRealizadas != 2);
	
	/*
		o "do" e o "while" são estruturas de repetição, que será executada pelo menos uma vez e será finalizado quando "nomeFilme" não for nulo
		o printf irá mostrar o comando para o usuário que está manuseando o programa;
		o fgets irá armazenar o que o usuário digitou na respectiva variável;
		o fflush(stdin) irá retirar o lixo da memória.
	*/
	do {
		printf("Qual o nome do filme? ");
		fgets(nomeFilme, 30, stdin);
		fflush(stdin);
		nomeFilme[strlen(nomeFilme) - 1] = '\0'; //remover o \n de uma possível "entrada nula", e assim, respeitando a lógica do while
	} while(strlen(nomeFilme) == 0);
	
	/*
		o "do" e o "while" são estruturas de repetição, que será executada pelo menos uma vez e será finalizada quando "clientesAssistiramFilme" for <=10
		o printf irá mostrar o comando para o usuário que está manuseando o programa;
		o scanf irá armazenar o que o usuário digitou na respectiva variável;
		o fflush(stdin) irá retirar o lixo da memória.
	*/
	do {
		printf("Quantos clientes assistiram ao filme? ");
		scanf("%d", &clientesAssistiramFilme);
		fflush(stdin);
	} while(clientesAssistiramFilme < 10);
	
	//criando a variável que ira representa cada clientes que está vinculado ao ecossistema, onde Cliente é um struct
	struct Cliente clientes[clientesAssistiramFilme];
	
	//função for que se repetirá o numeros de vez iformado pelo usuário em "clientesAssistiramFilme"
	for(int i = 0; i < clientesAssistiramFilme; i++) {
		system("cls");//função usa pra limpar a tela do usuario, para maior fluidez no uso do programa
		
		/*
			o "do" e o "while" são estruturas de repetição, que será executada pelo menos uma vez e será finalizada quando "clientes[i].nome" não for nulo
			o printf irá mostrar o comando para o usuário que está manuseando o programa;
			o fgets irá armazenar o que o usuário digitou na respectiva variável;
			o fflush(stdin) irá retirar o lixo da memória.
			*IMPORTANTE*: Essa é a nova função pedida pela professora!
		*/
		do {
			printf("Qual o nome do %dº cliente? ", i + 1); // "i + 1" foi usado pq a contagem do "for" começa no zero, portanto, para melhor a visualização, isso é necessário
			fgets(clientes[i].nome, 30, stdin);
			fflush(stdin);
			clientes[i].nome[strlen(clientes[i].nome) - 1] = '\0'; //remover o \n de uma possível "entrada nula", e assim, respeitando a lógica do while
		} while(strlen(clientes[i].nome) == 0);
		
		/*
			o "do" e o "while" são estruturas de repetição, que será executada pelo menos uma vez e será finalizada quando "clientes[i].sexo" for "M" ou "F"
			o printf irá mostrar o comando para o usuário que está manuseando o programa;
			o fgets irá armazenar o que o usuário digitou na respectiva variável;
			o fflush(stdin) irá retirar o lixo da memória.
		*/
		do {	
			printf("Qual o sexo de %s? M = Masculino; F = Feminino: ", clientes[i].nome);
			scanf("%c", &clientes[i].sexo);
			clientes[i].sexo = toupper(clientes[i].sexo); //"toupper" usa para torna o que o usuário digitou maiúsculo (lib ctype.h)
			fflush(stdin);
		} while((clientes[i].sexo != 'M') && (clientes[i].sexo != 'F'));
		
		// Função "if" responsvel pela lógica que acrecenta um Cliente na respectiva variável, sempre relacionada ao seu sexo.
			if(clientes[i].sexo == 'M')
			clientesMasculino++;
		else
			clientesFeminino++;
			
		/*
			o "do" e o "while" são estruturas de repetição, que será executada pelo menos uma vez e será finalizada quando "clientes[i].idade" >= 3 && <= 100
			o printf irá mostrar o comando para o usuário que está manuseando o programa;
			o scanf irá armazenar o que o usuário digitou na respectiva variável;
			o fflush(stdin) irá retirar o lixo da memória.
		*/	
		do {
			printf("Qual a idade de %s? ", clientes[i].nome);
			scanf("%d", &clientes[i].idade);
			fflush(stdin);
		} while((clientes[i].idade < 3) || (clientes[i].idade > 100));
		
		/*
			Função "if" responsave lógica que irá dizer onde a Cliente se encaixa de acordo com a classificação fornecida pelo usuário.
			as variáveis são acrecentadas de acordo com a classificação
		*/
		if((clientes[i].idade >= 3) && (clientes[i].idade <= 13)) // de 3 até 13 anos - Crianças
			criancas++;
		else if((clientes[i].idade >= 14) && (clientes[i].idade <= 17)) // de 14 até 17 anos - Adolescentes
			adolescentes++;
		else if((clientes[i].idade >= 18) && (clientes[i].idade <= 64)) // de 18 até 64 anos - Adultos
			adultos++;
		else // de 65 até 100 anos - Idosos
			idosos++;
	}
	system("cls"); //função usa pra limpar a tela do usuario, para maior fluidez no uso do programa
	
		/*
		A partir daqui será exibido um relatório com todas a informação fonecidas por maio das perguntas para o usuário.
		Onde será infomado:
			- o nome do filme, a quantidade de clientes do sexo feminino e a quantidade de clientes do sexo masculino que assistiram ao filme
			- a quantidade de clientes, seguindo a classificação da tabela
		*/
		printf("========================\n\n");
		printf("O filme assistido foi: %s, com %d espectadores.\n", nomeFilme, clientesAssistiramFilme);
		printf("%d homens e %d mulheres assistiram ao filme.\n\n", clientesMasculino, clientesFeminino);
		printf("%d Crianças (3 à 13 anos)\n", criancas);
		printf("%d Adolescentes (14 à 17 anos)\n", adolescentes);
		printf("%d Adultos (18 à 64 anos)\n", adultos);
		printf("%d Idosos (65 à 100 anos)\n\n", idosos);
		
		//função "for" usada pra separar as idades dos clientes entre maior e menor de idade
		for(int i = 0; i < clientesAssistiramFilme; i++) {
			if(clientes[i].idade >= 18){ // checando se é maior de idade (adulto)
				switch(clientes[i].sexo){ //função "switch" responsavel pela lógica que separa os clientes de acordo com o sexo
					case 'M':
						maioresIdadeMasculino++; //acrecenta
						break; // quebra ao "switch"
					case 'F':
						maioresIdadeFeminino++; //acrecenta
						break; // quebra ao "switch"
					default: // valor desconhecido
						printf("*SEXO NÃO INFORMADO*"); //exibe na tela do usuário
			}
		}
	}
	// Parte final do relatório que exibe o número de clientes separados que acordo com o sexo e apenas os maiores de idade, função do printf: exibir na tela do usuário
	printf("%d Homens maiores de idade assistiram ao filme %s.\n", maioresIdadeMasculino, nomeFilme);
	printf("%d Mulheres maiores de idade assistiram ao filme %s.", maioresIdadeFeminino, nomeFilme);
	printf("\n\n========================");	
	
	return 0;//Retorno da função "main"
}
