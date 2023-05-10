#include<stdio.h>

int main(){
    
    int intera=2345;
    //(char) e' un cast permette di cambiare tipo alla variabile
    char corto=(char)intera;
   
    printf("intero vale %d\n", corto);

    float virgola=intera;
    printf("il float vale %f\n",virgola);

    float b=23.7;
    int a=b; 
    printf("il valore di a: %d",a);
    
    

    return 0;
}
