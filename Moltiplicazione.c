#include <stdio.h>

int main() {
    // Variabili per i numeri da inserire
    int numA, numB;
    // Variabile per il prodotto
    int prodotto;

    printf("Calcola il prodotto tra due fattori\n");

    // Chiedo all'utente di scrivere il primo numero
    printf("Inserisci il primo fattore:");
    scanf("%d", &numA);

    // Chiedo all'utente di inserire il secondo numero
    printf("Inserisci il secondo fattore:");
    scanf("%d", &numB);

    // Calcolo il prodotto tra i due fattori
    prodotto = numA * numB;

    // Stampo il risultato
    printf("Il risultato del prodotto tra i due fattori %d e %d è: %d\n", numA, numB, prodotto);

    return 0;
}