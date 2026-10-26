/*
    Data: 26.10.2026
    Author: Thomas De Michele
    Description: Programma che dati tre voti calcoli la media e comunichi se promosso o bocciato
*/
#include <stdio.h>
int main () {
    float v1 = 0;
    float v2 = 0;
    float v3 = 0;
    float avg = 0;

    printf("Inserisci il pirmo voto: ");
    scanf("%f", &v1);

    printf("Inserisci il secondo voto: ");
    scanf("%f", &v2);
    
    printf("Inserisci il terzo voto: ");
    scanf("%f", &v3);

    avg = (v1 + v2 + v3) / 3;

    printf("La tua media e': %f\n", avg);

    if (avg >= 6) {
        printf("Sei promosso\n");
    } else {
        printf("Sei bocciato\n");
    }
    return 0;
}