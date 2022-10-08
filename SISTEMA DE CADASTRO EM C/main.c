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
   // DECLARAÇÃO DE PONTUAÇÃO E ACENTUAÇÃO EM PORTUGUÊS
    setlocale(LC_ALL, "Portuguese");

    TelaLogin();
    TelaMenu();

    return 0;
}

void TelaLogin()
{

    //DECLARAÇÃO DE VARIÁVEIS
    char Login [30];
    char Senha [30];
    char RegLogin [30];
    char RegSenha [30];
    char Nome [30];
    char FuncHosp [30];
    char Confirma [1];

  // REGISTRO DE UM USUÁRIO
    printf("\n=================================");
    printf("\n====== REGISTRO DE USUÁRIO ======");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

  // ENTRADA DAS INFORMAÇÕES DIGITADAS PELO USUÁRIO
    printf("\n\nPrimeiro Nome: ");
      scanf("%s", Nome);

    printf("\nFunção no Hospital: ");
      scanf("%s", FuncHosp);

    printf("\n\nLogin: ");
      scanf("%s", RegLogin);

    printf("\n\nSenha: ");
      scanf("%s", RegSenha);

  //FINAL DO CADASTRO DAS INFORMAÇÕES
    printf("\n\n====== USUÁRIO CADASTRADO ======");

    printf("\n\nAPERTE '5' PARA CONTINUAR: ");
      scanf("%s", Confirma);


  // LIMPAR A TELA PARA A PÁGINA DE LOGIN
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

  // COMPARAÇÃO DO LOGIN E SENHA DIGITADOS COM OS REGISTRADOS NO COMEÇO
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

  // SE OS DADOS FOREM IGUAIS ELE LIMPA A TELA PARA A PRÓXIMA PARTE
    system("cls");

  //MENSAGEM DE BOAS VINDAS USANDO O NOME REGISTRADO NO COMEÇO
    printf("\n======= Seja Bem-Vindo: '%s' ========\n\n\n", Nome);

    printf("\nAPERTE '5' PARA VER O MENU PRINCIPAL: ");
      scanf("%s", Confirma);

}

