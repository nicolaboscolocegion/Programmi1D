#include<stdio.h>
int main()
{
int a=129;
printf("inserisci un numero intero: ");
scanf("%d", &a);    
printf("il numero inserito: %d\n", a);

float b=0;
printf("inserisci un numero con la virgola: ");
scanf("%f", &b);    
printf("il numero inserito: %.2f\n", b);

char c;
printf("inserisci un carattere: ");
scanf("%s", &c);    
printf("il carattere inserito: %c\n", c);



    return 0;
}
