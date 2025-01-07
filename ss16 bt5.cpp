#include<stdio.h>
void inmang(int *mang, int n){
	printf("mang hien tai\n");
	for(int i=0; i<n;i++){
		printf("%d ", *(mang+i));
	}
}

void them(int *mang, int *n, int newvl, int pos){
		 printf("mang da duoc them\n");
	for(int i=*n; i>pos; i--){
		mang[i]=mang[i-1];			
		}
		mang[pos]=newvl;
(*n)++;
}

	int main () {
		int mang[7]={2,4,6,4,8,7,9};
		int newvl, pos;
		int n=sizeof(mang)/sizeof(mang[0]);
		
		n=sizeof(mang)/sizeof(mang[0]);
		printf("gia tri can them: ");
		scanf("%d", &newvl);
		printf("vi tri cac them: ");
		scanf("%d", &pos);
		
		inmang(mang, n);
		them(mang, &n, newvl, pos);
		inmang(mang, n);
		return 0;
		
	}
