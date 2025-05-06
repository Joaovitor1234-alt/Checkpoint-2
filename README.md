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
