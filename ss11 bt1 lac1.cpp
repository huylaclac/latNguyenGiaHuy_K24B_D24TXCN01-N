#include<stdio.h>

	int tong(int a, int b){
		return a+b;
	}

	int main() {
		int a,b;
		printf("nhap vao a ");
		scanf("%d", &a);
		printf("nhap vao b ");
		scanf("%d", &b);
		int ketqua=tong(a, b);
		printf("tong cua 2 so a,b la: %d", ketqua);
		return 0;
		
	}
