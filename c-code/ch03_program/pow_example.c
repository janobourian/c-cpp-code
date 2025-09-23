#include <stdio.h>

double pow_example(int base, int exp){
    double result = 1.0;
    if(exp < 0){
        for (int i = 0; i < -exp; i++){
            result /= base;
        }
        return result;
    } else if (exp > 0){
        for (int i = 0; i < exp; i++){
            result *= base;
        }
        return result;
    } else {
        return result;
    }
}

int main(){
    double result;
    result = pow_example(2, 3);
    printf("%d^%d = %lf\n", 2, 3, result);
    result = pow_example(2, -3);
    printf("%d^%d = %lf\n", 2, -3, result);
    result = pow_example(2, 0);
    printf("%d^%d = %lf\n", 2, 0, result);
    result = pow_example(0, 0);
    printf("%d^%d = %lf\n", 0, 0, result);
    return 0;
}