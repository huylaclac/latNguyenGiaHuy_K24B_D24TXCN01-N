#include<stdio.h>

	int main() {
		int n;
		char line[100];
		FILE * f;
		f = fopen("bt05.txt", "w");
		if(f==NULL){
			printf("loi");
			return(1);
		}
		printf("nhap vao so dong ban muon nhap: ");
		scanf("%d", &n);
		getchar();
		for(int i=0;i<n;i++){
			printf("nhap noi diung dong thu %d", i+1);
			fgets(line, sizeof(line), stdin);
			fputs(line, f);
		}
		fclose(f);
		
		freopen("bt05.txt", "r", f);
		while(fgets(line, sizeof(line), f)!=NULL){
			printf("%s", line);
		}
		fclose(f);
		
	}
