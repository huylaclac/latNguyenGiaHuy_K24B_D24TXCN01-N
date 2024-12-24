#include<stdio.h>
	int main() {
		int n;
		printf("nhap vao do dai cua mang ");
		scanf("%d", &n);
		int a[n];
		printf("nhap vao cac phan tu cua mang: \n");
		for(int i=0;i<n;i++){
			printf("nhap phan tu thu %d ", i+1);
			scanf("%d", &a[i]);
	}
	printf("mang sau khi dc sap xep \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	int aim;
	printf("nhap gia tri can tim: ");
	scanf("%d", &aim);
	int left=0; 
	int right=n-1;
	int ketqua=1;
	while(left<=right){
		int mid=left+(right-left)/2;
		if(a[mid]==aim){
			ketqua=mid;
			break;
		}
		else if(a[mid]<aim){
			left=mid+1;
			
		}
		else{
			right=mid-1;
		}
		
	}
	if(aim!=1){
		printf("phan tu %d xuat hien tai vi tri %d ", aim, ketqua);
	}else{
		printf("phan tu %d khong ton tai trong mang ", aim);
	}
	return 0;
	}
