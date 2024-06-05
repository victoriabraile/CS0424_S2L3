#include <stdio.h>

int main() {
    
    // Variabili per i numeri inseriti
    int numA, numB;
    // Variabile per la media
    float media;

    printf("Calcola la media aritmetica di due numeri\n");

    // Chiedo all'utente di scrivere il primo numero
    printf("Inserisci il primo numero:");
    scanf("%d", &numA);

    // Chiedo all'utente di scrivere il secondo numero
    printf("Inserisci il secondo numero:");
    scanf("%d", &numB);

    // Calcolo la media aritmetica tra i due numeri
    media = (numA + numB) / 2;

    // Stampo il risultato
    printf("La media aritmetica tra %d e %d è: %.2f\n", numA, numB, media);

    return 0;
}


