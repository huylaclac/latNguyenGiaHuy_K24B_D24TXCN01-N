#include<stdio.h>

	int main() {
		FILE *f;
		f = fopen("bt01.txt", "r");
		if(f==NULL){
			printf("khong mo duoc file");
			return(1);
		}
		char c = fgetc(f);
		if(c!=EOF){
			printf("ki tu dau tien trong  file la: %c", c);
		}else {
			printf("file bi rong");
		}
		fclose(f);
	}
