#include <stdio.h>
#include <windows.h>
#include <string.h>

// Declaracao das futuras funcoes

void limpaTela();
void pausaTela();

// Struct
struct tipoAluno {
    char    nome[50];
    int     idade;
    float   altura;
} ;

int main()
{   
    int    quantidadeAluno = 1;
    struct tipoAluno aluno[quantidadeAluno];

    limpaTela();

    printf("Bem vindo ao adicionar de alunos!\n");

    printf("Digite a quantidade de pessoas que queira adicionar: ");
    scanf(" %d",&quantidadeAluno);

    for (int i = 0; i < quantidadeAluno; i++)
    {
        printf("\nDigite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]s", aluno[i].nome);

        printf("Digite a idade do aluno %d: ", i+1);
        scanf(" %d", &aluno[i].idade);

        printf("Digite a altura do aluno %d: ", i+1);
        scanf(" %f", &aluno[i].altura);
    }

    for (int i = 0; i < quantidadeAluno; i++)
    {
        printf("Dados:\n Nome:%s\n Idade:%d\n Altura:%.2f\n", aluno[i].nome, aluno[i].idade, aluno[i].altura);
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