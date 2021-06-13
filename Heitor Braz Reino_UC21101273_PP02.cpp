//Nome Completo: Heitor Braz Reino
//Matrícula: UC21101273
//Curso: Engenharia de Software

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h> 
#include<windows.h>  
#include<conio.h>
#include<string.h>

//funcao para cores
enum DOS_COLORS{
 preto, azul, verde, CYAN, vermelho, MAGENTA, castanho,
 cizento_claro, cizento_escuro, azul_claro, verde_claro, CYAN_claro,
 vermelho_claro, MAGENTA_claro, amarelo, branco
};


void textcolor(int iColor){
 HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
 CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
 BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
 bufferInfo.wAttributes &= 0x00F0;
 SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}

//funcao principal
int main(void)
{
    //variaveis para o sistema de menu
    int menuPrincipal;
    //para cadastrar o voo
    int Qntassentos;
    char nomeVoo[30], destinoVoo[30], origemvoo[30];
    float preco=0;
    //variaveis para cadastrar informacoes do usuario
    char nomeCliente[30], cpf[12];
    int idade, Id=0, matrizid[10][20];
    //variaveis para verificar disponibilidade de assentos
    char letra[10][20];
    int i = 0, j = 0, contador = 0, poltronas[10][20], assentoescolhido;
    //confirmar reservas
    int contadorreservas=0, contadordisponiveis=0, contadorconfirmada=0;//resumo de informacoes
    float precototal=0;
    //cancelar reservas
    int idcliente;
    
    setlocale(LC_ALL,"Portuguese");
   
    do//retornar o menu
    {
        
    
        //menu
        textcolor(branco);
        printf("+-------------------------------------------------+\n");
        printf("|  BEM VINDO AO SISTEMAS SALUMAR LINHAS AEREAS    |\n");
        printf("+-------------------------------------------------+\n");
        printf("\n");
        printf("+-------------------------------------------------+\n");
        printf("|                       MENU                      |\n");
        printf("|             OPÇÃO                ||    CÓDIGO   |\n");
        printf("| Cadastrar Voo                    ||      1      |\n");
        printf("| Cadastrar Informações do Cliente ||      2      |\n");
        printf("| Disponibilidade de Assentos      ||      3      |\n");
        printf("| Realizar Reserva                 ||      4      |\n");
        printf("| Confimar Reserva                 ||      5      |\n");
        printf("| Cancelar Reserva                 ||      6      |\n");
        printf("| Informações da Passagem          ||      7      |\n");
        printf("| Sair do Programa                 ||      8      |\n");
        printf("+-------------------------------------------------+\n");
        printf("| Digite a opção desejada: \n");
        scanf("%d", &menuPrincipal);
        fflush(stdin);
        


    switch (menuPrincipal)
    {

    case 1://CADASTRAR VOO 
        system("cls");
        printf("+-------------------------------------------------+\n");
        printf("|   Bem Vindo ao Sistema de Cadastro de Voos      |\n");
        printf("|   Digite as Informações Requeridas Abaixo       |\n");
        printf("+-------------------------------------------------+\n");

        //informacoes do voo com validacoes
        printf("Digite o Nome do Voo\n");
        fflush(stdin);
        do
        {
            fgets(nomeVoo, 30, stdin);
            if (strlen(nomeVoo)<3)
            {
            	textcolor(vermelho);
                printf("NOME INVALIDO, POR FAVOR DIGITE NOVAMENTE:\n");
            }
            
        } while (strlen(nomeVoo)<3);
        printf("Digite a Origem do Voo:");
        do
        {
            fgets(origemvoo, 30, stdin);
            if (strlen(origemvoo)<3)
            {
                printf("ORIGEM INVALIDA, POR FAVOR DIGITE NOVAMENTE:\n");
            }
            
        } while (strlen(origemvoo)<3);
        printf("Digite o Destino do Voo:");
        do
        {
            fgets(destinoVoo, 30, stdin);
            if (strlen(destinoVoo)<3)
            {
            	textcolor(vermelho);
                printf("DESTINO INVALIDO, POR FAVOR DIGITE NOVAMENTE:\n");
            }
            
        } while (strlen(destinoVoo)<3);

        printf("Informe a Quantidade de Assentos nesse Voo:\n");
        do
        {
            scanf("%i", &Qntassentos);
            fflush(stdin);
            if (Qntassentos < 90 || Qntassentos > 200)
            {
            	textcolor(vermelho);
                printf("QUANTIDADE DE ASSENTOS INFORMADA INVALIDA, POR FAVOR DIGITE A QUANTIDADE NOVAMENTE: \n");
            }
            

        } while (Qntassentos < 90 || Qntassentos > 200);
        printf("Informe o Valor da Passagem: \n");
        do
        {
            scanf("%f", &preco);
            if (preco <0)
            {
            	textcolor(vermelho);
                printf("VALOR MINIMO NÃO ALCANCADO, POR FAVOR INFORME O VALOR NOVAMENTE\n");
            }
            
        } while (preco<0);
        system("pause");
        //matriz para a questao da poutronas de cada aviao, por isso esta no cadastro do voo
        for ( i = 0; i < 10; i++)
        {
            for ( j = 0; j < 20; j++)
            {
               contador++;
               poltronas[i][j]=contador;
            }  
        }
        for ( i = 0; i < 10; i++)
        {
            for ( j = 0; j < 20; j++)
            {
               if (poltronas[i][j] <= Qntassentos)
               {
                   letra[i][j] = 'D';//todos os assentos estao disponiveis no comeco, entao o default e a letra D
               }
            }  
        }
    break;
    case 2://CADASTRAR CLIENTE
        printf("+-------------------------------------------------+\n");
        printf("|  BEM-VINDO AO SISTEMA DE CADASTRO DE CLIENTES   |\n");
        printf("+-------------------------------------------------+\n");
        printf("Digite o Nome do Cliente: \n");
        //informacoes do cliente para o voo, e o preco com a idade <5
        do
        {
            fgets(nomeCliente, 30, stdin);
            if (strlen(nomeCliente) < 3 )
            {
            	textcolor(vermelho);
                printf("NOME INVALIDO, POR FAVOR DIGITE NOVAMENTE:\n");
            }
            
        } while (strlen(nomeCliente) < 3  );
        printf("Digite o Cadastro de Pessoa Física (CPF) do Cliente:\n");      
        do
        {
            fgets(cpf, 12, stdin);
            if (strlen(cpf) != 11)
            {
            	textcolor(vermelho);
                printf("NÚMERO INVALIDO, POR FAVOR DIGITE NOVAMENTE OS 11 DIGITOS DO CPF:\n");
            }
        } while (strlen(cpf) != 11);
        printf("Informe a Idade do Cliente:\n");
        do
        {
            scanf("%d", &idade);
            if (idade < 1 || idade > 200)
            {
            	textcolor(vermelho);
                printf("IDADE ACIMA DOS NIVEIS DE RESTRIÇÃO, POR FAVOR DIGITE A IDADE NOVAMENTE: \n");
            }
        } while (idade < 1 || idade > 200);
        
        if (idade <= 5)
        {
            preco = preco/2;
        }
    
        system("pause");
    break;

    case 3://verificar se os assentos estao disponiveis 
        system("cls");
        printf("+--------------------------------------------------------------------+\n");
        printf("| BEM VINDO AO SISTEMA DE VERIFICAÇÃO DE DISPONIBILIDADE DE LUGARES  |\n");
        printf("+--------------------------------------------------------------------+\n");
        system("pause");

        //printar assentos disponiveis
        for(j=0;j<20;j++){
        for(i=0;i<10;i++){
            if(poltronas[i][j]<=contador && (letra[i][j]=='D' || letra[i][j]=='R' || letra[i][j]=='C')){
                if (letra[i][j]=='R')//caso esteja reservado printa a letra R e cor vermelha
                {
                    textcolor(vermelho);
                    printf("%.3d ", poltronas[i][j]);
                    printf("%c ", letra[i][j]);
                    textcolor(verde_claro);
                } else if (letra[i][j]=='D'){//caso esteja disponivel printa a letra  D e cor verde
                    textcolor(verde_claro);
                    printf("%.3d ", poltronas[i][j]);
                    printf("%c ", letra[i][j]);
                    textcolor(branco);
                } else if (letra[i][j]=='C')//caso esteja confirmado a reserva printa a letra C e cor Azul
                {
                    textcolor(azul);
                    printf("%.3d ", poltronas[i][j]);
                    printf("%c ", letra[i][j]);
                    textcolor(branco);
                }
                
                } 
            } 
        printf("\n");       
        }
        printf("\n");
        textcolor(vermelho);
        printf("RESERVADO  ");
        textcolor(azul);
        printf("CONFIRMADO  ");
        textcolor(verde);
        printf("DISPONIVEL  \n");
        textcolor(branco);
        
          
        system("pause");
    break;

    case 4://realizar reserva
        system("cls");
        printf("+-------------------------------------------------------+\n");
        printf("|  BEM VINDO AO SISTEMA DE CADASTRO DE RESERVAS SALUMAR |\n");
        printf("+-------------------------------------------------------+\n");
        Id++;//cada vez que faz uma reserva ele adiciona +1 ao id e correlaciona ele com o numero do assento
        textcolor(branco);
        //printar os lugares
        for(j=0;j<20;j++){
        for(i=0;i<10;i++){
            if(poltronas[i][j]<= Qntassentos && (letra[i][j]=='D' || letra[i][j]=='R' || letra[i][j]=='C')){
                if (letra[i][j]=='R')
                {
                    textcolor(vermelho);
                    printf("%.3d ", poltronas[i][j]);
                    printf("%c ", letra[i][j]);
                    textcolor(verde_claro);
                }else if (letra[i][j]=='D')
                {
                    textcolor(verde_claro);
                    printf("%.3d ", poltronas[i][j]);
                    printf("%c ", letra[i][j]);
                } else if (letra[i][j]=='C')
                        {
                        textcolor(azul);
                        printf("%.3d ", poltronas[i][j]);
                        printf("%c ", letra[i][j]);
                        textcolor(branco);
                        }
                }
            } 
        printf("\n");       
        }
        textcolor(branco);
        printf("Digite o Assento que o Cliente Deseja Escolher:\n");//cadastrar a reserva
        scanf("%d", &assentoescolhido);
        system("cls");
        textcolor(verde_claro);
        fflush(stdin);
        for(j=0;j<20;j++){
        for(i=0;i<10;i++){
            if(poltronas[i][j] == assentoescolhido){
                letra[i][j] = 'R';
                matrizid[i][j]= Id;//id fica relacionado ao assento escolhido
                } 
            }       
        }
        
        for(j=0;j<20;j++){
        for(i=0;i<10;i++){
            if(poltronas[i][j]<= Qntassentos && (letra[i][j]=='D' || letra[i][j]=='R' || letra[i][j]=='C')){
                if (letra[i][j]=='R')
                {
                    textcolor(vermelho);
                    printf("%.3d ", poltronas[i][j]);
                    printf("%c ", letra[i][j]);
                    textcolor(verde_claro);
                }else if (letra[i][j]=='D')
                {
                    textcolor(verde_claro);
                    printf("%.3d ", poltronas[i][j]);
                    printf("%c ", letra[i][j]);
                } else if (letra[i][j]=='C')
                        {
                        textcolor(azul);
                        printf("%.3d ", poltronas[i][j]);
                        printf("%c ", letra[i][j]);
                        textcolor(branco);
                        }
                }
            } 
        printf("\n");       
        }
        textcolor(azul_claro);
        printf("## ATENCAO AS INFORMACOES, ANOTE SEU ID POIS SERA NECESSARIO PARA CONFIRMAR OU CANCELAR ALGUMA RESERVA ##\n");
        printf("                                        ASSENTO ESCOLHIDO: %d \n", assentoescolhido);
        printf("                                         ID DA RESERVA: %d\n", Id);
        printf("                 ## ESSAS INFORMACOES NAO SERAO INFORMADAS NOVAMENTE, GUARDE-AS! ##\n");
        textcolor(branco);



        system("pause");
    break;
    case 5://confirmar reservas
        system("cls"); 
        printf("+--------------------------------------------------+\n");
        printf("| BEM VINDO AO SISTEMA DE CONFIRMAÇÃO DE RESERVAS |\n");
        printf("+--------------------------------------------------+\n");
        printf("Digite o Número Identificador do Cliente (ID) para Confirma a Reserva: \n");//id de cada reserva deve ser digitado para confirmar a reserva
        do
        {
            scanf("%d", &idcliente);
            if (idcliente > Id)//validacao para que o ID inserido exista
            {
                printf("ID NÃO CADASTRADO, POR FAVOR DIGITE NOVAMENTE:\n");
            }
            
        } while (idcliente > Id);  

        //conforme digitar o id corretamente, passa de reservado para confirmado
        for(j=0;j<20;j++){
            for(i=0;i<10;i++){
                if(matrizid[i][j] == idcliente && letra[i][j]== 'R'){
                    letra[i][j] = 'C';
                    } 
                }       
            }//printa dnovo o mapa dos assentos
        for(j=0;j<20;j++){
                for(i=0;i<10;i++){
                    if(poltronas[i][j]<=contador && (letra[i][j]=='D' || letra[i][j]=='R' || letra[i][j]=='C')){
                        if (letra[i][j]=='R')
                        {
                            textcolor(vermelho);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            textcolor(verde_claro);
                        } else if (letra[i][j]=='D'){
                            textcolor(verde_claro);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            textcolor(branco);
                        } else if (letra[i][j]=='C')
                        {
                            textcolor(azul);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            textcolor(branco);
                        }
                        
                        } 
                    } 
                printf("\n");       
                }
        

    break;

    case 6://cancelar reserva
        system("cls");
        printf("+--------------------------------------------------+\n");
        printf("| BEM VINDO AO SISTEMA DE CANCELAMENTO DE RESERVAS |\n");
        printf("+--------------------------------------------------+\n");
        printf("Digite o Número Identificador do Cliente (ID) para Cancelar a Reserva: \n");//id de cada reserva deve ser digitado para cancelar a reserva
        do
        {
            scanf("%d", &idcliente);
            if (idcliente > Id)
            {
                printf("ID NÃO CADASTRADO, POR FAVOR DIGITE NOVAMENTE:\n");
            }
            
        } while (idcliente > Id);  

        //caso o id seja corretamente digitado, o assento volta a estar disponivel e a reserva e cancelada
        for(j=0;j<20;j++){
            for(i=0;i<10;i++){
                if(matrizid[i][j] == idcliente && (letra[i][j]== 'R' ||letra[i][j]== 'C')){
                    letra[i][j] = 'D';
                    
                    } 
                }       
            }
        for(j=0;j<20;j++){
                for(i=0;i<10;i++){
                    if(poltronas[i][j]<=contador && (letra[i][j]=='D' || letra[i][j]=='R' || letra[i][j]=='C')){
                        if (letra[i][j]=='R')
                        {
                            textcolor(vermelho);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            textcolor(verde_claro);
                        } else if (letra[i][j]=='D'){
                            textcolor(verde_claro);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            textcolor(branco);
                        } else if (letra[i][j]=='C')
                        {
                            textcolor(azul);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            textcolor(branco);
                        }
                        
                        } 
                    } 
                printf("\n");       
                }
        system("pause");
    break;
    case 7://printar informacoes na tela
        system("cls");
        printf("+--------------------------------------------------+\n"); 
        printf("|            INFORMACOES DA PASSAGEM               |\n");
        printf("+--------------------------------------------------+\n");
        printf("|Destino: %s\n", destinoVoo);
        printf("+--------------------------------------------------+\n");
        printf("|Origem: %s\n", origemvoo);
        printf("+--------------------------------------------------+\n");

        for(j=0;j<20;j++){
                for(i=0;i<10;i++){
                    if(poltronas[i][j]<=contador && (letra[i][j]=='D' || letra[i][j]=='R' || letra[i][j]=='C')){
                        if (letra[i][j]=='R')
                        {
                            textcolor(vermelho);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            contadorreservas++;
                            textcolor(verde_claro);
                        } else if (letra[i][j]=='D'){
                            textcolor(verde_claro);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            contadordisponiveis++;
                            textcolor(branco);
                        } else if (letra[i][j]=='C')
                        {
                            textcolor(azul);
                            printf("%.3d ", poltronas[i][j]);
                            printf("%c ", letra[i][j]);
                            contadorconfirmada++;
                            precototal  += preco;
                            textcolor(branco);
                        }
                        
                        } 
                    } 
                printf("\n");       
                }
                printf("+--------------------------------------------------+\n");
                printf("| Quantidade de Assentos Disponíveis:%d\n", contadordisponiveis);
                printf("+--------------------------------------------------+\n");
                printf("| Quantidade de Assentos Reservedos:%d\n", contadorreservas);
                printf("+--------------------------------------------------+\n");
                printf("| Quantidade de Assentos com Venda Comfirmada:%d\n", contadorconfirmada);
                printf("+--------------------------------------------------+\n");
                printf("| Valor por Passagem: %.2lf\n", preco);
                printf("+--------------------------------------------------+\n");
                printf("| Valor Total de Venda de Assentos: %.2lf\n", precototal);
                printf("+--------------------------------------------------+\n");
                system("pause");

    break;
    case 8://sair do programa
        system("cls");
                textcolor(branco);
                printf("|| SALUMAR LINHAS AEREAS AGRADECE POR UTILIZAR UM DOS NOSOS PROGRAMAS ||\n");
        fflush(stdin);
        system("pause");
        exit(1);
    
    break;
    
    default: printf("OPÇÃO DIGITADA INVALIDA");
        break;
    }

    } while (menuPrincipal >= 1 && menuPrincipal < 9);
    

    return 0;
}
