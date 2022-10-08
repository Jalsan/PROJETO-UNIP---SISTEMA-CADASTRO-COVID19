// BIBLIOTECAS IMPORTADAS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int opcao = 0;

void TelaLogin();
void TelaMenu();

int main(void)
{
   // DECLARA��O DE PONTUA��O E ACENTUA��O EM PORTUGU�S
    setlocale(LC_ALL, "Portuguese");

    TelaLogin();
    TelaMenu();

    return 0;
}

void TelaLogin()
{

    //DECLARA��O DE VARI�VEIS
    char Login [30];
    char Senha [30];
    char RegLogin [30];
    char RegSenha [30];
    char Nome [30];
    char FuncHosp [30];
    char Confirma [1];

  // REGISTRO DE UM USU�RIO
    printf("\n=================================");
    printf("\n====== REGISTRO DE USU�RIO ======");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

  // ENTRADA DAS INFORMA��ES DIGITADAS PELO USU�RIO
    printf("\n\nPrimeiro Nome: ");
      scanf("%s", Nome);

    printf("\nFun��o no Hospital: ");
      scanf("%s", FuncHosp);

    printf("\n\nLogin: ");
      scanf("%s", RegLogin);

    printf("\n\nSenha: ");
      scanf("%s", RegSenha);

  //FINAL DO CADASTRO DAS INFORMA��ES
    printf("\n\n====== USU�RIO CADASTRADO ======");

    printf("\n\nAPERTE '5' PARA CONTINUAR: ");
      scanf("%s", Confirma);


  // LIMPAR A TELA PARA A P�GINA DE LOGIN
    system("cls");

    printf("\n=================================");
    printf("\n========= TELA DE LOGIN =========");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

    printf("\n\nLogin: ");
      scanf("%s", Login);

    printf("\nSenha: ");
      scanf("%s", Senha);

  // COMPARA��O DO LOGIN E SENHA DIGITADOS COM OS REGISTRADOS NO COME�O
    while((strcmp (Login, RegLogin) != 0) || (strcmp(Senha,RegSenha) != 0))
    {

      //SE FOREM DIFERENTES ELE VOLTA PARA A PARTE DE LOGIN
        printf("\n\n====== LOGIN E/OU SENHA INCORRETOS ======\n\n");

        system("pause");
        system("cls");

        printf("\n=================================");
        printf("\n========= TELA DE LOGIN =========");
        printf("\n=================================");

        printf("\n\n=================================");
        printf("\n=== PREENCHA TODOS OS CAMPOS ====");
        printf("\n=================================");

        printf("\n\n======== TENTE NOVAMENTE ========");

        printf("\n\nLogin: ");
          scanf("%s", Login);

        printf("\nSenha: ");
          scanf("%s", Senha);

    }

  // SE OS DADOS FOREM IGUAIS ELE LIMPA A TELA PARA A PR�XIMA PARTE
    system("cls");

  //MENSAGEM DE BOAS VINDAS USANDO O NOME REGISTRADO NO COME�O
    printf("\n======= Seja Bem-Vindo: '%s' ========\n\n\n", Nome);

    printf("\nAPERTE '5' PARA VER O MENU PRINCIPAL: ");
      scanf("%s", Confirma);

}

