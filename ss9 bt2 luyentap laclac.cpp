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
		int addindex, valueindex;
		printf("nhap vao gia tri muon them ");
		scanf("%d", &valueindex);
		printf("nhap vao vi tri muon them ");
		scanf("%d", &addindex);
		if(addindex<0||addindex>maxindex){
			printf("khong hop le");
			return 1;
		}
		arr[addindex]=valueindex;
		printf("\nmang sau khi thay doi la\n");
		for(int i=0;i<n;i++){
			printf("%d", arr[i]);
		}
		return 0;
	}
