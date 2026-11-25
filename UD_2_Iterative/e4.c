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

    printf("Inserisci un numero: ");
    scanf("%d", &v1);
    junk = getchar();

    if(v1 < 100) {
        cnt = v1;
        while(cnt <= 100) {
            if(cnt %2 == 0) {
                printf("%d ", cnt);
            }
            cnt++;
        }
    } else {
        printf("Serie non disponibile.\n");
    }
    return 0;
}