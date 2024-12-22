#include<stdio.h>
	int main() {
		int maxsize;
		printf("nhap kich thuoc toi da cua mang: ");
		scanf("%d", &maxsize);
		if(maxsize<=0){
			printf("kich thuoc mang khong hop le");
			return 1;
			
		}
		int arr[maxsize];
		int a,n;
		int sohientai;
		printf("nhap so luong phan tu : (toi da %d) ", maxsize);
		scanf("%d", &n);
		if(n<=0||n>maxsize){
			printf("phan tu nhap vao khong hop le");
			return 1;
			
		}
		printf("\n nhap cac phan tucua mang\n");
		for(int i=0;i<n;i++){
			printf("phan tu thu %d\n", i+1);
			scanf("%d", &arr[i]);
		}
		sohientai=n;
		int valueindex,addindex;
		printf("so muon them : ");
		scanf("%d", &valueindex);
		printf("vi tri muon them: ");
		scanf("%d", &addindex);
		if(addindex<=0||addindex>maxsize){
			printf("vi tri them vao khong hop le");
			return 1;
		}
		if(addindex>sohientai){
			arr[addindex]=valueindex;
			sohientai=addindex+1;
		}
		if(addindex<sohientai){
			for(int i=sohientai;i>addindex;i--){
				arr[i]=arr[i-1];
				
			}
			arr[addindex]=valueindex;
			sohientai++;
		}
		printf("\n mang sau khi them phan tu\n");
		for(int i=0;i<sohientai;i++){
			printf("%d ", arr[i]);
		}
		return 0;
		 
	}
	
