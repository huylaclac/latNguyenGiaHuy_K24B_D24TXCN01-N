#include<stdio.h>
	int main() {
		int N;
		int max;
			printf("nhap vao so phan tu: ");
			scanf("%d", &N);
			int a[N][N];
			for (int i=0; i<N;i++){
				for(int j=0;j<N;j++){
				
				a[i][j]=(i+1)*(j+1);
			}
		}
			max=a[0][0];
			for (int i=0; i<N;i++){
				for(int j=0;j<N;j++){
				printf("%d ", a[i][j]);
					if(a[i][j]>max){
						max = a[i][j];
					}
					}
					
						printf("\n");	
				}
			printf("phan tu lon nhat trong mang 2 chieu la: %d", max);
	return 0;
}
	
