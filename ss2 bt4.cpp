#include<stdio.h>
	int finemax( int a[], int N){
		int max=a[0];
		for(int i=0; i<N; i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		return max;
	}
	int main() {
		int N;
		printf("nhap vao do dAI ccua mang: ");
		scanf("%d", &N);
		int a[N];
		if(N<1){
			printf("mang khong hop le !");
			return 0;
		}
		for(int i=0;i<N;i++){
			printf("nhap phan tu thu %d ", i+1);
			scanf("%d", &a[i]);
		}
		int ketqua=finemax(a, N);
		printf("so lon nhat trong mang la: %d", ketqua);
		return 0;
	}
