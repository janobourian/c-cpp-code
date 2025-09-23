#include <stdio.h>

void is_prime(int num){
    if (num / 2 <= 0){
        // printf("Invalid number\n");
        return;
    }

    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            // printf("%d is not a prime number\n", num);
            return;
        }
    }
    printf("%d is a prime number\n", num);
    return;
}

int main(){
    int MAX_NUMBER = 1000;
    int num;

    for(int i = 0; i <= MAX_NUMBER; i++){
        is_prime(i);
    }
    return 0;
}