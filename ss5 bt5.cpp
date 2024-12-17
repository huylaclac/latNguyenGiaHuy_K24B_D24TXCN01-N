#include<stdio.h>
    int main() {
   
       for(int i=1;i<=10;i++){
        printf("bang cuu chuong: %d\n", i);
         for(int N=1;N<=10;N++){
            printf("%d*%d=%d\n", i, N, i*N);
         }
         printf("           \n");
       }
         return 0;
}
