#include<stdio.h>
    int main() {
        int a, b, c;
        printf("nhap vao canh a cua tam giac: ");
        scanf("%d", &a);
         printf("nhap vao canh b cua tam giac: ");
        scanf("%d", &b);
         printf("nhap vao canh c cua tam giac: ");
        scanf("%d", &c);
        if (a + b > c && b + c > a && a + c > b  ){
            printf("%d %d %d la ba canh cua tam giac", a, b, c);
        }else {
            printf("%d %d %d la ba canh cua tam giac", a, b, c);
        }
    return 0;
}    
        
    