void TelaMenu()
{

    // LIMPAR A TELA PARA A PÁGINA DO MENU PRINCIPAL
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
        printf("Digite a opção: ");
          scanf("%d", &num);

        switch(num){

            case 1:

          // LIMPAR A TELA PARA A PÁGINA DO CADASTRO DE PACIENTES
            system("cls");

          //SISTEMA PARA CADASTRAR AS INFORMAÇÕES DO PACIENTE
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

            printf("MÊS: ");
                fflush(stdin);
                scanf("%[^\n]s", mes);

            printf("ANO: ");
                scanf("%d", &dnasc);

            printf("\nENDEREÇO (Ex.: Rua Odete Garcia, 25, Jd. Morumbi, SJCampos - SP):\n");
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

            printf("\nDATA DO DIAGNÓSTICO (Ex.: 12/11/2021):\n");
                fflush(stdin);
                scanf("%[^\n]s", datadiag);

            //MENU PARA OPÇÃO DE COMORBIDADE, SE SIM DIGITAR QUAL É, SE NÃO E FINALIZA O CADASTRO
            while(opc!=2)
            {
                printf("\nAPRESENTA COMORBIDADE?\n ");

                printf("> 1. SIM\n");
                printf(" > 2. NAO\n");
                printf("\nDigite a opção: ");
                    scanf("%d", &opc);

                switch(opc){

                    case 1:

                    printf("Comorbidade (Ex.: Diabetes, Obesidade, Hipertensão, outros...):\n");
                        fflush(stdin);
                        scanf("%[^\n]s", comorb);

                    system("pause");


                }break;


            }

            // IMPRESSÃO DO RELATÓRIO DO PACIENTE CADASTRADO
            pont_arq = fopen("RELATÓRIO COVID.txt", "a");
                fprintf(pont_arq,"PACIENTE: \n"),
                fprintf(pont_arq,"NOME COMPLETO: %s \n", nome),
                fprintf(pont_arq,"CPF: %s \n", cpf),
                fprintf(pont_arq,"DATA DE NASCIMENTO: %s/%s/%d \n", dia, mes, dnasc);
                fprintf(pont_arq,"ENDEREÇO: %s \n", end),
                fprintf(pont_arq,"CEP: %s \n", cep),
                fprintf(pont_arq,"EMAIL: %s \n", email),
                fprintf(pont_arq,"TELEFONE: %s \n", tel),
                fprintf(pont_arq,"DATA DO DIAGNÓSTICO: %s \n", datadiag),
                fprintf(pont_arq,"COMORBIDADE: %s \n\n", comorb),
            fclose(pont_arq);

            // CÁLCULO DA IDADE DO PACIENTE
            idade = datual - dnasc;

            //FUNÇÃO DE COMPARAÇÃO DE IDADE E COMORBIDADE
            if((idade >= 65) || (opc == 1))
            {
                printf("\n\nVOCÊ ESTÁ NO GRUPO DE RISCO!!!");

                //SE ESTIVER NO GRUPO DE RISCO SALVA UM .TXT
                pont_arq = fopen("RELATÓRIO GRUPO DE RISCO.txt", "a");
                    fprintf(pont_arq, "PACIENTE: \n"),
                    fprintf(pont_arq, "NOME: %s\n", nome);
                    fprintf(pont_arq, "CEP: %s\n", cep),
                    fprintf(pont_arq, "IDADE: %d\n\n", idade),
                fclose(pont_arq);
            }
            else
            {
                printf("\n\nVOCÊ NÃO ESTÁ NO GRUPO DE RISCO!!!");

                //SE NÃO ESTIVER NO GRUPO DE RISCO SALVA UM .TXT
                pont_arq = fopen("RELATÓRIO FORA DO GRUPO DE RISCO.txt", "a");
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

            // LIMPAR A TELA PARA A PÁGINA DE CONSULTA DE PACIENTES
            system("cls");

            // SISTEMA PARA CONSULTAR O CADASTRO REALIZADO
            printf("====================================\n");
            printf("======== CONSULTA PACIENTE =========\n");
            printf("====================================\n\n");

            printf("NOME COMPLETO: %s \n", nome);
            printf("DATA DE NASCIMENTO: %s/%s/%d \n", dia, mes, dnasc);
            printf("CPF: %s \n", cpf);
            printf("ENDEREÇO: %s \n", end);
            printf("CEP: %s \n", cep);
            printf("EMAIL: %s \n", email);
            printf("TELEFONE: %s \n", tel);
            printf("DATA DO DIAGNÓSTICO: %s \n", datadiag);
            printf("COMORBIDADE: %s \n\n", comorb);

            system("pause");
            break;

            case 3:

            // LIMPAR A TELA PARA A PÁGINA DE DADOS DO SISTEMA
            system("cls");

            //INFORMAÇÕES SOBRE O SISTEMA
            printf("=================================================================================\n");
            printf("=============================== DADOS DO SISTEMA ================================\n");
            printf("=================================================================================\n\n");
            printf(" UM SISTEMA CRIADO PARA CADASTRAR PACIENTES COM TESTE POSITIVO DE COVID-19,\n");
            printf(" ONDE O ENFERMEIRO(A) IRÁ SE CADASTRAR NO SISTEMA, LOGAR E APÓS A CONFIRMAÇÃO\n");
            printf(" PODERÁ CADASTRAR E CONSULTAR OS DADOS DO PACIENTE, SERÁ SALVO UM ARQUIVO\n");
            printf(" PRINCIPAL EM .TXT COM OS DADOS DO PACIENTE, CASO ELE SEJA DO GRUPO DE\n");
            printf(" RISCO SALVARÁ UM ARQUIVO .TXT COM O NOME, CEP E IDADE DO PACIENTE!!!\n\n");
            printf(" NOME DOS PARTICIPANTES \n\n");
            printf(" GABRIEL SILVA DOMINGUES   - MATRÍCULA: 0446212\n\n");
            printf(" JOÁS ALMEIDA DOS SANTOS   - MATRÍCULA: 0448739\n\n");
            printf(" SCHNEIDER SIMILIEN        - MATRÍCULA: 0448458\n\n");
            printf(" LARISSA DA COSTA CARVALHO - MATRÍCULA: 0446897\n\n");
            printf(" APARECIDO ANGELO DA CRUZ  - MATRÍCULA: 0446304\n\n");
            printf(" VINICIUS FERNANDES SILVA  - MATRÍCULA: 0448848\n\n");
            printf(" PIM IV - ANÁLISE E DESENVOLVIMENTO DE SISTEMAS - UNIP \n\n");

            system("pause");
            break;
        }



    }


}

