#include<stdio.h>
int nhapmang(int *arr, int n){
	printf("moi nhap vao mang\n");
	for(int i=0;i<n; i++){
		printf("phan tu arr[%d]=", i+1);
		scanf("%d ", &arr[i]);
	}
}
	int main() {
		int n=10;
		int arr[n];
		int mang[n];
		nhapmang(arr, n);
		return 0;
	}
