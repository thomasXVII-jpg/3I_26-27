/*
    Data: 16.11.2026
    Author: Thomas De Michele
    Description: Programma che richide quattro valori da tastiera. Deve comunicare:
                    - Il valore maggiore;
                    - La media;
                    - Quale somma è maggiore tra v1+v2 e v3+v4.
*/
#include <stdio.h>
int main () {
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int max = 0;
    float media = 0;
    int sum1 = 0;
    int sum2 = 0;
    char junk;

    // acquisizione dei valori
    printf("Inserisci il primo valore: ");
    scanf("%d", &v1);
    junk = getchar();

    printf("Inserisci il secondo valore: ");
    scanf("%d", &v2);
    junk = getchar();

    printf("Inserisci il terzo valore: ");
    scanf("%d", &v3);
    junk = getchar();

    printf("Inserisci il quarto valore: ");
    scanf("%d", &v4);
    junk = getchar();

    // serie di condizioni per la stampa del valore maggiore
    if(v1 > v2) {
        printf("Il maggiore è %d\n", v1);
    } else if(v2 > v3) {
        printf("Il maggiore è %d\n", v2);
    } else if(v3 > v4) {
        printf("Il maggiore è %d\n", v3);
    } else {
        printf("Il maggiore è %d\n", v4);
    }

    // comunicazione della media
    media = (v1 + v2 + v3 + v4) / 4;
    printf("La media vale: %.2f\n", media);

    // calcolo delle due somme
    sum1 = v1 + v2;
    sum2 = v3 + v4;
    printf("La prima somma vale: %d\n", sum1);
    printf("La seconda somma vale: %d\n", sum2);

    // condizione per la stampa della somma maggiore
    if(sum1 > sum2) {
        printf("La somma maggiore è: %d\n", sum1);
    } else {
        printf("La somma maggiore è: %d\n", sum2);
    }
    return 0;
}