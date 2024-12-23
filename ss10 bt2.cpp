#include<stdio.h>
	int main() {
		int N=8;
		int a[N]={4,6,2,8,6,4,2,1};
		printf("macng trc khi doi \n");
		for(int i=0;i<N;i++){
			printf("%d ", a[i]);
		}
		printf("\nmang sau khi sap xep\n");
		for(int i=0;i<N;i++){
			for(int j=0;j<N-i-1;j++){
				if(a[j]>a[j+1]){
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("\nmang sau khi xep tang dan\n");
		for(int i=0;i<N;i++){
			printf("%d ", a[i]);
		}
		return 0;
	}
