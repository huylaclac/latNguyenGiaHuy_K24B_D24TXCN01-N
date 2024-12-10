#include<stdio.h>
	int main() {
		int edge;
		printf(" nhap vao canh: ");
		scanf("%d", &edge);
		int perimeter = 4 * edge;
		int area = edge * edge;
		printf("area hinh chu vuong  la: %d\n ", area);
		printf("perimeter hinh chu vuong: %d", perimeter );
		return 0; 
	} 
