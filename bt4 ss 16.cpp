#include<stdio.h>
void inmang(int *mang, int n){
	printf("cac phan tu co trong mang\n");
	for(int i=0; i<n; i++){
		printf("%d", *(mang +i));
	}
}
	int main() {
		int mang[]={3,5,7,1,5,6,7};
		int n=sizeof(mang)/sizeof(mang[0]);
		inmang(mang, n);
		return 0;
	}
