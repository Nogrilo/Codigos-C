#include <stdio.h>
#include <windows.h>
#include <string.h>

// Declaracao das futuras funcoes

void menu();
void inserirAluno();
void listarAluno();
void limpaTela();
void pausaTela();
void finalizar();

// Struct
struct tipoAluno {
    char    nome[50];
    int     idade,id;
    float   altura;
} ;

// Variaveis globais 
int    quantidadeAluno = 0;
struct tipoAluno aluno[255];

int main()
{   
    menu();
}

void menu()
{
    int opcaoMenu;
    do 
    {
        limpaTela();
        
        printf("Bem vindo ao menu do banco de dados de alunos!\n");
        
        printf("[1] Inserir aluno\n");
        printf("[2] Listar alunos\n");
        printf("[3] Sair\n");
        printf("\nDigite a opcao: ");
        scanf(" %d",&opcaoMenu);

        switch(opcaoMenu)
        {
            case 1:
                inserirAluno();
                break;

            case 2:
                listarAluno();
                break;

            case 3:
                finalizar();
                break;

            default:
            printf("Opcao invalida!");

        } 
    } while (opcaoMenu != 3);
}

void inserirAluno()
{   
    limpaTela();
    //printf("Digite a quantidade de pessoas que queira adicionar: ");
    //scanf(" %d", &quantidadeAluno);

    //for (int i = 0; i < quantidadeAluno; i++)
    //{
        printf("\nDigite o nome do aluno %d: ", quantidadeAluno+1);
        scanf(" %[^\n]s", aluno[quantidadeAluno].nome);

        printf("Digite a idade do aluno %d: ", quantidadeAluno+1);
        scanf(" %d", &aluno[quantidadeAluno].idade);

        printf("Digite a altura do aluno %d: ", quantidadeAluno+1);
        scanf(" %f", &aluno[quantidadeAluno].altura);

        aluno[quantidadeAluno].id = quantidadeAluno + 1;
        quantidadeAluno++;

        printf("UWU");
    //}
}

void listarAluno()
{
    for (int i = 0; i < quantidadeAluno; i++)
    {
        printf("ID: %d | Aluno: %s | Idade: %d | Altura: %.2f\n", aluno[i].id, aluno[i].nome, aluno[i].idade, aluno[i].altura);
    }
    pausaTela();
}

void limpaTela()
{
    system("cls");
}

void pausaTela()
{
    system("pause");
}

void finalizar()
{
    printf("Programa finalizado");
}