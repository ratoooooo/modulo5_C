#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define MAX 100

typedef struct
{
    int pontos;
    char nome[50];
    char op;
} JOGOQUIZ;

void menu();
void escolha1(JOGOQUIZ quiz[], int jogador);
void escolha2(JOGOQUIZ quiz[], int jogador);
void escolha3(JOGOQUIZ quiz[], int jogador);
void mostrarRanking(JOGOQUIZ quiz[], int jogador);
void escolhaAleatoriaTema(JOGOQUIZ quiz[], int jogador);
void limpar();

void main()
{
    setlocale(LC_ALL, "");
    system("cls");
    JOGOQUIZ quiz[MAX];

    int op;
    int jogador = 0;

    do
    {
        system("cls");
        menu();
        scanf("%d", &op);

        if (op != 5)
        {
            printf("\nInsira o seu nome antes de começar o jogo: ");
            scanf("%s", quiz[jogador].nome);
        }

        printf("\n");
        switch (op)
        {
        case 1:
            escolha1(quiz, jogador);
            jogador++;
            mostrarRanking(quiz, jogador);
            break;
        case 2:
            escolha2(quiz, jogador);
            jogador++;
            mostrarRanking(quiz, jogador);
            break;
        case 3:
            escolha3(quiz, jogador);
            jogador++;
            mostrarRanking(quiz, jogador);
            break;
        case 4:
            escolhaAleatoriaTema(quiz, jogador);
            jogador++;
            mostrarRanking(quiz, jogador);
            break;
        case 5:
            printf("Obrigado por jogar! Agora é hora de estudar.\n");
            break;
        default:
            printf("Opção inválida. Por favor, tente novamente.\n");
            break;
        }
        system("cls");
        
        if (op != 5)
        {
            printf("Deseja jogar novamente?\n");
            printf("1 - SIM\n");
            printf("2 - NÃO\n");
            scanf("%d", &op);
            
            if (op == 2)
            {
                printf("Obrigado por jogar! Agora é hora de estudar.\n");
                break;
            }
            else if (op != 1)
            {
                printf("Opção inválida. Por favor, tente novamente.\n");
                break; 
            }
        }
        
    } while (op != 2 && op != 5);
}


void menu()
{
    printf("Escolha o tema do quiz:\n");
    printf("1 - Linguagem C\n");
    printf("2 - Futebol\n");
    printf("3 - Sistema Solar\n");
    printf("4 - Tema Aleatório\n");
    printf("5 - Sair\n");
    printf("Insira uma opção: ");
}

