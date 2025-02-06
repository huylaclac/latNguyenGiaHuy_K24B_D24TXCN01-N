#include<stdio.h>

	int main() {
	    FILE *a, *b;
	    char c;
	    a = fopen("bt01.txt", "r");
	    if(a==NULL){
	    	printf("loi");
	    	return(1);
		}
		b = fopen("bt06.txt", "w");
		if(b==NULL){
			printf("khong the tao file");
			fclose(a);
			return(1);
		}
		while((c=fgetc(a))!=EOF){
			fputc(c, b);
		}
		printf("coppi dc r");
		fclose(a);
		fclose(b);
		
	}
