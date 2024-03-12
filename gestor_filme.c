#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#define MAX 100

typedef struct
{
    char titulo[100];
    int ano_lan;
    float preco_aqui;
    char genero[50];
} DVD;

void menu();
void filmeord(DVD dvd[], int quant); //1
void escolhegenero(DVD dvd[], int quant); //2
void verfilme(DVD dvd[], int quant); //3
float precototal(DVD dvd[], int quant); //4
void caro_bara(DVD dvd[], int quant); //5
int addfilme(DVD dvd[], int quant); //6

void main()
{
    setlocale(LC_ALL, "");
    system("cls");
    DVD dvd[MAX];
    
    strcpy(dvd[0].titulo, "It: A Coisa");
    strcpy(dvd[1].titulo, "Flash");
    strcpy(dvd[2].titulo, "Harry Potter");
    strcpy(dvd[3].titulo, "Capit�o Am�rica");
    strcpy(dvd[4].titulo, "Velocidade Furiosa 9");

    int op, quant = 5;
    float total;
    do
    {
        system("cls");
        menu();
        scanf("%d", &op);
        printf("\n");
        switch (op)
        {
        case 1:
        	filmeord(dvd, quant);
            break;
        case 2:
        	escolhegenero(dvd, quant);
            break;
        case 3:
            verfilme(dvd, quant);
            break;
        case 4:
            total = precototal(dvd, quant);
            printf("O pre�o total dos DVD � %.2f\n", total);
            break;
        case 5:
            caro_bara(dvd, quant);
            break;
        case 6:
            quant = addfilme(dvd, quant);
            break;
        case 7:
            printf("Obrigado por usar o programa.\n");
            break;
        default:
            printf("Op��o Inv�lida.\n");
        }
        system("pause");
    } while (op != 7);

}

void menu()
{
    printf("Menu Interativo\n");
    printf("--------------------------------------------------\n");
    printf("1 - Ver os DVD ordenados por ordem alfab�tica\n");
    printf("2 - Escolher o g�nero de DVD que deseja e ver todos os dados\n");
    printf("3 - Introduza o nome do DVD para ver todos os dados dele\n");
    printf("4 - O pre�o total de dinheiro gasto em DVDs\n");
    printf("5 - Mostrar do DVD mais caro ao mais barato\n");
    printf("6 - Adicionar um novo DVD\n");
    printf("7 - Sair\n");
    printf("Escolha uma op��o: ");
}

void filmeord(DVD dvd[], int quant) //1
{
    int i, j;
    DVD temp;

    if (quant == 0)
    {
        printf("N�o h� DVDs adicionados. N�o � poss�vel ordenar.\n");
    }
    else
    {
    	// basicamnete isto vai ordenar os DVD
        for (i = 0; i < quant - 1; i++)
        {
            for (j = 0; j < quant - i - 1; j++)
            {
                if (strcmp(dvd[j].titulo, dvd[j + 1].titulo) > 0) 
                {
                    temp = dvd[j];
                    dvd[j] = dvd[j + 1];
                    dvd[j + 1] = temp;
                }
            }
        }

        printf("DVDs ordenados por ordem alfab�tica:\n");
        //depois de ordenados
        for (i = 0; i < quant; i++)
        {
            printf("T�tulo do DVD: ");
			puts(dvd[i].titulo);
            printf("Ano de lan�amento do DVD: %d\n", dvd[i].ano_lan);
            printf("Pre�o do DVD: %.2f\n", dvd[i].preco_aqui);
            printf("G�nero do DVD: %s\n", dvd[i].genero);
            printf("-----------------------\n");
        }
    }
}

