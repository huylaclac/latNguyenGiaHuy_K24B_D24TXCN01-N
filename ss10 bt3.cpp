#include<stdio.h>
int main() {
	int N=8;
	int a[N]={4,2,5,6,7,2,5,1};
	printf("mang luc ban dau \n");
	for(int i=0;i<N;i++){
		printf("%d", a[i]);
	}
	for(int i=1;i<N;i++){
		int key=a[i];
		int j=i-1;
		while(a[j] >= 0 && a[j] > key){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=key;
}
printf("\nmang sau khi sap xep \n");
for(int i=0;i<N;i++){
	printf("%d ", a[i]);
}
return 0;
}
