#include <stdio.h>
#include <string.h>

#define NUM_ATTR 5

typedef struct {
    char nome[30];
    int populacao;
    int area;
    int pib;
    int expectativaDeVida;
    int densidadeDemografica;
} Carta;

// Função para exibir atributos disponíveis
void exibirAtributosDisponiveis(int skip) {
    printf("Escolha um atributo:\n");
    if (skip != 1) printf("1 - População\n");
    if (skip != 2) printf("2 - Área\n");
    if (skip != 3) printf("3 - PIB\n");
    if (skip != 4) printf("4 - Expectativa de Vida\n");
    if (skip != 5) printf("5 - Densidade Demográfica\n");
}

// Função para pegar valor de atributo
int obterAtributo(Carta carta, int opcao) {
    switch (opcao) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return carta.expectativaDeVida;
        case 5: return carta.densidadeDemografica;
        default: return -1;
    }
}

// Função para comparar um atributo
int compararAtributo(int valor1, int valor2, int atributo) {
    if (atributo == 5) // densidade demográfica -> menor vence
        return valor1 < valor2 ? 1 : (valor1 > valor2 ? 2 : 0);
    else
        return valor1 > valor2 ? 1 : (valor1 < valor2 ? 2 : 0);
}

// Nome do atributo (para exibição)
const char* nomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Expectativa de Vida";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int main() {
    // Cartas fixas
    Carta carta1 = {"Brasil", 213000000, 8516000, 1869000, 75, 25};
    Carta carta2 = {"Alemanha", 83100000, 357000, 3846000, 81, 233};

    int escolha1, escolha2;

    // Escolher primeiro atributo
    do {
        exibirAtributosDisponiveis(0);
        printf("Digite o número do primeiro atributo: ");
        scanf("%d", &escolha1);
        if (escolha1 < 1 || escolha1 > 5) printf("Opção inválida. Tente novamente.\n");
    } while (escolha1 < 1 || escolha1 > 5);

    // Escolher segundo atributo
    do {
        exibirAtributosDisponiveis(escolha1);
        printf("Digite o número do segundo atributo: ");
        scanf("%d", &escolha2);
        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1)
            printf("Opção inválida. Tente novamente.\n");
    } while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1);

    // Obter valores
    int valor1_attr1 = obterAtributo(carta1, escolha1);
    int valor2_attr1 = obterAtributo(carta2, escolha1);
    int valor1_attr2 = obterAtributo(carta1, escolha2);
    int valor2_attr2 = obterAtributo(carta2, escolha2);

    // Comparações
    int resultado1 = compararAtributo(valor1_attr1, valor2_attr1, escolha1);
    int resultado2 = compararAtributo(valor1_attr2, valor2_attr2, escolha2);

    int soma1 = valor1_attr1 + valor1_attr2;
    int soma2 = valor2_attr1 + valor2_attr2;

    printf("\nComparando cartas:\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n\n", carta2.nome);

    printf("%s: %d vs %d -> %s\n", nomeAtributo(escolha1), valor1_attr1, valor2_attr1,
           resultado1 == 1 ? carta1.nome : (resultado1 == 2 ? carta2.nome : "Empate"));

    printf("%s: %d vs %d -> %s\n", nomeAtributo(escolha2), valor1_attr2, valor2_attr2,
           resultado2 == 1 ? carta1.nome : (resultado2 == 2 ? carta2.nome : "Empate"));

    printf("\nSoma dos atributos:\n");
    printf("%s: %d\n", carta1.nome, soma1);
    printf("%s: %d\n", carta2.nome, soma2);

    printf("\nResultado final: ");
    if (soma1 > soma2)
        printf("%s venceu!\n", carta1.nome);
    else if (soma2 > soma1)
        printf("%s venceu!\n", carta2.nome);
    else
        printf("Empate!\n");

    return 0;
}
