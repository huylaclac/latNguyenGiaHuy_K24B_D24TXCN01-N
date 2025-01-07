#include<stdio.h>

void xoapt(int *arr, int *n, int values, int pos){
	for(int i=pos;i<*n-1;i++){
		arr[i]=arr[i+1];
	}
	(*n)--;
	
}
void inmang(int *arr, int n){
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
	int main() {
		int arr[10]={1,2,3,4,5,6,7,8,9,10};
		int values, pos;
		int n=10;
		printf("nhap vao gia tri muon them: ");
		scanf("%d", &values);
		printf("nhap vao vi tri muon them:");
		scanf("%d", &pos);
		inmang(arr, n);
		xoapt(arr, &n, values, pos);
		inmang(arr, n);
		return 0;
	} 
