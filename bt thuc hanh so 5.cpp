#include<stdio.h>
#include<math.h>
    int main() {
        int N;
        printf("nhap vao mot so nguyen duong lon hon 1: ");
        scanf("%d", &N);
        if(N<=1){
            printf("nhap vao mot so nguyen duong lon hon 1");
            return 0;
        }
        else{
            for(int i=2; i<=sqrt(N); i++){
                if(N%i==0){
                    printf("%d khong phai la so nguyen to", N);
                    return 0;
                }
            }
            printf("%d la so nguyen to", N);
        }
}
