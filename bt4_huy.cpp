#include<stdio.h>

	int main() {
		FILE *f;
		f =fopen("bt01.txt", "r");
		if(f==NULL){
			printf("khong mo duoc file");
			return(1);
		}
		char line[100];
		if(fgets(line,sizeof(line),f)!=NULL){
			printf("dong dau tien: %s", line);
			
		}else{
			printf("ko co");
		}
		fclose(f);
	}
