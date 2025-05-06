// Checkpoint-2
#include <stdio.h>
#include <string.h>

// Integrantes: Victor Hugo Almeida Bahia, RM 564633
               // João Vitor Betiolli, RM 561835
              //  João Victor Caitano Tabuso, RM 562525
  
// Funcao para calcular a sequencia de Fibonacci
void fibonacci(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    // Calculando a sequencia de Fibonacci
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Exibindo a sequencia
    printf("Sequencia de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

// Funcao para calcular os fatoriais
void fatoriais(int n) {
    int fat[n];
    fat[0] = 1;

      // Calculando os fatoriais
    for (int i = 1; i <= n; i++) {
        fat[i] = fat[i-1] * i;
    }

    // Exibindo os resultados
    printf("Fatoriais:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d! = %d\n", i, fat[i]);
    }
}

// Funcao para verificar se uma palavra e um palindromo
void verificar_palindromo(char palavra[]) {
    int len = strlen(palavra);
    int is_palindrome = 1;

    // Verificando se a palavra e um palindromo
    for (int i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    // Exibindo o resultado
    if (is_palindrome) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra NAO e um palindromo.\n");
    }
}

// Funcao para verificar se uma substring esta contida em uma string
void verificar_substring(char str1[], char str2[]) {
    if (strstr(str1, str2) != NULL) {
        printf("A segunda string esta contida na primeira.\n");
    } else {
        printf("A segunda string NAO esta contida na primeira.\n");
    }
}
int main() {
    int opcao, n;
    char palavra[101], str1[101], str2[101];

    do {
        // Exibindo o menu
        printf("===== MENU DE EXERCICIOS =====\n");
        printf("1 - Sequencia de Fibonacci;\n");
        printf("2 - Fatoriais;\n");
        printf("3 - Verificar Palindromo;\n");
        printf("4 - Verificar Substring;\n");
        printf("Digite a opcao desejada (1 a 4, ou 0 para sair): ");
        scanf("%d", &opcao);
        getchar(); // Para limpar o buffer apos o scanf

        switch (opcao) {
            case 1:
                // Opcao 1: Sequencia de Fibonacci
                printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
                scanf("%d", &n);
                if (n >= 1 && n <= 50) {
                    fibonacci(n);
                } else {
                    printf("Valor invalido, N deve estar entre 1 e 50.\n");
                }
                break;
            case 2:
                // Opcao 2: Fatoriais
                printf("Digite um numero inteiro (1 a 20): ");
                scanf("%d", &n);
                if (n >= 1 && n <= 20) {
                    fatoriais(n);
                } else {
                    printf("Valor invalido, N deve estar entre 1 e 20.\n");
                }
                break;
            case 3:
                // Opcao 3: Verificar Palindromo
                printf("Digite uma palavra: ");
                scanf("%s", palavra);
                verificar_palindromo(palavra);
                break;
            case 4:
                // Opcao 4: Verificar Substring
                printf("Digite a primeira string: ");
                scanf("%s", str1);
                printf("Digite a segunda string: ");
                scanf("%s", str2);
                verificar_substring(str1, str2);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida, tente novamente.\n");
        }

        printf("\n");

    } while (opcao != 0);

    return 0;
}

