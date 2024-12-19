#include<stdio.h>
	int main() {
		int N;
		printf("nhap mang a ");
		scanf("%d", &N);
		int a[N];		
		printf("cac phan tu cua mang a la \n");
		for(int i=0; i<N;i++){
			printf("phan tu thu %d ", i+1);
			scanf("%d", &a[i] );					
		}
		
		for(int i=0; i<N;i++){
				if(a[i]%2==0){
					a[i]+=3;
			}else{
					a[i]+=2;
			}		
					printf("phan tu %d: %d\n", i+1,a[i]);
				
		}
		
		return 0;
	}
