#include<stdio.h>
	int uoc(int a, int b){
		while(b!=0){
			int temp=a%b;
			a=b;
			b=temp; 
		} 
		return a; 
		
	}

	int main() {
		int a,b;
		printf("nhap vao so nguyen a "); scanf("%d", &a);
		printf("nhap vao so nguyen b "); scanf("%d", &b);
		if(a<b){
			int temp=a;
			a=b;
			b=temp; 
		} 
		int ucln=uoc(a, b);
		printf("UCLN cua 2 so la %d", ucln); 
		return 0; 
		
		 
	} 
