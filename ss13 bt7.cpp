#include<stdio.h>

	void taomatran(int hang, int cot, int a[hang][cot]){
		printf("nhap cac phan tu cua mang 2 chiue\n"); 
		for(int i=0;i<hang;i++){
			for(int j=0;j<cot;j++){
				printf("phan tu a[%d][%d]", i, j); 
				scanf("%d", &a[i][j]); 
			} 
		} 
		
	}
	void inmang(int hang, int cot, int a[hang][cot]){
		for(int i=0;i<hang;i++){
			for(int j=0; j<cot;j++){
				printf("%d ", a[i][j]); 
			}
			printf("\n"); 
		} 
		
	} 
	int main() {
		int cot,hang;
		printf("nhap vao hang");
		scanf("%d", &hang);
		printf("nhap vao cot");
		scanf("%d", &cot);
		int a[hang][cot];
		taomatran(hang, cot, a);
		inmang(hang, cot, a); 
		return 0;		 
	} 
