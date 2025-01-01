#include<stdio.h> 
#include<string.h>

	int main() {
		char chui[100];
		printf("nhap vao phan tu cua chui ");
		fgets(chui, sizeof(chui), stdin);
		int count =0; 
		for(int i=0;chui[i]!='\0';i++){
			if(chui[i-1]==' '&& chui[i]!=' '){
				count++ ;
			} 
		}
		printf("so phan tu la cach trong chui la: %d", count);
		return 0; 
		 
	}
