//cast impliciti ed espliciti e i comportamenti di essi
#include<stdio.h>

int main(){
    
    int intera=2345;
    //(char) e' un cast permette di cambiare tipo alla variabile
    char corto=(char)intera;
   
    printf("intero vale %d\n", corto);

    //cast implicito, sarebbe come scrivere : float virgola=(float)intera;
    float virgola=intera;
    printf("il float vale %f\n",virgola);

    float b=23.7;
    int a=b; 
    printf("il valore di a: %d",a);
    
    

    return 0;
}
