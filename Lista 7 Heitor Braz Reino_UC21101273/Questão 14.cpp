//Algorito que l� notas dos alunos e mostra a frequ�ncia de cada nota

//1� Passo: Incluir bibliotecas necess�rias.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//2� Passo: Iniciar fun��o principal
int main(){
	
	//3� Passo: Definir setlocale
	setlocale(LC_ALL,"Portuguese"); 
	
	//4� Passo: Definir vari�veis
	int numeroMaximo, notaAluno[80], contador, nota1=0, nota2=0, nota3=0, nota4=0, nota5=0, nota6=0, nota7=0, nota8=0, nota9=0, nota10=0;
	
	printf("Esse programa mostrar� a frequ�ncia das notas de determinada sala\n\n");
	
	//5� Passo: Perguntar para o usu�rio quantas notas o programa vai ler
	printf("Digite quantas notas voc� deseja que o programa leia? (Entre 1 e 80)\n");
	
	//Validar n�mero de letras entre 1 e 80
	do{
		
		scanf("%d", &numeroMaximo);
			
		if(numeroMaximo > 80 || numeroMaximo < 1){
				
			printf("\nDigite somente n�meros entre 1 e 80: ");
		
		}
		
	}while(numeroMaximo > 80 || numeroMaximo < 1);
	
	//
	for(contador = 1; contador <= numeroMaximo; contador++){
		
		printf("Digite a nota do %d� aluno: ", contador);
		scanf("%d", &notaAluno[contador]);
		
		if(notaAluno[contador] == 1){
			nota1++;
		}	
		
		if(notaAluno[contador] == 2){
			nota2++;
		}
		
		if(notaAluno[contador] == 3){
			nota3++;
		}	
		
		if(notaAluno[contador] == 4){
			nota4++;
		}
		
		if(notaAluno[contador] == 5){
			nota5++;
	    }
	    
		if(notaAluno[contador] == 6){
			nota6++;
		}
		
		if(notaAluno[contador] == 7){
			nota7++;
		}
		
		if(notaAluno[contador] == 8){
			nota8++;
		}
		
		if(notaAluno[contador] == 9){
			nota9++;
		}
		
		if(notaAluno[contador] == 10){
			nota10++;											
		}
	
	}
	system("cls");
	
	//
	printf(" Frequ�ncia das Notas \n");
	printf("======================\n");
	printf("  Nota   | Frequ�ncia \n");
	printf("   1     |     %d     \n",nota1);
	printf("   2     |     %d     \n",nota2);
	printf("   3     |     %d     \n",nota3);
	printf("   4     |     %d     \n",nota4);
	printf("   5     |     %d     \n",nota5);
	printf("   6     |     %d     \n",nota6);
	printf("   7     |     %d     \n",nota7);
	printf("   8     |     %d     \n",nota8);
	printf("   9     |     %d     \n",nota9);
	printf("  10     |     %d     \n",nota10);
	printf("\n\nObrigado por usar esse programa!");
	
	return 0;
	
}
