/*
    Data: 02.11.2026
    Author: Thomas De Michele
    Description: Programma che esegue lo scambio di due variabili. Valori inseriti dall'utente.
*/
#include <stdio.h>
int main () {
    int a = 0;
    int b = 0;
    int tmp = 0;    // variabile temporanea per lo scambio dei valori
    char junk;

    printf("Inserisci il valore a: ");
    scanf("%d", &a);
    junk = getchar ();

    printf("Inserisci il valore b: ");
    scanf("%d", &b);
    junk = getchar ();

    printf("Valori inseriti: %d, %d\n", a, b);

    printf("\n");

    //scambio i valori delle variabili
    tmp = a;
    a = b;
    b = tmp;

    printf("Valori scambiati: %d, %d\n", a, b);
    printf("--------------------------------------------------------------------------------\n");
    return 0;
}