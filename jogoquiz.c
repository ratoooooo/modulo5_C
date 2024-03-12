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
            printf("\nInsira o seu nome antes de come�ar o jogo: ");
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
            printf("Obrigado por jogar! Agora � hora de estudar.\n");
            break;
        default:
            printf("Op��o inv�lida. Por favor, tente novamente.\n");
            break;
        }
        system("cls");
        
        if (op != 5)
        {
            printf("Deseja jogar novamente?\n");
            printf("1 - SIM\n");
            printf("2 - N�O\n");
            scanf("%d", &op);
            
            if (op == 2)
            {
                printf("Obrigado por jogar! Agora � hora de estudar.\n");
                break;
            }
            else if (op != 1)
            {
                printf("Op��o inv�lida. Por favor, tente novamente.\n");
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
    printf("4 - Tema Aleat�rio\n");
    printf("5 - Sair\n");
    printf("Insira uma op��o: ");
}

void escolha1(JOGOQUIZ quiz[], int jogador)
{
    int pontos = 0;
    int indice = jogador;
    system("cls");

    // Pergunta 1
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("1. O que significa o comando printf na linguagem C?\n");
    printf("(a) ler      (b) escrever\n");
    printf("(c) copiar   (d) colar\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 2
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("2. O que significa o comando scanf na linguagem C?\n");
    printf("(a) copiar       (b) colar\n");
    printf("(c) escrever     (d) ler\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 3
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("3. Qual comando � usado para definir uma fun��o na linguagem C?\n");
    printf("(a) int      (b) void\n");
    printf("(c) string   (d) float\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 4
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("4. Qual � o operador de incremento em C?\n");
    printf("(a) --       (b) ++\n");
    printf("(c) +=      (d) -=\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 5
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("5. Qual � o tipo de dado utilizado para armazenar caracteres em C?\n");
    printf("(a) char     (b) int\n");
    printf("(c) float    (d) string\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 6
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("6. Qual � o operador de compara��o 'igual a' em C?\n");
    printf("(a) >=      (b) <=\n");
    printf("(c) ==      (d) !=\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 7
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("7. Qual � o comando utilizado para fazer uma sele��o condicional em C?\n");
    printf("(a) for     (b) switch\n");
    printf("(c) while   (d) if\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 8
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("8. O que � um ponteiro em C?\n");
    printf("(a) Um tipo de dado\n");
    printf("(b) Uma fun��o\n");
    printf("(c) Um operador\n");
    printf("(d) Uma variavel especial\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

	// Pergunta 9
	printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
	printf("9. Qual � a utiliza��o principal da estrutura switch em C?\n");
	printf("(a) Realizar loops\n");
	printf("(b) Fazer sele��o condicional\n");
	printf("(c) Manipular strings\n");
	printf("(d) Alocar mem�ria dinamicamente\n");
	scanf(" %c", &quiz[jogador].op);
	quiz[jogador].op == 'b' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
	limpar();

    // Pergunta 10
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("10. Qual � o operador l�gico utilizado para a nega��o em C?\n");
    printf("(a) &&        (b) ||\n");
    printf("(c) !         (d) ^\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    quiz[indice].pontos = pontos;
}

void escolha2(JOGOQUIZ quiz[], int jogador)
{
    int pontos = 0;
    int indice = jogador;
    system("cls");

    // Pergunta 1
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("1. Qual pa�s foi o vencedor do Mundial de 2022\n");
    printf("(a) Brasil      (b) Alemanha\n");
    printf("(c) Fran�a      (d) Argentina\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 2
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("2. Quantas sele��es participaram do mundial de 2010\n");
    printf("(a) 42      (b) 48\n");
    printf("(c) 32      (d) 16\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 3
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("3. Qual jogador marcou o gol mais r�pido da hist�ria das Copas do Mundo?\n");
    printf("(a) Hakan S�k�r      (b) Roger Milla\n");
    printf("(c) Ronaldo         (d) Clint Dempsey\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 4
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("4. Quem � o maior artilheiro da hist�ria da sele��o portuguesa?\n");
    printf("(a) Ruben Amorim      (b) Ronaldo\n");
    printf("(c) Paulinho         (d) Abel\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 5
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("5. Qual jogador foi artilheiro da Copa do Mundo de 2014?\n");
    printf("(a) Miroslav Klose      (b) Lionel Messi\n");
    printf("(c) Neymar              (d) Thomas M�ller\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 6
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("6. Qual sele��o venceu a Copa do Mundo de 2006?\n");
    printf("(a) Brasil      (b) FRan�a\n");
    printf("(c) It�lia      (d) Alemanha\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 7
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("7. Qual jogador marcou o gol mais bonito da hist�ria das Copas do Mundo?\n");
    printf("(a) Diego Maradona      (b) Zinedine Zidane\n");
    printf("(c) Pel�                (d) James Rodr�guez\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 8
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("8. Qual pa�s sediou a Copa do Mundo de 2010?\n");
    printf("(a) Alemanha      		(b)Portugal\n");
    printf("(c) Africa do sul       (d) R�ssia\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 9
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("9. Quem foi o treinador da sele��o alem� na conquista da Copa do Mundo de 2014?\n");
    printf("(a) Joachim L�w      (b) J�rgen Klinsmann\n");
    printf("(c) Rudi V�ller      (d) Franz Beckenbauer\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 10
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("10. Qual jogador venceu o pr�mio de melhor do mundo da FIFA em 2020?\n");
    printf("(a) Lionel Messi      (b) Cristiano Ronaldo\n");
    printf("(c) Robert Lewandowski      (d) Neymar\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    quiz[indice].pontos = pontos;
}

void escolha3(JOGOQUIZ quiz[], int jogador)
{
    int pontos = 0;
    int indice = jogador;
    system("cls");

    // Pergunta 1
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("1. Qual � o planeta mais pr�ximo do Sol?\n");
    printf("(a) V�nus      (b) Terra\n");
    printf("(c) Marte      (d) Merc�rio\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'd' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (d).\n");
    limpar();

    // Pergunta 2
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("2. Qual � o maior planeta do sistema solar?\n");
    printf("(a) J�piter      (b) Saturno\n");
    printf("(c) Netuno       (d) Urano\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 3
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("3. Qual � o planeta mais pr�ximo da Terra?\n");
    printf("(a) Marte        (b) V�nus\n");
    printf("(c) J�piter      (d) Merc�rio\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 4
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("4. Qual � o planeta conhecido por seus an�is?\n");
    printf("(a) J�piter      (b) Netuno\n");
    printf("(c) Saturno      (d) Urano\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 5
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("5. Qual � o menor planeta do sistema solar?\n");
    printf("(a) Terra        (b) Marte\n");
    printf("(c) Merc�rio     (d) V�nus\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 6
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("6. Qual � o �nico planeta conhecido por abrigar vida?\n");
    printf("(a) Terra        (b) Marte\n");
    printf("(c) J�piter      (d) Saturno\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 7
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("7. Qual � o planeta mais distante do Sol?\n");
    printf("(a) J�piter      (b) Neptuno\n");
    printf("(c) Plut�o       (d) Urano\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
    limpar();

    // Pergunta 8
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("8. Qual � o planeta conhecido por suas caracter�sticas vulc�nicas e atmosfera venenosa?\n");
    printf("(a) V�nus        (b) Marte\n");
    printf("(c) Merc�rio     (d) J�piter\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'a' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (a).\n");
    limpar();

    // Pergunta 9
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("9. Qual � o planeta conhecido por seus an�is e sua grande quantidade de luas?\n");
    printf("(a) J�piter      (b) Netuno\n");
    printf("(c) Saturno      (d) Urano\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'c' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (c).\n");
    limpar();

    // Pergunta 10
    printf("Atualmente, %s, voc� tem %d pontos.\n", quiz[jogador].nome, pontos);
    printf("10. Qual � o planeta conhecido por sua cor vermelha e suas tempestades de poeira?\n");
    printf("(a) Terra        (b) Marte\n");
    printf("(c) V�nus        (d) Merc�rio\n");
    scanf(" %c", &quiz[jogador].op);
    quiz[jogador].op == 'b' ? (printf("Sua resposta est� correta.\n"), pontos += 10) : printf("A resposta correta era a (b).\n");
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
    printf("Posi��o\tJogador\t\tPontos\n");
    for (i = 0; i < limite; i++)
    {
        printf("%d�\t%s\t\t%d\n", i + 1, quiz[i].nome, quiz[i].pontos);
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

