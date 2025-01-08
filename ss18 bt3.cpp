#include<stdio.h>
	
	struct ttsv{
		char name[15];
		int age;
		char sdt[15];
		
	};
	void nhappt(struct ttsv *sv, int n){
		for(int i=0;i<n;i++){
		printf("sinh vien thu: %d\n", i+1);
		printf("nhap name ");
		scanf("%s", sv[i].name);
		printf("nhap tui ");
		scanf("%d", &sv[i].age);
		getchar(); 
		printf("nhap sdt ");
		scanf("%s", sv[i].sdt);
		printf("\n");
	}
	}
	void inmang(struct ttsv *sv, int n){
		for(int i=0;i<n;i++){
			printf("%s\n", sv[i].name);
			printf("tui: %d\n", sv[i].age);
			printf("sdt: %s\n", sv[i].sdt);
			printf("\n"); 
		}
	}
	int main() {
		struct ttsv sv[5];
		int n=5;
		nhappt(sv, n);
		inmang(sv, n);
		return 0;
		
	}
