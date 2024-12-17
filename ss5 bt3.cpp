#include<stdio.h>
    int main() {
       int N, tong;
       printf("nhap 1 so nguyen N: ");
       scanf("%d", &N);
       for(int i=1; i<=N; i++){
           printf("%d\n", i);
           tong = tong+i;
      }
      printf("tong la %d", tong);
         return 0;
}
