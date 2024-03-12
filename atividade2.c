#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define NUM_PESSOA 5

typedef struct
{
    char nome[50];
    int idd;
    int altura;
    int peso;
} PESSOA;

void Pdados(PESSOA pessoa[]);
void Paltura(PESSOA alt[]);
void Ppeso(PESSOA pes[]);
float media(PESSOA p[], int tipo);

int main()
{
    PESSOA pessoa[NUM_PESSOA], p1;
    
    Pdados(pessoa);
    
    Paltura(pessoa);
    
    Ppeso(pessoa);
    
    p1 = pessoa[2];
    printf("Informação Pessoal: \n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idd);
	printf("Altura: %d\n", p1.altura);    
	printf("Peso: %d\n", p1.peso);
	
	int i;
    printf("\nNome\tIdade\tPeso\n");
    for (i = 0; i < NUM_PESSOA; i++)
    {
    	printf("%s\t%d\t%d\n", pessoa[i].nome, pessoa[i].idd, pessoa[i].peso);
    }
    
    
    float avg_peso = media(pessoa, 0);
    printf("\nA média do peso é %.2f\n", avg_peso);
    
    float avg_altura = media(pessoa, 1);
    printf("A média da altura é %.2f\n", avg_altura);
    
    float avg_idade = media(pessoa, 2);
    printf("A média das idades é %.2f\n", avg_idade);
    
    return 0;
}

void Pdados(PESSOA pessoa[])
{
    int i;
    for (i = 0; i < NUM_PESSOA; i++)
    {
        printf("Insira o seu nome: ");
        scanf("%s", pessoa[i].nome);
        printf("Insira a idade: ");
        scanf("%d", &pessoa[i].idd);
    }
}

void Paltura(PESSOA alt[])
{
	int i, num;
	time_t t1;
	srand((unsigned)time(&t1));
	 
    for (i = 0; i < NUM_PESSOA; i++)
    {
		num = (rand() % (200 - 150 + 1)) + 150;
		alt[i].altura = num;
    }
}

void Ppeso(PESSOA pes[])
{
	int i, num;
	int limite_sup = 120, limite_inf = 50;
	time_t p1;
	srand((unsigned)time(&p1));
	 
    for (i = 0; i < NUM_PESSOA; i++)
    {
		num = (rand() % (limite_sup - limite_inf + 1)) + limite_inf;
		pes[i].peso = num;
    }
}

float media(PESSOA p[], int tipo)
{	
	int soma = 0, i; 
	float media;
	
	printf("\nEscolha a opção:\n");
	printf("0 - Peso\n");
	printf("1 - Altura\n");
	printf("2 - Idade\n");
	scanf("%d", &tipo);
	
	for (i = 0; i < NUM_PESSOA; i++)
	{
		switch (tipo)
		{
			case 0:
				soma += p[i].peso;
				break;
			case 1:
				soma += p[i].altura;
				break;
			case 2:
				soma += p[i].idd;
				break;
			default:
				soma += p[i].peso;		
		}
	}
	
	media = (float)soma / NUM_PESSOA;
	
	return media;
}