void TelaMenu()
{

    // LIMPAR A TELA PARA A P�GINA DO MENU PRINCIPAL
    system("cls");

   //SISTEMA DO MENU PRINCIPAL
    FILE *pont_arq;
    int num=0;
    int opc;
    int idade;
    int dnasc;
    int datual = 2021;
    char dia[30];
    char mes[30];
    char nome[100];
    char end[100];
    char cep[30];
    char cpf[30];
    char email[100];
    char tel[30];
    char datadiag[30];
    char comorb[50];

    while(num!=4)
    {
        system("cls");
        printf("====================================\n");
        printf("========== MENU PRINCIPAL ==========\n");
        printf("====================================\n\n");
        printf("1. Cadastrar paciente: \n");
        printf("2. Consultar dados do paciente: \n");
        printf("3. Dados do sistema: \n");
        printf("4. Sair do sistema: \n\n");
        printf("Digite a op��o: ");
          scanf("%d", &num);

        switch(num){

            case 1:

          // LIMPAR A TELA PARA A P�GINA DO CADASTRO DE PACIENTES
            system("cls");

          //SISTEMA PARA CADASTRAR AS INFORMA��ES DO PACIENTE
            printf("====================================\n");
            printf("======== CADASTRAR PACIENTE ========\n");
            printf("====================================\n\n");

            printf("NOME COMPLETO: ");
                fflush(stdin);
                scanf("%[^\n]s", nome);

            printf("\nCPF (Ex.: 474.458.215-85):\n");
                fflush(stdin);
                scanf("%[^\n]s", cpf);

            printf("\nDATA DE NASCIMENTO: \n");
            printf("DIA: ");
                fflush(stdin);
                scanf("%[^\n]s", dia);

            printf("M�S: ");
                fflush(stdin);
                scanf("%[^\n]s", mes);

            printf("ANO: ");
                scanf("%d", &dnasc);

            printf("\nENDERE�O (Ex.: Rua Odete Garcia, 25, Jd. Morumbi, SJCampos - SP):\n");
                fflush(stdin);
                scanf("%[^\n]s", end);

            printf("\nCEP (Ex.: 12236-442):\n");
                fflush(stdin);
                scanf("%[^\n]s", cep);

            printf("\nEMAIL (Ex.: gabriel.domingues@gmail.com):\n");
                fflush(stdin);
                scanf("%[^\n]s", email);

            printf("\nTELEFONE (Ex.: (12) 99608-1485):\n");
                fflush(stdin);
                scanf("%[^\n]s", tel);

            printf("\nDATA DO DIAGN�STICO (Ex.: 12/11/2021):\n");
                fflush(stdin);
                scanf("%[^\n]s", datadiag);

            //MENU PARA OP��O DE COMORBIDADE, SE SIM DIGITAR QUAL �, SE N�O E FINALIZA O CADASTRO
            while(opc!=2)
            {
                printf("\nAPRESENTA COMORBIDADE?\n ");

                printf("> 1. SIM\n");
                printf(" > 2. NAO\n");
                printf("\nDigite a op��o: ");
                    scanf("%d", &opc);

                switch(opc){

                    case 1:

                    printf("Comorbidade (Ex.: Diabetes, Obesidade, Hipertens�o, outros...):\n");
                        fflush(stdin);
                        scanf("%[^\n]s", comorb);

                    system("pause");


                }break;


            }

            // IMPRESS�O DO RELAT�RIO DO PACIENTE CADASTRADO
            pont_arq = fopen("RELAT�RIO COVID.txt", "a");
                fprintf(pont_arq,"PACIENTE: \n"),
                fprintf(pont_arq,"NOME COMPLETO: %s \n", nome),
                fprintf(pont_arq,"CPF: %s \n", cpf),
                fprintf(pont_arq,"DATA DE NASCIMENTO: %s/%s/%d \n", dia, mes, dnasc);
                fprintf(pont_arq,"ENDERE�O: %s \n", end),
                fprintf(pont_arq,"CEP: %s \n", cep),
                fprintf(pont_arq,"EMAIL: %s \n", email),
                fprintf(pont_arq,"TELEFONE: %s \n", tel),
                fprintf(pont_arq,"DATA DO DIAGN�STICO: %s \n", datadiag),
                fprintf(pont_arq,"COMORBIDADE: %s \n\n", comorb),
            fclose(pont_arq);

            // C�LCULO DA IDADE DO PACIENTE
            idade = datual - dnasc;

            //FUN��O DE COMPARA��O DE IDADE E COMORBIDADE
            if((idade >= 65) || (opc == 1))
            {
                printf("\n\nVOC� EST� NO GRUPO DE RISCO!!!");

                //SE ESTIVER NO GRUPO DE RISCO SALVA UM .TXT
                pont_arq = fopen("RELAT�RIO GRUPO DE RISCO.txt", "a");
                    fprintf(pont_arq, "PACIENTE: \n"),
                    fprintf(pont_arq, "NOME: %s\n", nome);
                    fprintf(pont_arq, "CEP: %s\n", cep),
                    fprintf(pont_arq, "IDADE: %d\n\n", idade),
                fclose(pont_arq);
            }
            else
            {
                printf("\n\nVOC� N�O EST� NO GRUPO DE RISCO!!!");

                //SE N�O ESTIVER NO GRUPO DE RISCO SALVA UM .TXT
                pont_arq = fopen("RELAT�RIO FORA DO GRUPO DE RISCO.txt", "a");
                    fprintf(pont_arq, "PACIENTE: \n"),
                    fprintf(pont_arq, "NOME: %s\n", nome);
                    fprintf(pont_arq, "CEP: %s\n", cep),
                    fprintf(pont_arq, "IDADE: %d\n\n", idade),
                fclose(pont_arq);
            }

            printf("\n\nCADASTRO REALIZADO COM SUCESSO...\n\n");

            system("pause");
            break;

            case 2:

            // LIMPAR A TELA PARA A P�GINA DE CONSULTA DE PACIENTES
            system("cls");

            // SISTEMA PARA CONSULTAR O CADASTRO REALIZADO
            printf("====================================\n");
            printf("======== CONSULTA PACIENTE =========\n");
            printf("====================================\n\n");

            printf("NOME COMPLETO: %s \n", nome);
            printf("DATA DE NASCIMENTO: %s/%s/%d \n", dia, mes, dnasc);
            printf("CPF: %s \n", cpf);
            printf("ENDERE�O: %s \n", end);
            printf("CEP: %s \n", cep);
            printf("EMAIL: %s \n", email);
            printf("TELEFONE: %s \n", tel);
            printf("DATA DO DIAGN�STICO: %s \n", datadiag);
            printf("COMORBIDADE: %s \n\n", comorb);

            system("pause");
            break;

            case 3:

            // LIMPAR A TELA PARA A P�GINA DE DADOS DO SISTEMA
            system("cls");

            //INFORMA��ES SOBRE O SISTEMA
            printf("=================================================================================\n");
            printf("=============================== DADOS DO SISTEMA ================================\n");
            printf("=================================================================================\n\n");
            printf(" UM SISTEMA CRIADO PARA CADASTRAR PACIENTES COM TESTE POSITIVO DE COVID-19,\n");
            printf(" ONDE O ENFERMEIRO(A) IR� SE CADASTRAR NO SISTEMA, LOGAR E AP�S A CONFIRMA��O\n");
            printf(" PODER� CADASTRAR E CONSULTAR OS DADOS DO PACIENTE, SER� SALVO UM ARQUIVO\n");
            printf(" PRINCIPAL EM .TXT COM OS DADOS DO PACIENTE, CASO ELE SEJA DO GRUPO DE\n");
            printf(" RISCO SALVAR� UM ARQUIVO .TXT COM O NOME, CEP E IDADE DO PACIENTE!!!\n\n");
            printf(" NOME DOS PARTICIPANTES \n\n");
            printf(" GABRIEL SILVA DOMINGUES   - MATR�CULA: 0446212\n\n");
            printf(" JO�S ALMEIDA DOS SANTOS   - MATR�CULA: 0448739\n\n");
            printf(" SCHNEIDER SIMILIEN        - MATR�CULA: 0448458\n\n");
            printf(" LARISSA DA COSTA CARVALHO - MATR�CULA: 0446897\n\n");
            printf(" APARECIDO ANGELO DA CRUZ  - MATR�CULA: 0446304\n\n");
            printf(" VINICIUS FERNANDES SILVA  - MATR�CULA: 0448848\n\n");
            printf(" PIM IV - AN�LISE E DESENVOLVIMENTO DE SISTEMAS - UNIP \n\n");

            system("pause");
            break;
        }



    }


}

