#include <stdio.h>

int main(){
    int a, b, sum;
    printf("%s", "Enter the first number: ");
    scanf("%d", &a);
    printf("%s", "Enter the second number: ");
    scanf("%d", &b);
    if (a == b){
        sum = a * 2;
    } else {
        sum = a + b;
    }
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}