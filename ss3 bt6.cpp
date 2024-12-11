#include<stdio.h>
    int main() {
        float height, base;
        printf("nhap vao height: \n");
        scanf("%f", &height);
        printf("nhap vao base: \n");
        scanf("%f", &base);
        float area = (0.5 * height * base);
        printf("area tam giac la: %.2f", area);
        return 0;
    }
