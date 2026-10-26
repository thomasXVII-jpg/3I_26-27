/*
    Data: 26.10.2026
    Author: Thomas De Michele
    Description: Programma che rileva la temperatura esterna: se è maggiore di 25 accendi irrigazione, altrimenti resta spento
*/
#include <stdio.h>
int main () {
    int temp = 0;

    printf("Inserisci la temperatura: ");
    scanf("%d", &temp);

    printf("Ci sono %d°C, ", temp);
    
    if (temp >= 25) {
        printf("Accendi irrigazione.\n");
    } else {
        printf("Irrigazione spenta.\n");
    }
    return 0;
}