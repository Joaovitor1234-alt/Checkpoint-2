# Checkpoint-2
#include <stdio.h>
#include <string.h>

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
