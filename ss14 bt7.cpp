#include<stdio.h> 
#include<string.h>

	int main ()  {
		char chui[50];
		int count_special=0;
		int count_number=0;
		int count_chu=0;
		printf("nhap vao chui ki tu bat ki ");
		fgets(chui, sizeof(chui), stdin);
		chui[strcspn(chui, "\n")]='\0'; 
		for(int i=0;chui[i]!='\0';i++){
			if((chui[i]>='A' && chui[i]<='Z') || (chui[i]>='a' && chui[i]<='z')){
				count_chu++; 
			}else if(chui[i]>='0' && chui[i]<='9'){
				count_number++; 
			}else{
				count_special++; 
			} 
		}
		printf("so luong chu so: %d\n", count_number);
		printf("so luong chu dac bieit: %d\n", count_special);
		printf("so luong chu :%d", count_chu );
		return 0; 
	}
