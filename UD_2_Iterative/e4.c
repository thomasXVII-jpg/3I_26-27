/*
    Author: Thomas De Michele
    Data: 25-11-2026
    Astract:Realizza un programma C che richiede un valore in input, 
    visualizza tutti i valori PARI compresi tra il valore inserito e 100. 
*/
#include <stdio.h>
int main() {
    int v1 = 0;
    int cnt;
    char junk;

    // input valore iniziale
    printf("Inserisci un numero: ");
    scanf("%d", &v1);
    junk = getchar();

    // stampa di tutti i valori PARI compresi tra v1 e 100.
    if(v1 < 100) {  // determino se posso creare la serie numerica.
        cnt = v1;
        while(cnt <= 100) {
            if(cnt %2 == 0) {
                printf("%d ", cnt);
            }
            cnt++;
        }
    } else {    // se il numero è uguale o maggiore di 100, allora non posso realizzare la serie.
        printf("Serie non disponibile.\n");
    }
    return 0;
}