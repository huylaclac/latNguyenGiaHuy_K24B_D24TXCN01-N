#include<stdio.h>
    int main() {
        int r;
        const float pi=3.14;
        printf("nhap vao ban kinh: ");
        scanf("%d", &r);
        float area = r * r * pi;
        float chuvi = 2 * r * pi;
        printf("area la: %.2f\n", area);
        printf("chu vi la: %.2f", chuvi);
        return 0;
    }
