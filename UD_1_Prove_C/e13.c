/*
    Data: 01.11.2026
    Author: Thomas De Michele
    Descritpion: programma in che valuti la situazione di uno studente universitario sulla base
    del voto d'esame e della percentuale di frequenza alle lezioni. Il programma deve:
    1. Acquisire il voto dell'esame (un numero float compreso tra 0.0 e 30.0).
    2. Acquisire la percentuale di presenza alle lezioni (un numero intero da 0 a 100).
    3. Utilizzare strutture if-else innestate secondo la seguente logica:
        • Se il voto è inferiore a 18: lo studente è Bocciato.
        • Se il voto è maggiore o uguale a 18: lo studente ha superato l'esame. All'interno di
          questo blocco, verificare la frequenza:
        • Se il voto è esattamente 30.0 E la percentuale di presenza è >= 85%, stampare
          "Esame superato con Lode e Menzione d'onore!".
        • Altrimenti, stampare "Esame superato con successo.".
*/
#include <stdio.h>
int main () {
    float voto = 0;
    int presenze = 0;
    char junk;

    printf("Inserisci il voto (da 0 a 30): ");
    scanf("%f", &voto);
    junk = getchar();
    printf("Inserisci il numero di presenze (da 0 a 100): ");
    scanf("%d", &presenze);
    junk = getchar();

    if(voto < 18) {
        printf("Lo studente è bocciato.\n");
    } else {
        printf("Lo studente ha superato l'esame.\n");
        if(voto == 30 && presenze >= 85) {
            printf("Esame superato con Lode e Menzione d'onore!\n");
        } else {
            printf("Esame superato con successo.");
        }
    }

    return 0;
}