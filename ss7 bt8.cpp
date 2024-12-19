#include<stdio.h>
	int main() {
		int hang, cot;
		printf("nhap so hang ");
		scanf("%d", &hang);
		printf("nhap so cot ");
		scanf("%d", &cot);
		int a[hang][cot];
		
		for(int i=0 ;i<hang; i++){
			for(int u=0;u<cot;u++){
				printf("nhap phan tu hang %d, cot %d ", i+1, u+1);
				scanf("%d", &a[i][u]);
			}
		}
			printf("\ncac phan tu trong mang 2 chiue la\n");
			for(int i=0 ;i<hang; i++){
			for(int u=0;u<cot;u++){
				printf("%d ", a[i][u]);
			}
			printf("\n");
		}
		return 0;
	}
