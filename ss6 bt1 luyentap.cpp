#include<stdio.h>
	int main(){
		int N,sum;
		printf("nhap vao 5 so nguyen \n");
		for(int i=0 ;i<5; i++){
		printf("so n thu %d ", i+1);
		scanf("%d", &N);
		if(N%2!=0){
			sum=sum+N;
		}
	}
		printf("tong cac so le la %d", sum);
		return 0;
	}
