#include<stdio.h>
    int main() {
        float lgth, sum;
        float gio, lgtheoh;
        printf("nhap vao h lam: ");
        scanf("%f", &gio);
        printf("nhap vao luong 1h: ");
        scanf("%f", &lgtheoh);
        float kd1t= gio * lgtheoh;
        if (gio > 160){
            lgth= kd1t  * 0.1 ;
            sum = lgth + kd1t;
        }
        else{ 
        sum = kd1t ;
		}
        printf("luong thuong them: %.2f\n", lgth);
        printf("tong 1 thang kiem duoc:%.2f d", sum);
        return 0;
    }

