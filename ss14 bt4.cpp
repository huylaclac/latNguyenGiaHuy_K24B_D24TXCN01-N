#include<stdio.h>
#include<string.h>
	int main() {
		char name[]="nguyen le vu";
		int count=0;
		char l;
		printf("moi nhap phan tu ban mupn xem: ");
		scanf("%c", &l);
		for(int i=0;name[i]!=0;i++){
			if(name[i]==l){
			count++;
		}
		}
		printf("so lan xuat hien cua %c la %d", l, count);
		return 0;
	}
