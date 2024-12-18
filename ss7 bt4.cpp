#include<stdio.h>
	int main() {
		int N;
		int a[N];
		printf("nhap so phan tu cua mang");
		scanf("%d", &N);
		for(int i=0; i<N; i++){
			printf("nhap phan tu thu %d ", i+ 1);
			scanf("%d", &a[i]);
		}
		printf("cac phan tu co trong mang la ");
		for(int i=0; i<N;i++){
			printf("%d ", a[i]);
		}
		
		return 0;
	}
