#include<stdio.h>
	struct ttsv{
		char name[15];
		int tui;
		char sdt[15]; 
	}; 
	int main() {
		struct ttsv sv ;
		printf("nhap ten sv ");
		scanf("%s", &sv.name);
		printf("nhap so tui ");
		scanf("%d", &sv.tui);
		printf("nhap vao sdt sv ");
		scanf("%s", &sv.sdt);
		
		return 0; 
	} 
