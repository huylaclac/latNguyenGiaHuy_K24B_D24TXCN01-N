#include<stdio.h>
    int main() {
        int number, nghin, tram, chuc, dv;
        printf("nhap vao bon so bat ki: ");
        scanf("%d", &number);
        nghin =number / 1000;
        tram =(number / 100) % 10;
        chuc =(number  / 10) % 10;
        dv =number % 10;
        int sum = nghin + tram + chuc + dv;
        printf("tong cua ba so: %d", sum);
        return 0;
    }
