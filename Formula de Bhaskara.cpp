//Entrada: a, b, c
//Saída: x1, x2
//Processamento: calculo
#include<stdio.h>//Biblioteca pra comandos de entraada e saída
#include<math.h>//Biblioteca matemática
#include<locale.h>//Biblioteca para acentuação
int main(){//inicio do algoritmo

	//Declaração de variaveis

	double a, b, c, delta, x1, x2;//variaveis declaradas 
	
	//Solicitação de valores 
	
	printf("Digite o valor de a: ");//Solicitar o valor para o usuario
	scanf("%lf", &a);//codico de formatação - codigo de endereço - variavel
	printf("Digite o valor de b: ");//Solicitar o valor para o usuario
	scanf("%lf", &b);//codico de formatação - codigo de endereço - variavel
	printf("Digite o valor de c: ");//Solicitar o valor para o usuario
	scanf("%lf", &c);//codico de formatação - codigo de endereço - variavel
	
	//Formula linearizada
	
	delta = (pow(b,2) - 4*a*c);//Calculo de delta
	
	//Condições de bhaskara
	if(a == 0){
		printf("Valor de a igua a 0, não é possivel calcular os valores de x");
		return 0;//Retorno para funcão "main"
	}
	if(sqrt(delta) <= 0){
		printf("Valor de delta é negativo, não é possivel calcular os valores de x");
		return 0;//Retorno para função "main"
	}
	
	x1 = (-(b) + sqrt(delta) / (2*a));//Formula linear para x1
	x2 = (-(b) - sqrt(delta) / (2*a));//Formula linear para x2
	
	//Resultado do calculo das formulas
	
	printf("x1 = %.2lf\nx2 = %.2lf\n", x1, x2);//Mostra o reltado do calculo para o usuario
	
	return 0;//Retorno para função "main"
}//final do algoritmo
