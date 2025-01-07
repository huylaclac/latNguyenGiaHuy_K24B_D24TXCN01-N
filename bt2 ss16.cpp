#include<stdio.h>
 void swap(int *a, int *b){
	int luu=*a;
	*a=*b;
	*b=luu;
}
	int main() {
		int x=10;
		int y=20;
		swap(&x, &y);
		printf("gia tri x va y sau khi thay doi la %d, %d", x, y);
		return 0;
	}
