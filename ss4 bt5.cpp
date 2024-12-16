#include<stdio.h>
    int main() {
        int num1, num2, num3;
        printf("nhap vao so 1: ");
        scanf("%d", &num1);
         printf("nhap vao so 2: ");
        scanf("%d", &num2);
         printf("nhap vao so 3: ");
        scanf("%d", &num3);
        if (( num3 >= num1 && num3 <= num2) || (num3 <= num1 && num3 >= num2  )){
           printf("%d nam giua %d va %d", num3, num1, num2); 
        } else {
            printf("%d khong nam giua %d va %d", num1, num2, num3);
        }
return 0;
}
