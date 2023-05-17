//calcolo della somma
#include <stdio.h>

int main() {

    //variabili per gli addendi
    float n1 = 0;
    float n2 = 0;
    
    printf("Questo programma fa somme tra due numeri\n");

    //input addendi
    printf("Numero 1: ");
    scanf("%f", &n1);
    printf("Numero 2: ");
    scanf("%f", &n2);

    //calcolo somma
    float sum = n1 + n2;

    //output somma
    printf("somma: %f\n", sum);

    return 0;

}