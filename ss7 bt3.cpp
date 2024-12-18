#include<stdio.h>
	int main() {
		int a[5];
		int dem=0;
		int coutk=0;
		int dung=1;
		for(int i=0; i<5; i++){
			printf("nhap phan tu thu %d \n", i+1);
			scanf("%d", &a[i]);
		}
		printf("cac phan tu la so chan: ");
		for(int i=0; i<5; i++){
			if(a[i]%2==0){
		printf("%d", a[i]);
		dem++;
	}
}
          printf("\ncac phan tu la so le ");
	for(int i=0; i<5; i++){
			if(a[i]%2!=0){
			printf("%d", a[i]);
			coutk++;
		}
	}
	printf("\ntong cac so chan la : %d\n", dem);
	printf("cac so khong phai so chan la: %d", coutk);
		return 0;
	}
