#include <stdio.h>
#include <time.h>

int main(){
    clock_t start_time, end_time;
    unsigned long long int num = 0;
    start_time = clock();
    for(unsigned long long int i = 0; i < 100000000000; i++){
        num += i;
    }
    end_time = clock();
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}