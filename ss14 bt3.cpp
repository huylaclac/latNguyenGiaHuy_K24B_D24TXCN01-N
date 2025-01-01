#include<stdio.h>
#include<string.h>
	int main() {
		char name[]="lac gia";
		int dodai=strlen(name);
		printf("cac ki tu trong chui la\n");
		for(int i=dodai-1 ; name[i] != '\0' ;i--){
			printf("ki tu thu %d la: %c\n ", i, name[i]);
		}
		return 0;
	}
