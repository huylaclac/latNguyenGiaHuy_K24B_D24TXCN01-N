#include<stdio.h>
	int main() {
		int N=8;
		int a[N]={1,4,6,3,8,4,2,3};
		printf("mang bang dau \n");
		for(int i=0;i<N;i++){
			printf("%d ", a[i]);
		}
		  for (int i = 1; i < N; i++) {
        int key = a[i]; 
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("\n mang sau khi dc sap xep \n");
    for(int i=0;i<N;i++){
    	printf("%d ", a[i]);
	}
	return 0;

	}
