#include<stdio.h>

int timkiem(int *mang, int n, int values){
	printf("da tim kiem xong\n");
	for(int i=0;i<n;i++){
		if((mang[i])==values){
			return i;
		}
		
	}
	return -1;
}
	
	int main() {
		int mang[]={1,2,5,2,5,7,2,3,5};
		int n=sizeof(mang)/sizeof(mang[0]);
		int values;
		printf("nhap gia tri cua ban muon tiem:");
		scanf("%d", &values);
		int ketqua=timkiem(mang, n, values);
		if(ketqua!=-1){
			printf("phan tu %d co ton tai trong mang tai vi tri %d\n", values, ketqua);
		}else{
			printf("phan tu %d ko ton tai trong mang\n", values);
		}
		return 0;
	}
