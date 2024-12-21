#include<stdio.h>
#include<math.h>
	int main() {
		int N,kiemtra=1;
		printf("nhap so nhuyen N ");
		scanf("%d", &N);
		if(N<=1){
			kiemtra= 0;
		}else{
			for(int i=2;i<=sqrt(N);i++){
				if(N%i==0){
					kiemtra= 0;
					break;
				}
			}
		}
		if(kiemtra){
			printf("%d la so nguyen to", N);
		}else 
			printf("%d khong phai la so nguyen to", N);
		return 0;
	}
