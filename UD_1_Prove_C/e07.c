/*
    Data: 26.10.2026
    Author: Thomas De Michele
    Description: Programma che richiede due lati di una figura;
    se i lati sono uguali calcolare il perimetro, se sono diversi calcolare l'area.
*/
#include <stdio.h>
int main () {
    float l1 = 0;
    float l2 = 0;
    float p = 0;
    float A = 0;

    printf("Inserisci il primo lato: ");
    scanf("%f", &l1);

    printf("Inserisci il secondo lato: ");
    scanf("%f", &l2);

    if (l1 == l2) {
        p = l1 * 4;
        printf("Il perimtetro vale: %f\n", p);
    } else {
        A = l1 * l2;
        printf("L'area vale: %f\n", A);
    }
    return 0;
}