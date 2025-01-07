#include<stdio.h>
	void sapxep(int *mang, int n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
			if(mang[j]>mang[j+1]){
				int temp=mang[j];
				mang[j]=mang[j+1];
				mang[j+1]=temp;
			}
		}
	}
	}
	void inmang(int *mang, int n){
		for(int i=0;i<n;i++){
			printf("%d ", *(mang+i));
		}
		printf("\n");
	}
	int main() {
		int mang[]={4,2,5,10,5,7,2,3,5};
		int n=sizeof(mang)/sizeof(mang[0]);
		printf("mang khi ch duocj sap xep\n");
		inmang(mang, n);
		sapxep(mang, n);
		printf("mang khi duoc sap xep\n");
		inmang(mang, n);
		return 0;
	}
