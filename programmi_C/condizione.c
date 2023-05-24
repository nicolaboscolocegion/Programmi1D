#include<stdio.h>

int main(){

    int input = 0;
    printf("Inserisci un numero ");
    scanf("%d", &input);

    // condizione, se quello dentro alle () e' vero allora viene eseguito il codice dentro alle {}
    if(input == 5){
        printf("Il tuo numero e' uguale a 5");
        int a;
    }else{//, se quello dentro alle () e' falso allora viene eseguito il codice dentro alle {} dell'else
        printf("il numero non e' uguale a 5");
    }

    //NOTA: if puo' essere utilizzato da solo

    /*
    le varie operazione che si posso usare come condizione
    == ugulianza 
    > maggiore
    < minore
    => maggiore o uguale
    <= minore o uguale 
    */
    int x =0;  
    printf("inserisci un numero");
    scanf("%d",&x);

    if(x>10){
        printf("x e' maggiore di 10");
    }else if(x<5){
        printf("x e'minore di 5");
    }
   
    
    return 0;
}
