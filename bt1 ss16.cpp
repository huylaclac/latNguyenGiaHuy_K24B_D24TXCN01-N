#include<stdio.h>

	int main() {
		int lac=40;
		int *ponter=&lac;
		
		printf("gia tri cua lac la: %d\n", lac);
		printf("dia chi cua con tro la: %p\n", &lac);
		
		printf("gia tri cua con tro la: %d\n",&ponter);
		printf("dia chi cua con tro la: %p", ponter);
		return 0;
	}
