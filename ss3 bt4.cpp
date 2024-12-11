#include<stdio.h>

    int main() {
        float toan;
        printf("nhap vao diem toan: ");
        scanf("%f", &toan);
         float van;
        printf("nhap vao diem van: ");
        scanf("%f", &van);
         float anh;
        printf("nhap vao diem anh: ");
        scanf("%f", &anh);
        float sum = toan + van + anh;
        float aveg = sum/3;
        printf("tong cua ba diem la: %.2f", sum);
        printf("diem trung binh la: %.2f", aveg);
        return 0;
    }
