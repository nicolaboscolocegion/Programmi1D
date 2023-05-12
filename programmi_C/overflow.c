//esempio di segmentation fault, il programa crasha per l'ecessivo utilizzo di memoria

int rec();

int main(){
    rec();
    return 0;
}

int rec(){
    int a;
    return rec();
}
