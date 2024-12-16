#include<stdio.h>
    int main() {
        int number;
        printf("nhap vao mot so nguyen: \n");
        scanf("%d", &number);
        if (number % 3 == 0 ){
        printf("%d chia het cho 3\n", number);
         }else if (number % 5 == 0 ){
        printf("%d chia het cho 5\n", number);
          }else if (number % 3 == 0 && number %5 == 0 ){
        printf("%d chia het cho 3\n", number);
          }else{
              printf("%d khong chia het cho gi ca", number);
          }
        return 0;
    }
        
