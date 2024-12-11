#include<stdio.h>
    int main() {
        float celsius, fahrenheit;
        printf("nhap vao nhiet do celsius: ");
        scanf("%f",  &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("nhiet do fahrenheit: %.2f", fahrenheit);
        return 0;
        
    }
