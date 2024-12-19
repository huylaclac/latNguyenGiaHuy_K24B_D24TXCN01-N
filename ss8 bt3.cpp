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
					
					}
						printf("\n");	
				}
			
	return 0;
}
	
