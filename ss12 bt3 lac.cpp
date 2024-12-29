#include<stdio.h>
	int factorial(int N){
		if(N<0){
		printf("%d la so am khong choi do am\n", N);
		return -1;
	}
	int ketqua=1;
	for(int i=1;i<=N;i++){
		ketqua *=i;
	}
	return ketqua;
	}
	int main() {
		int N;
		printf("nhap vao so nguyen n de tinh giai thua: ");
		scanf("%d", &N);
		int lac=factorial(N);
		if(lac!=-1){
			printf("gia thua cua %d la %d ", N, lac);
		}
		return 0;
	}
