#include<stdio.h>

	int main() {
		FILE *f;
		f = fopen("bt01.txt", "a");
		if(f==NULL){
			printf("khong mo duoc file");
			return 1;
		}
		char s[50];
		printf("nhap 1 chui: ");
		fgets(s, sizeof(s), stdin);
		fputs(s, f);
		fclose(f);
	}
