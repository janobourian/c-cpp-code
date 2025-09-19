#include <stdio.h>

int main(){
    unsigned long long int num, sum = 0;
    puts("Enter a number: ");
    scanf("%llu", &num);
    while (num > 0){
        sum += num%10;
        num = (num - (num%10))/10;
    }
    printf("The sum of the digits is: %llu\n", sum);
    return 0;
}