void escolha1(JOGOQUIZ quiz[], int jogador)
{
    int pontos = 0;
    int indice = jogador;
    system("cls");

    // Pergunta 1
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("1. O que significa o comando printf na linguagem C?\n");
    printf("(a) ler      (b) escrever\n");
    printf("(c) copiar   (d) colar\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 2
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("2. O que significa o comando scanf na linguagem C?\n");
    printf("(a) copiar       (b) colar\n");
    printf("(c) escrever     (d) ler\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 3
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("3. Qual comando é usado para definir uma função na linguagem C?\n");
    printf("(a) int      (b) void\n");
    printf("(c) string   (d) float\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 4
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("4. Qual é o operador de incremento em C?\n");
    printf("(a) --       (b) ++\n");
    printf("(c) +=      (d) -=\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 5
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("5. Qual é o tipo de dado utilizado para armazenar caracteres em C?\n");
    printf("(a) char     (b) int\n");
    printf("(c) float    (d) string\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 6
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("6. Qual é o operador de comparação 'igual a' em C?\n");
    printf("(a) >=      (b) <=\n");
    printf("(c) ==      (d) !=\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 7
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("7. Qual é o comando utilizado para fazer uma seleção condicional em C?\n");
    printf("(a) for     (b) switch\n");
    printf("(c) while   (d) if\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 8
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("8. O que é um ponteiro em C?\n");
    printf("(a) Um tipo de dado\n");
    printf("(b) Uma função\n");
    printf("(c) Um operador\n");
    printf("(d) Uma variavel especial\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

	// Pergunta 9
	printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
	printf("9. Qual é a utilização principal da estrutura switch em C?\n");
	printf("(a) Realizar loops\n");
	printf("(b) Fazer seleção condicional\n");
	printf("(c) Manipular strings\n");
	printf("(d) Alocar memória dinamicamente\n");
	scanf(" %c", &quiz[jogador].op);
	quiz[jogador].op == 'b' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
	limpar();

    // Pergunta 10
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("10. Qual é o operador lógico utilizado para a negação em C?\n");
    printf("(a) &&        (b) ||\n");
    printf("(c) !         (d) ^\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    quiz[indice].pontos = pontos;
}

void escolha2(JOGOQUIZ quiz[], int jogador)
{
    int pontos = 0;
    int indice = jogador;
    system("cls");

    // Pergunta 1
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("1. Qual país foi o vencedor do Mundial de 2022\n");
    printf("(a) Brasil      (b) Alemanha\n");
    printf("(c) França      (d) Argentina\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 2
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("2. Quantas seleções participaram do mundial de 2010\n");
    printf("(a) 42      (b) 48\n");
    printf("(c) 32      (d) 16\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 3
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("3. Qual jogador marcou o gol mais rápido da história das Copas do Mundo?\n");
    printf("(a) Hakan Sükür      (b) Roger Milla\n");
    printf("(c) Ronaldo         (d) Clint Dempsey\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 4
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("4. Quem é o maior artilheiro da história da seleção portuguesa?\n");
    printf("(a) Ruben Amorim      (b) Ronaldo\n");
    printf("(c) Paulinho         (d) Abel\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 5
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("5. Qual jogador foi artilheiro da Copa do Mundo de 2014?\n");
    printf("(a) Miroslav Klose      (b) Lionel Messi\n");
    printf("(c) Neymar              (d) Thomas Müller\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 6
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("6. Qual seleção venceu a Copa do Mundo de 2006?\n");
    printf("(a) Brasil      (b) FRança\n");
    printf("(c) Itália      (d) Alemanha\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 7
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("7. Qual jogador marcou o gol mais bonito da história das Copas do Mundo?\n");
    printf("(a) Diego Maradona      (b) Zinedine Zidane\n");
    printf("(c) Pelé                (d) James Rodríguez\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 8
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("8. Qual país sediou a Copa do Mundo de 2010?\n");
    printf("(a) Alemanha      		(b)Portugal\n");
    printf("(c) Africa do sul       (d) Rússia\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 9
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("9. Quem foi o treinador da seleção alemã na conquista da Copa do Mundo de 2014?\n");
    printf("(a) Joachim Löw      (b) Jürgen Klinsmann\n");
    printf("(c) Rudi Völler      (d) Franz Beckenbauer\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 10
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("10. Qual jogador venceu o prêmio de melhor do mundo da FIFA em 2020?\n");
    printf("(a) Lionel Messi      (b) Cristiano Ronaldo\n");
    printf("(c) Robert Lewandowski      (d) Neymar\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    quiz[indice].pontos = pontos;
}

void escolha3(JOGOQUIZ quiz[], int jogador)
{
    int pontos = 0;
    int indice = jogador;
    system("cls");

    // Pergunta 1
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("1. Qual é o planeta mais próximo do Sol?\n");
    printf("(a) Vênus      (b) Terra\n");
    printf("(c) Marte      (d) Mercúrio\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 2
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("2. Qual é o maior planeta do sistema solar?\n");
    printf("(a) Júpiter      (b) Saturno\n");
    printf("(c) Netuno       (d) Urano\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 3
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("3. Qual é o planeta mais próximo da Terra?\n");
    printf("(a) Marte        (b) Vênus\n");
    printf("(c) Júpiter      (d) Mercúrio\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 4
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("4. Qual é o planeta conhecido por seus anéis?\n");
    printf("(a) Júpiter      (b) Netuno\n");
    printf("(c) Saturno      (d) Urano\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 5
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("5. Qual é o menor planeta do sistema solar?\n");
    printf("(a) Terra        (b) Marte\n");
    printf("(c) Mercúrio     (d) Vênus\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 6
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("6. Qual é o único planeta conhecido por abrigar vida?\n");
    printf("(a) Terra        (b) Marte\n");
    printf("(c) Júpiter      (d) Saturno\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 7
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("7. Qual é o planeta mais distante do Sol?\n");
    printf("(a) Júpiter      (b) Neptuno\n");
    printf("(c) Plutão       (d) Urano\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 8
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("8. Qual é o planeta conhecido por suas características vulcânicas e atmosfera venenosa?\n");
    printf("(a) Vênus        (b) Marte\n");
    printf("(c) Mercúrio     (d) Júpiter\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 9
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("9. Qual é o planeta conhecido por seus anéis e sua grande quantidade de luas?\n");
    printf("(a) Júpiter      (b) Netuno\n");
    printf("(c) Saturno      (d) Urano\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 10
    printf("Atualmente, %s, você tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("10. Qual é o planeta conhecido por sua cor vermelha e suas tempestades de poeira?\n");
    printf("(a) Terra        (b) Marte\n");
    printf("(c) Vênus        (d) Mercúrio\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta está correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    quiz[indice].pontos = pontos;
}

void mostrarRanking(JOGOQUIZ quiz[], int jogador)
{
    int i, j;
    JOGOQUIZ temp;
    system("cls");

    int limite;
    if (jogador < 5) {
        limite = jogador;
    } else {
        limite = 5;
    }

    for (i = 0; i < jogador; i++)
    {
        for (j = i + 1; j < jogador; j++)
        {
            if (quiz[i].pontos < quiz[j].pontos)
            {
                temp = quiz[i];
                quiz[i] = quiz[j];
                quiz[j] = temp;
            }
        }
    }

    printf("===== RANKING ======================\n");
    printf("Posição\tJogador\t\tPontos\n");
    for (i = 0; i < limite; i++)
    {
        printf("%dº\t%s\t\t%d\n", i + 1, quiz[i].nome, quiz[i].pontos);
    }
    printf("=========================0=========\n");
    limpar();
}

void limpar()
{
    printf("\nPressione qualquer tecla para continuar...\n");
    getchar();
    getchar();
    system("cls");
}

void escolhaAleatoriaTema(JOGOQUIZ quiz[], int jogador)
{
    int temaAleatorio = rand() % 3;

    if (temaAleatorio == 0)
    {
        escolha1(quiz, jogador); // Tema Linguagem C
    }
    else if (temaAleatorio == 1)
    {
        escolha2(quiz, jogador); // Tema Futebol
    }
    else
    {
    	escolha3(quiz, jogador); // Tema Sistema Solar
	}
}

