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
				printf("%d ", a[i][j]);							
					}	
					printf("\n");											
				}
				 printf("Cac phan tu tren duong cheo chinh la");
			for (int i=0; i<N;i++){
				printf("%d", a[i][i]);
					tong=tong+a[i][i];
				}
				printf("tong cac phan tu dg cheo chinh: %d", tong);
	return 0;
}
