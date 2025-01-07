#include<stdio.h>
	tinhtong(int *a, int *b){
		return *a + *b;
	}
	
	int main() {
		int x, y;
		int ketqua;
		scanf("%d", &x);
		scanf("%d", &y);
		ketqua=tinhtong(&x, &y);
		printf("tong cua 2 so la %d", ketqua);
		return 0;
	}
