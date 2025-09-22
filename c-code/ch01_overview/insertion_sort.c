#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
    clock_t start_time, end_time;
    int N_SIZE = 100000;
    int randomArray[N_SIZE];
    srand(time(NULL));

    for (int i = 0; i < N_SIZE; i++) {
        randomArray[i] = (rand() % N_SIZE) + 1;
    }

    start_time = clock();

    // Insertion sort algorithm
    for (int i = 1; i < N_SIZE; i++) {
        int j = i - 1;
        while (j >= 0 && randomArray[j] > randomArray[j + 1]) {
            int temp = randomArray[j];
            randomArray[j] = randomArray[j + 1];
            randomArray[j + 1] = temp;
            j--;
        }
    }

    end_time = clock();
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}
