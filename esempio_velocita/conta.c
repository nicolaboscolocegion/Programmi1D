#include <unistd.h>
#include <sys/time.h>
#include <stdio.h>

int main(int argc, char const *argv[]){
    struct timeval start, end;
    gettimeofday(&start, NULL);
    
    
    

    int a;
    for (int i = 0; i < 2147483647; i++)a++;
    
    gettimeofday(&end, NULL);
   
    double time_taken = end.tv_sec + end.tv_usec / 1e6 - start.tv_sec - start.tv_usec / 1e6; // in seconds

    printf("il programma ci ha messo %.10f s\n", time_taken);
    
    return 0;
}
