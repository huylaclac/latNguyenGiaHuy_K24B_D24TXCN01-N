#include<stdio.h>
    int main(){
        int a=0;
        int b=1;
        int N,tong;
        printf("nhap n ban muon: ");
        scanf("%d", &N);
        printf("n so dau tien trong day fibonaci la: %d \n", N);
        printf("0 1 ");
        for(int i=1; i<=N; i++){
            tong=a+b;
            a=b;
            b=tong;
            printf("%d ", tong);

        }
        return 0;
        

    }
