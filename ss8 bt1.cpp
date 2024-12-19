#include<stdio.h>
	int main() {
		int N,luu;
		printf("nhap so phan tu cua mang ");
		scanf("%d", &N);
		int a[N];
		for(int i=0; i<N;i++){
			printf("nhap phan tu thu %d: ", i+1);
			scanf("%d", &a[i]);
			luu=a[i];
		}
		printf("cac phan tu xep tu cuoi ve dau la: ");
		for(int i=N-1 ; i>=0;i--){
			printf("%d ", a[i]);
		}
		return 0;
	}
