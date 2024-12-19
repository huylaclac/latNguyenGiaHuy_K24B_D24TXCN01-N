#include<stdio.h>
	int main() {
		int N, luu;
		printf("nhap so luong phan tu cua mang");
		scanf("%d", &N);
		int a[N];
		for(int i=0;i<N;i++){
			do{
				printf("nhap phan tu thu %d", i+1);
				scanf("%d ", &luu);
				if(luu%2==0){
					printf("phan tu nhap vao phai la so le ");
				}
			}
			while (luu%2==0) ;
				a[i]=luu;
			
		}
		printf("cac phan tu cua mang la");
		for(int i=0 ;i<N; i++){
			printf("%d ",  a[i]);
	
	
	}
		return 0;
	}
