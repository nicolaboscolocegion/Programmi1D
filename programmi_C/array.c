#include<stdio.h>

#define SIZE 5

int main(){

    //dichiarazione array: tipo nome[dimensione] = {val1, val2,...}
    int array[SIZE]= {1,2,3,4,5};

    //modifico il valore in posizione 3
    array[3]=10;
    //gli array hanno dimensione da 0 a dimensione-1 

    //prendo il valore in posizione 2
    int a= array[2];

    printf("var a= %d\n", a);

    printf("array[4]: %d\n", array[3]);

    return 0;
}
