/*
    Data: 01.11.2026
    Author: Thomas De Michele
    Descritpion: programma che simuli la cassa di un negozio. Il programma deve:
    1. Chiedere all'utente di inserire il prezzo unitario di un articolo (valore float) e la quantità
    acquistata (valore intero).
    2. Calcolare il prezzo totale lordo (prezzo_unitario * quantita).
    3. Applicare una politica di sconto basata sulla quantità:
        • Se la quantità acquistata è maggiore di 10, viene applicato uno sconto del 15% sul
        totale.
        • Altrimenti, non viene applicato alcuno sconto.
    4. Stampare a schermo il totale lordo, l'eventuale sconto applicato e il prezzo finale netto
    (formattato con due cifre decimali).
*/
#include <stdio.h>
int main () {
    float prezzo_unitario = 0;
    int quantita = 0;
    float prezzo_tot_lordo = 0;
    float sconto = 0;
    float prezzo_tot_netto = 0;
    char junk;

    // chideo di inserire il prezzo e la quantità
    printf("Inserisci il prezzo: ");
    scanf("%f", &prezzo_unitario);
    junk = getchar();
    
    printf("Inserisci la quantità: ");
    scanf("%d", &quantita);
    junk = getchar();

    // calcolo del prezzo lordo
    prezzo_tot_lordo = prezzo_unitario * quantita;

    // calcolo dello sconto e comunicazione dei prezzi totali
    if(quantita > 10) {
        sconto = (prezzo_tot_lordo / 100) * 15;
        prezzo_tot_netto = prezzo_tot_lordo - sconto;
        printf("Lo sconto applicato è del %.2f\n", sconto);
    }

    printf("Il totale lordo è: %.2f\n", prezzo_tot_lordo);
    printf("Il totale netto è: %.2f\n", prezzo_tot_netto);
    
    return 0;
}