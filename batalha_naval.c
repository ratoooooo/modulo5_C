#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAMANHO_MATRIZ 10

typedef struct {
    int tamanho;
    int quantidade;
} Barco;

void limpar_tela()
{
    system("cls");
}

void inicializar_matriz(char matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
    int i, j;
    for (i = 0; i < TAMANHO_MATRIZ; i++)
    {
        for (j = 0; j < TAMANHO_MATRIZ; j++)
        {
            matriz[i][j] = ' ';
        }
    }
}

void imprimir_matriz(char matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
    int i, j;
    printf("  ");
    for (i = 1; i <= TAMANHO_MATRIZ; i++)
    {
        printf("%2d ", i);
    }
    printf("\n");

    for (i = 0; i < TAMANHO_MATRIZ; i++)
    {
        printf("%2d", i + 1);
        for (j = 0; j < TAMANHO_MATRIZ; j++)
        {
            printf(" %c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int valida_posicao(char matriz_sol[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int linha, int coluna)
{
    if (linha < 0 || linha >= TAMANHO_MATRIZ || coluna < 0 || coluna >= TAMANHO_MATRIZ)
    {
        return 0; // Fora dos limites da jogo
    }

    if (matriz_sol[linha][coluna] != ' ')
    {
        return 0; // ja jogou nesta posição
    }

    return 1; // Posição válida
}

void criar_barco(char matriz_sol[TAMANHO_MATRIZ][TAMANHO_MATRIZ], Barco barco)
{
    int linha, coluna, encontrou = 0;
    time_t t;
    srand((unsigned)time(&t));

    do
    {
        linha = rand() % TAMANHO_MATRIZ;
        coluna = rand() % TAMANHO_MATRIZ;
        encontrou = valida_posicao(matriz_sol, linha, coluna);
    } while (encontrou == 0);

    matriz_sol[linha][coluna] = barco.tamanho + '0';
    barco.quantidade++;
}

void gerar_barcos(char matriz_sol[TAMANHO_MATRIZ][TAMANHO_MATRIZ], Barco barcos[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        criar_barco(matriz_sol, barcos[0]); // Barcos de tamanho 1
    }

    for (i = 0; i < 4; i++)
    {
        criar_barco(matriz_sol, barcos[1]); // Barcos de tamanho 2
    }

    for (i = 0; i < 3; i++)
    {
        criar_barco(matriz_sol, barcos[2]); // Barcos de tamanho 3
    }

    for (i = 0; i < 2; i++)
    {
        criar_barco(matriz_sol, barcos[3]); // Barcos de tamanho 3
    }

    criar_barco(matriz_sol, barcos[4]); // Barcos de tamanho 5
}

void mostrar_posicao_barcos(char matriz_sol[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
    printf("Posição dos barcos:\n");
    imprimir_matriz(matriz_sol);
}

void menu()
{
	printf("1 - Nível Fácil\n");
    printf("2 - Nível Médio\n");
    printf("3 - Nível Avançado\n");
    printf("Escolha o nível do jogo: ");
}

void main()
{
    char matriz_sol[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    char matriz_tiros[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int i, j, nivel, acertos=0, errados=0, total_tiros=0;
    int linha, coluna;
    Barco barcos[5] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}};

	menu();
    scanf("%d", &nivel);

    limpar_tela();

    // iniciar matrizes
    inicializar_matriz(matriz_sol);
    inicializar_matriz(matriz_tiros);
	
    switch (nivel) 
    {
        case 1:
            gerar_barcos(matriz_sol, barcos);
            total_tiros = 80;
            break;
        case 2:
            gerar_barcos(matriz_sol, barcos);
            total_tiros = 60;
            break;
        case 3:
            gerar_barcos(matriz_sol, barcos);
            total_tiros = 40;
            break;
        default:
            printf("Nível inválido!\n");
    }

    while (acertos < total_tiros)
    {
        limpar_tela();

        printf("-----------------------------------------------------------------------------------\n");
        printf("Tiros restantes: %d\n", total_tiros - (acertos + errados)); // Mostra o número de tiros restantes
        printf("Acertados: %d\n", acertos);
        printf("Errados: %d\n", errados);
        printf("-----------------------------------------------------------------------------------\n");
        printf("Barcos de 1: %d | Barcos de 2: %d | Barcos de 3: %d | Barcos de 4: %d | Barcos de 5: %d\n",
               barcos[0].quantidade, barcos[1].quantidade, barcos[2].quantidade, barcos[3].quantidade, barcos[4].quantidade);
        printf("-----------------------------------------------------------------------------------\n");

        imprimir_matriz(matriz_tiros);

        printf("Insira a linha: ");
        scanf("%d", &linha);
        printf("Insira a coluna: ");
        scanf("%d", &coluna);

        --linha;
        --coluna;

        if (!valida_posicao(matriz_tiros, linha, coluna))
        {
            printf("O tiro esta fora dos limites do jogo!\n");
            getchar();
            getchar();
        }
        else if (matriz_tiros[linha][coluna] != ' ')
        {
            printf("Tu já atirou nesta posição!\n");
            getchar();
            getchar();
        }
        else
        {
            if (matriz_sol[linha][coluna] != ' ')
            {
                acertos++;
                barcos[matriz_sol[linha][coluna] - '1'].quantidade++;
                matriz_tiros[linha][coluna] = matriz_sol[linha][coluna];
            }
            else
            {
                errados++;
                matriz_tiros[linha][coluna] = 'X';
            }
        }
	        
        if (acertos >= total_tiros || acertos + errados >= total_tiros)
		{
		    break; 
		}
    }

    limpar_tela();
    printf("-----------------------------------------------------------------------------------\n");
    printf("Tiros: %d\n", acertos + errados);
    printf("Acertados: %d\n", acertos);
    printf("Errados: %d\n", errados);
    printf("-----------------------------------------------------------------------------------\n");
    printf("Barcos de 1: %d | Barcos de 2: %d | Barcos de 3: %d | Barcos de 4: %d | Barcos de 5: %d\n",
           barcos[0].quantidade, barcos[1].quantidade, barcos[2].quantidade, barcos[3].quantidade, barcos[4].quantidade);
    printf("-----------------------------------------------------------------------------------\n");
    imprimir_matriz(matriz_tiros);
    
    mostrar_posicao_barcos(matriz_sol);
}

