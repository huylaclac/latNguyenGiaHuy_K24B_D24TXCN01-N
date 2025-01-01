#include<stdio.h>
#include<stdio.h>

	int main() {
		char chui[50];
		int count=0; 
		printf("nhap vao chui ");
		fgets(chui, sizeof(chui), stdin);
		for(int i=0;chui[i]!='\0';i++){
			if(chui[i]>='a'&&chui[i-1]<='z'||chui[i]>='A'&&chui[i-1]<='z'){
				count++ ;
			} 
		}
		printf("so phan tu la chu da xuat hien la: %d", count);
		return 0; 
	} 
