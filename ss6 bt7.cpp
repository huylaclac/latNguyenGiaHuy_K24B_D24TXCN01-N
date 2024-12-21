#include<stdio.h>
	int main() {
		int N;
		printf("nhap vao so nguyen bat ki ");
		scanf("%d", &N);
		printf("cac uoc cua %d la: ", N);
		for(int i=1; i<=N;i++){
			if(N%i==0){
				printf("%d ", i);
			}
		}
		return 0;
	}
