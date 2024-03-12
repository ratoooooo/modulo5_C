#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define NUM_PESSOA 3

typedef struct
{
    char nome[50];
    int idd;
    char sexo;
} PESSOA;

void lerdados(PESSOA p[]);
void MediaIdade(PESSOAS g[]);

void main()
{
	setlocale(LC_ALL, "Portuguese");
    system("cls");
    Pessoa pessoa[NUM_PESSOA];
    lerdados(pessoa);
	MediaIdade(pessoa);
}

void lerdados(PESSOA p[])
{
    int i;
    for (i = 0; i < NUM_PESSOA; i++)
    {
        printf("Insira o seu nome: ");
        scanf("%s", p[i].nome);
        printf("Insira a sua idade: ");
        scanf("%d", &p[i].idd);
        printf("Insira o caractere do seu sexo (F - Feminino / M - Masculino): ");
        scanf(" %c", &p[i].sexo);
        printf("-----------------------------------------------------------------\n");
    }
}

void MediaIdade(PESSOAS g[])
{
	int i, somaf=0, somam=0, fem=0, man=0;
	float mediam, mediaf;
	
    for (i = 0; i < NUM_PESSOA; i++)
    {
    	if (pessoa[i].sexo == 'f')
    	{
    		somaf += g[i].idd;
    		fem++;
    	}
    	else
    	{
    		somam += g[i].idd;
    		man++;
    	}
    }
    
    mediaf = somaf / fem;
    mediam = somam / man;
    
    printf("A media das idades das meninas são %.2f e foram contadas %d meninas\n", mediaf, fem);
    printf("A media das idades das meninas são %.2f e foram contados %d meninos\n", mediam, man);
}
