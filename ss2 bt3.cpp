#include<stdio.h>
    int main() {
        int a = 3;
        int b = 5;
        int sum = a + b;
        int Product = a * b; 
        int Difference = a - b; 
        float Quotient = (float)a / b; 
        printf("%d + %d = %d\n", a, b, sum);
        printf("%d - %d = %d\n", a, b, Difference); 
        printf("%d * %d = %d\n", a, b, Product);
        printf("%d / %d = %.2f", a, b, Quotient); 
        return 0;
    }
