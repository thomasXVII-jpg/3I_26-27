/*
    Realizza un programma che richiede in input il giorno e il mese dell'anno,
    es gg=10 mm=5
    Il programma calcola e comunica:
    - quanti giorni sono passati dall'inizio dell'anno.
    - quanti giorni mancano al Natale.

    NB: Consideriamo che febbraio abbia 28 giorni; il numero di giorni e del mese deve essere corretto
    cioè non può essere gg=29 mm=2 oppure gg=31 mm=4
*/
#include <stdio.h>
int main() {
    int gg, mm = 0;
    char junk;

    printf("Inserisci il giorno: ");
    scanf("%d", &gg);
    junk = getchar ();

    printf("Inserisci il mese: ");
    scanf("%d", &mm);
    junk = getchar ();
    

    return 0;
}