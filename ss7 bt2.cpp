#include<stdio.h>
	int main() {
		int a[5];
		for(int i=0; i<5;i++){
	printf("nhap phan tu thu %d cua a ", i+1);
	scanf("%d", &a[i]);
	}
	printf("cac phan tu co trong mang la\n");
	for(int i=0;i<5;i++){
		printf("%d ", a[i]);
		}
		return 0;
	}
