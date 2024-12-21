#include<stdio.h>
	int main() {
		int N;
		int le=0;
		int chan=0;
		printf("nhap vao 5 so nguyen \n");
		for(int i=0;i<5;i++){
		printf("nhap vao so nguyen thu %d ", i+1);
		scanf("%d", &N);
		if(N%2!=0){
			le=le+1;
			
		}if(N%2==0){
			chan=chan+1;

		}
}		
printf(" co %d so chan\n", chan);
printf(" co %d so le", le);
return 0;
}
	 
	
