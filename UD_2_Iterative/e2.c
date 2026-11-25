/*
    Author: Thomas De Michele
    Date:   25.11.2026
    Abstract: Realizza un programma C che richiede in input un valore intero, visualizza tutti i valori da 1 al valore inserito.
*/
#include <stdio.h>
int main () {
    int v1 = 0;
    int cnt = 0;
    char junk;

    // fase di input iniziale
    printf("Inserisci un numero: ");
    scanf("%d", &v1);
    junk = getchar();

    // fase di stampa dei valori da 1 al valore inserito
    while(v1 > cnt) {
        printf("%d\n", cnt);
        cnt++;
    }
    return 0;
}