#include<stdio.h>
    int main() {
        int month;
        printf("nhap vao mot month: \n");
        scanf("%d", &month);
        if(month > 12 || month < 1){
             printf(" lam gi co thang do ");
         }
        else{
         switch(month) {
         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
         printf("month %d co 31 ngay", month);
         break;
         case 4: case 6: case 9: case 11:
         printf("month %d co 30 ngay", month);
         break;
         case 2:
          printf("month %d co 30 ngay", month);
         break;
        }
        }
        return 0;
    }
        
