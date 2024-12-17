#include<stdio.h>
    int main() {
       int N ;
       printf("nhap 1 so nguyen duong tu 1 toi 10 : ");
       scanf("%d", &N);
        for(int i=1; i<=10;i++){
            printf("%d*%d=%d\n", N, i, N*i);
        }
         return 0;
}
