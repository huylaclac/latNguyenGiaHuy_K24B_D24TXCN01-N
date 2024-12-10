#include<stdio.h>
	int main() {
		int length;
		int within; 
		printf(" nhap vao dai: ");
		scanf("%d", &length);
		printf("nhap vao rong: ");
		scanf("%d", &within);
		int perimeter = 2 * (length * within);
		int area = length * within;
		printf("area hinh chu nhat la: %d\n ", area);
		printf("perimeter hinh chu nhat: %d", perimeter );
		return 0; 
	} 
