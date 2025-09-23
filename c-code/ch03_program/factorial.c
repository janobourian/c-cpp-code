#include <stdio.h>

int factorial(int n){
    if (n <= 1){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("%d! = %d\n", num, result);
    return 0;
}