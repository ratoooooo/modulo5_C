#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    char nome[20];
    float nota1, nota2;
}Aluno;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    Aluno a1, a2;

    printf("Inisra o nome do aluno a1 ");
    gets(a1.nome);
    printf("Inisra a nota 1 do aluno a1 ");
    scanf("%f", &a1.nota1);
    printf("Inisra a nota 2 do aluno a1 ");
    scanf("%f", &a1.nota2);
    
    a1=a2;

}