void escolhegenero(DVD dvd[], int quant) //2
{
    char genero[50];
    char op;
    int i;
    
    if (quant == 0)
	{
		printf("Ainda nao adicionou nehum DVD por isso n�o consegue ver nenhum genero");
	}
	else
	{
		printf("Insira o g�nero do DVD para ver todos os DVDs desse g�nero: ");
    	scanf("%s", genero);
		int encontrou = 0;
	    for (i = 0; i < quant; i++)
	    {
	        if (strcmp(dvd[i].genero, genero) == 0)
	        {
	            encontrou = 1;
	            break;
	        }
	    }
	
	    if (encontrou)
	    {
	        printf("Existe pelo menos 1 DVD desse g�nero.\n");
	        printf("Gostaria de ver os filmes desse g�nero? (s/n): ");
	        scanf(" %c", &op);
	        if (op == 's')
	        {
	            printf("Filmes do g�nero %s:\n", genero);
	            for (i = 0; i < quant; i++)
	            {
	                if (strcmp(dvd[i].genero, genero) == 0)
	                {
	                    printf("T�tulo do DVD: ");
						puts(dvd[i].titulo);
						fflush(stdin);
	                    printf("Pre�o do DVD: %.2f\n", dvd[i].preco_aqui);
	                    printf("Ano de lan�amento do DVD: %d\n", dvd[i].ano_lan);
	                    printf("\n");
	                }
	            }
	        }
	    }
	    else
	    {
	        printf("N�o existe nenhum filme desse g�nero.\n");
	    }
	}
}

void verfilme(DVD dvd[], int quant) //3
{
    char nome[50];
    int i, encontrados = 0;
    printf("Insira o nome do DVD para ver todos os dados sobre ele: ");
    scanf(" %s", nome);

    for (i = 0; i < quant; i++)
    {
        if (strcmp(dvd[i].titulo, nome) == 0)
        {
            encontrados++;
            printf("Dados do DVD:\n");
            printf("T�tulo do DVD: %s\n", dvd[i].titulo);
            printf("Ano de lan�amento do DVD: %d\n", dvd[i].ano_lan);
            printf("Pre�o do DVD: %.2f\n", dvd[i].preco_aqui);
            printf("G�nero do DVD: %s\n", dvd[i].genero);
            printf("-----------------------");
            printf("\n");
        }
    }

    if (encontrados == 0)
    {
        printf("O DVD '%s' n�o foi encontrado.\n", nome);
    }
    else if (encontrados == 1)
    {
        printf("Foi encontrado 1 DVD com o t�tulo '%s'.\n", nome);
    }
    else
    {
        printf("Foram encontrados %d DVDs com o t�tulo '%s'.\n", encontrados, nome);
    }
}


float precototal(DVD dvd[], int quant)//4
{
    int i;
    float total = 0.0;

    for (i = 0; i < quant; i++)
    {
        total += dvd[i].preco_aqui;
    }

    return total;
}

void caro_bara(DVD dvd[], int quant)//5
{
	float max = 0.0, min = 100.0;
	char filme_max[50], filme_min[50];
	int i;
	
	if (quant == 0)
	{
		printf("Ainda nao adicionou nehum DVD");
	}
	else
	{
		for (i = 0; i < quant; i++)
	    {
			if (dvd[i].preco_aqui < min)
			{
			    min = dvd[i].preco_aqui;
			    strcpy(filme_min, dvd[i].titulo);
			}
			
			if (dvd[i].preco_aqui > max)
			{
			    max = dvd[i].preco_aqui;
			    strcpy(filme_max, dvd[i].titulo); 
			}
	
	    }
		printf("O DVD mais caro � %s e custa %.2f �\n", filme_max, max);
		printf("O DVD mais barato � %s e custa %.2f �\n", filme_min, min);

	}
}

int addfilme(DVD dvd[], int quant)//6
{
	if (quant < MAX)  
	{
	    printf("Insira o nome do DVD que deseja adicionar: ");
	    scanf(" %s", dvd[quant].titulo);
	    fflush(stdin);
	    printf("Insira o ano de lan�amento do DVD: ");
	    scanf("%d", &dvd[quant].ano_lan);
	    printf("Insira o g�nero do DVD: ");
	    scanf(" %s", dvd[quant].genero);
	    printf("Insira o pre�o do DVD: ");
	    scanf("%f", &dvd[quant].preco_aqui);
	    quant++;
	} 
	else 
	{
	    printf("A capacidade m�xima de DVDs foi atingida.\n");
	}
	
	return quant;
}

