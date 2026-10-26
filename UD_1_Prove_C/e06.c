/*
    Data: 26.10.2026
    Author: Thomas De Michele
    Description: Programma che dato un numero dica se è positivo, negativo o nullo
*/
#include <stdio.h>
int main () {
    int n = 0;

    printf("Inserisci il numero: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("%d e' positivo\n", n);
    } else if (n <= 0) {
        if ( n < 0) {
            printf("%d e' negativo\n", n);
        } else {
            printf("%d e' nullo\n", n);
        }
    }
    return 0;
}