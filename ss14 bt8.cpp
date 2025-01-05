#include<stdio.h>
#include<string.h>

	int main() {
		char chui[50];	
		printf("nhap vao chui  ki tu de in hoa chu dau \n");
		fgets(chui, sizeof(chui), stdin);
		for(int i=0 ;chui[i]!='\0'; i++){
			if(i==0||chui[i-1]==' '){
				if(chui[i]>='a'&&chui[i-1]<='z'){
					chui[i]-=32;
				}
			}else{
			if(chui[i]>='A' && chui[i]<='Z'){					
				chui[i]+=32;
			}
			}
		}
		printf("%s\n", chui);
		return 0;
	}
