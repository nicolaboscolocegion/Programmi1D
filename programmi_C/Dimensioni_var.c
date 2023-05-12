//https://learn.microsoft.com/it-it/cpp/c-language/cpp-integer-limits?view=msvc-170

#include<limits.h>
#include<stdio.h>
int main(){
    //rappresentano interi
    char carattere;
    short corto;
    int intero;
    long lungo;

    printf("dimensione del char %d byte\n", sizeof(char));
    printf("dimensione del short %d byte\n", sizeof(short));
    printf("dimensione del int %d byte\n", sizeof(int));
    printf("dimensione del long %d byte\n", sizeof(long));

    intero=INT_MAX;
    intero++;
    lungo=INT_MAX;
    lungo++;
    printf("dimensione massima degli interi e': %d \n", INT_MAX);
    printf("overflow %d\n", intero);


    

}
