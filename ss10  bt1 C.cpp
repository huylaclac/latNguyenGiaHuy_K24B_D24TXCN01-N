#include<stdio.h>
#define N 8
	int main() {
		int arr[N]={1,2,3,4,5,6,7,8};
		int kiemtra;
		printf("nhap phan tu muon kiem tra: ");
		scanf("%d", &kiemtra);
		int foud=0;
		for(int i=0;i<N;i++){
		if(kiemtra==i){
			printf("%d ton tai trong mang ", kiemtra);
			foud=1;
			break;
		}
	}
		if(!foud){
		printf("%d khong ton tai trong mang", kiemtra);
		}

	return 0;
	} 
