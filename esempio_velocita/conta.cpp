#include<iostream>
#include <chrono>

using namespace std;
//using namespace std::chrono;
int main(int argc, char const *argv[])
{
    auto start = std::chrono::high_resolution_clock::now();
    
    int a=0;
    for (int i = 0; i < 2147483647; i++)    a++;
    
    auto stop = chrono::high_resolution_clock::now();

    auto finish = chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "il programma ci ha messo " << elapsed.count() << " s\n";

    clock_t end = clock();
    
    return 0;
}