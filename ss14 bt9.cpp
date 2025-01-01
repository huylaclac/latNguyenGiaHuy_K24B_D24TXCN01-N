#include<stdio.h>
#include<string.h>
	int main() {
		char chui[50];
		char xoa;
		int len; 
		int luu=0; 
		printf("nhap vao chui ki tu \n");
		fgets(chui, sizeof(chui), stdin);
		len=strlen(chui);	
		chui[strcspn(chui, "\n")]='\0';
		printf("nhap vao ki tu can xoa \n");
		scanf("%c", &xoa); 
		for(int i=0;chui[i]!='\0';i++){
			if(chui[i]!=xoa){
				chui[luu++]=chui[i]; 
			} 
			
		}
		    chui[luu] = '\0';
		printf("chui sau khi xoa la: %s", chui); 
	} 
