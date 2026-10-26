/*
    Data: 26.10.2026
    Author: Thomas De Michele
    Description: Programma che dati due valori calcola la media
*/
#include <stdio.h>
int main () {
    // dichiarazione variabili
    int n1 = 0;
    int n2 = 0;
    float avg = 0;
    char junk;
    
    // fase di input/output
    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);
    junk = getchar();   //pulizia del buffer

    // calcolo la media in avg
    avg = (n1 + n2) / 2;

    // comunicazione della media
    printf("La media vale: %f\n", avg);
    return 0;
}