//Entrada: a, b, c
//Sa�da: x1, x2
//Processamento: calculo
#include<stdio.h>//Biblioteca pra comandos de entraada e sa�da
#include<math.h>//Biblioteca matem�tica
#include<locale.h>//Biblioteca para acentua��o
int main(){//inicio do algoritmo

	//Declara��o de variaveis

	double a, b, c, delta, x1, x2;//variaveis declaradas 
	
	//Solicita��o de valores 
	
	printf("Digite o valor de a: ");//Solicitar o valor para o usuario
	scanf("%lf", &a);//codico de formata��o - codigo de endere�o - variavel
	printf("Digite o valor de b: ");//Solicitar o valor para o usuario
	scanf("%lf", &b);//codico de formata��o - codigo de endere�o - variavel
	printf("Digite o valor de c: ");//Solicitar o valor para o usuario
	scanf("%lf", &c);//codico de formata��o - codigo de endere�o - variavel
	
	//Formula linearizada
	
	delta = (pow(b,2) - 4*a*c);//Calculo de delta
	
	//Condi��es de bhaskara
	if(a == 0 or delta <= 0){
		printf("Impossivel calcular!\n");
		}else {
			x1 = (-(b) + sqrt(delta) / (2*a));//Formula linear para x1
			x2 = (-(b) - sqrt(delta) / (2*a));//Formula linear para x2
			printf("x1 = %.2lf\nx2 = %.2lf\n", x1, x2);//Mostra o reltado do calculo para o usuario
		}			
	
}//final do algoritmo
