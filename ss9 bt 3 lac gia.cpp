#include<stdio.h>
	int main() {
		int maxindex;
		printf("nhap vao do dai mang toi da: ");
		scanf("%d", &maxindex);
		if(maxindex<=0){
			printf("do dai mang khong hop le");
			return 1;
		}
		int n;
		int arr[maxindex];
		printf("ban muon co bao nhieu phan tu ");
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			printf("phan tu thu %d ", i+1);
			scanf("%d", &arr[i]);
			
		}
		int sohientai=n;
		int deleteindex;
		printf("nhap vao vi tri can xoa ");
		scanf("%d", &deleteindex);
		if(deleteindex<0||deleteindex>sohientai){
			printf("khong hop le");
			return 1;
		}
		for(int i=deleteindex; i<sohientai-1;i++){
		arr[i]=arr[i+1];
	}
	sohientai--;
	printf("\n mang sau khi xoa phan tu tai vi tri %d\n", deleteindex);
	for(int i=0;i<sohientai;i++){
		printf("%d ", arr[i]);
	}
	return 0;
	
}
		
		
