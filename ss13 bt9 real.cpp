#include<stdio.h>
#include<math.h>
#define MAX 100


		int kiemtra(int number){
			if(number<2){
			return 0;
		}
	for(int i=0; i<=sqrt(number);i++){
		if(number % i==0){
			return 0;
		}
		return 1;
	}
		}
	
		
	void nhapmang(int n, int m, int a[MAX][MAX]){
		printf("nhap cac gia tri cho cac phan tu cua mang\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("nhap phan tu thu a[%d][%d]", i, j);
				scanf("%d", &a[i][j]);
			}
		}
	}
	void inmang(int n, int m, int a[MAX][MAX]){
		for(int i=0; i<n; i++){
			for(int j=0; j<m;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
		void ptogoc(int n, int m, int a[MAX][MAX]){
			printf("cac phan tu ow goc la\n");
			printf("goc tren trai %d, goc duoi trai %d \n", a[0][0], a[n-1][0]);
			printf("goc tren phai  %d, goc duoi phai %d \n", a[0][m-1], a[n-1][m-1]);
		}
		void dgbien(int n, int m, int a[MAX][MAX]){
			printf("cac phan tu namw trwen dg bien la\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(i==0||j==0||i==n-1||j==m-1){
						printf("%d ", a[i][j]);
					}else{
						printf("  ");
					}
				}
				printf("\n");
			}
		}
		void chinhphu(int n, int m, int a[MAX][MAX]){
			printf("pt tren duong cheo chinh la: ");
			for(int i=0;i<n;i++){
					printf("%d ", a[i][i]);
			}
			printf("dg cheo phu  :");
			for(int i=0;i<n;i++){
					printf("%d ", a[i][m-1-i]);
				
			}
		}
		
		void songuyento(int n, int m, int a[MAX][MAX]){
			printf("cac phan tu la so nguyen to la\n");
			for(int i=0;i<n;i++){
				for(int j=0; j<m;j++){
					if(kiemtra(a[i][j])){
						printf("%d ", a[i][j]);
					}
				}
			}
	
}

int main() {
	int n,m;
	int choice;
	int a[MAX][MAX];
	printf("nhap so han: ");
	scanf("%d", &n);
	printf("nhap vao cot: ");
	scanf("%d", &m);
	do{
			printf("\nMENU\n");
        printf("1. Nhap gia tri cho mang\n");
        printf("2. In cac phan tu co trong mang\n");
        printf("3. In cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In cac phan tu tren duong cheo chinh va duong cheo phu\n");
        printf("6. In cac phan tu la so nguyen to theo ma tran\n");
        printf("7. thoat \n");
        printf("Nhap vao lua chon cua ban: ");
        scanf("%d", &choice);
		
		switch(choice){
			case 1:
			nhapmang(n, m, a);
			break;
			
			case 2:
			inmang(n, m, a);
			break;
			
			case 3:
			ptogoc(n, m, a);
			break;
			
			case 4:
			dgbien(n, m, a);
			break;
			
			case 5:
			chinhphu(n, m, a);
			break;
			
			case 6:
			songuyento(n, m, a);
			break;
			
			case 7:
				printf("tam biet ban ");
				break;
			
		}
	}while(choice!=7);
	return 0;
}
