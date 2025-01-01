#include<stdio.h>
#include<string.h>
	int main() {
		char name[]="lac gia";
		printf("cac ki tu trong chui la\n");
		for(int i=0; name[i] != '\0' ;i++){
			printf("ki tu thu %d la: %c\n ", i, name[i]);
		}
		return 0;
	}
