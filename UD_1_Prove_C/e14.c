/*
    Data: 04.11.2026
    Author: Thomas De Michele
    Description: programma in C per calcolare il costo di una bolletta della luce in base al consumo
    energetico in kWh (float) e alla tipologia di utente (intero: 1 per Residente, 2 per Non
    Residente).
    Il programma deve prima verificare che la tipologia sia valida (1 o 2) e che il consumo non sia
    negativo. Successivamente, applica le tariffe a scaglioni:
        • Se l'utente è Residente (1):
            • Primi 150 kWh consumati: tariffa di 0.20 €/kWh.
            • Per i kWh eccedenti i 150 fino a 300 kWh: tariffa di 0.30 €/kWh.
            • Per i kWh oltre i 300: tariffa di 0.40 €/kWh.
        • Se l'utente è Non Residente (2):
            • Primi 150 kWh consumati: tariffa di 0.35 €/kWh.
            • Per i kWh eccedenti i 150 fino a 300 kWh: tariffa di 0.45 €/kWh.
            • Per i kWh oltre i 300: tariffa di 0.55 €/kWh.

    Infine, aggiungi una quota fissa di gestione pari a 15.50 € per i residenti e 25.00 € per i non
    residenti, stampando il dettaglio dei calcoli.
*/
#include <stdio.h>
int main () {
    float consumo = 0;  // kWh
    int Residente = 0;
    int Non_Residente = 0;
    int scelta = 0;
    float tariffa = 0;
    float  Q_1 = 15.50;
    float  Q_2 = 25.00;
    int corretto;
    char junk;

    printf("Scegli la tipologia: ");
    scanf("%d", &scelta);
    junk = getchar();

    printf("Inserisci il consumo : ");
    scanf("%f", &consumo);
    junk = getchar();

    corretto = 0;
    if(scelta == 1 && consumo > 0) {
       if(consumo <= 150) {
        tariffa = tariffa + 0.20;
       }
       if(consumo > 150 && consumo <= 300) {
        tariffa = tariffa + 0.30;
       }
       if(consumo > 300) {
        tariffa = tariffa + 0.40;
       }
       Q_1 = Q_1 + tariffa;
       printf("Bolletta per i residenti: %f\n", Q_1);
       corretto = 1;
    }

    if(scelta == 2 && consumo > 0) {
        if(consumo <= 150) {
            tariffa = tariffa + 0.35;
        }
        if(consumo > 150 && consumo <= 300) {
            tariffa = tariffa + 0.45;
        }
        if(consumo > 300) {
            tariffa = tariffa + 0.55;
        }
        Q_2 = Q_2 + tariffa;
        printf("Bolletta per i non residenti: %f\n", Q_2);
        corretto = 1;
    }

    if(!corretto) {      // !corretto è uguale a corretto == 0 oppure corretto == false
        printf("Errore nei dati di input!\n");
    }

    return 0;
}