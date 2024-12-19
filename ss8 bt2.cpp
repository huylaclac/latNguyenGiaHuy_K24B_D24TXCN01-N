#include<stdio.h>
	int main() {
		int N,luu;
		int dung=0;
		printf("nhap so phan tu cua mang ");
		scanf("%d", &N);
		int a[N];
		for(int i=0; i<N;i++){
			printf("nhap phan tu thu %d: ", i+1);
			scanf("%d", &a[i]);
			luu=a[i];
		}
			printf("nhap vao phan tu co ton tai trong mang ");
			scanf("%d", &luu);
			for(int i=0; i<N;i++){
				if(a[i]==luu){
					printf("da tim thay phan tu %d o vi tri %d ", luu, i+1);
					dung=1;
					break;
				}
				}
				if(!dung){
					printf("%d la phan tu khong co trong mang ",luu);
}
		return 0;
	}
