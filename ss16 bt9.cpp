#include<stdio.h>
void thempt(int *arr, int *n, int pos, int values){
	for(int i=*n;i>pos;i--){
		arr[i]=arr[i-1];
		
	}
	arr[pos]=values;
	(*n)++;
}
void inmang(int *arr, int n){
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
	int main() {
		int arr[100]={1,6,3,9,2,3,7,4,5,6,};
		int n=10;
		int pos, values;
		printf("nhap vao dia chi mujon them");
		scanf("%d", &pos);
		printf("nhap gia tri muon them");
		scanf("%d", &values);
		inmang(arr, n);
		thempt(arr, &n, pos, values);
		inmang(arr, n);
		return 0;
		
	}
