#include<stdio.h>
#include<stdbool.h>
   bool	isprime(int num){
   	if(num<1){
   		printf("sai so nhap vao \n");
   		return false;
	   }
	   for(int i=0;i*i<num;i++){
	   	if(num%2==0){
	   		return false;
		   }
	   }
	   return true;
   }

int main() {
	int num1, num2;
	printf("nhap vao num1 ");
	scanf("%d", &num1);
	printf("nhap vao num2 ");
	scanf("%d", &num2);
	
	if(isprime(num1)){
		printf("%d la so nguyen to ", num1);
	}else{
		printf("%d khong phai la so nguyen to", num1);
	}
	printf("\n");
	if(isprime(num2)){
		printf("%d la so nguyen to ", num2);
	}else{
		printf("%d khong phai la so nguyen to", num2);
	}
	return 0;
	
}
