/*
    Data: 16.11.2026
    Author: Thomas De Michele
    Description: Programma che richide l'inserimento di un anno, determina se è bisestile oppure no e comunica se Febbraio ha 28 oppure 29 giorni.
*/
#include <stdio.h>
int main () {
    int anno = 0;
    char junk;

    // acquisizione dell'anno
    printf("Insersici l'anno: ");
    scanf("%d", &anno);
    junk = getchar();

    // condizione per la verifica dell'anno bisestile
    if(anno % 400 == 0 && anno % 4 == 0) {
        printf("L'anno è bisestile, Febbraio ha 29 giorni.\n");
    } else {
        printf("L'anno non è bisestile, Febbraio ha 28 giorni.\n");
    }
    return 0;
}