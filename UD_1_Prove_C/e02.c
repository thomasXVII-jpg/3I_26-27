/*
    Data: 20.10.2026
    Author: Thomas De Michele
    Description: Semplice programma che somma due valori rishiesti in input.
*/
#include <stdio.h>
int main () {
    // dichiarazione delle variabili necessarie al nostro algoritmo
    int a;
    int b;
    int c;
    // junk è usata per pulire il buffer nelle frasi di input.
    char junk;

    a = 0;
    b = 0;
    c = 0;

    // fase di input dei valori A e B.
    printf("Inserisci il primo valore: ");  //output
    scanf("%d", &a);    //input
    junk = getchar ();  //pulizia del buffer

    printf("Inserisci il seconod valore: ");
    scanf("%d", &b);
    junk = getchar();

    // calcolo in C la somma dei valori A e B.
    c = a + b;

    //comunico il valore della somma
    printf("La somma vale: %d", c);
    printf("\n-----------------------\n");
    return 0;
}