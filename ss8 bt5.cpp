#include<stdio.h>
	int main() {
		int N;
		int tong=0;
			printf("nhap vao so phan tu: ");
			scanf("%d", &N);
				int a[N][N];
			  for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
             a[i][j] = i + j;  
        }
    }
			for (int i=0; i<N;i++){
				for(int j=0;j<N;j++){
				if(i==0||j==0||i==N-1||j==N-1){
					tong=tong+a[i][j];
				}
			}
		}
			for (int i=0; i<N;i++){
				for(int j=0;j<N;j++){
				printf("%d ", a[i][j]);
				
				
					}
					
						printf("\n");	
				}
				printf("tong cac phan tu bien la: %d", tong);
	return 0;
}
