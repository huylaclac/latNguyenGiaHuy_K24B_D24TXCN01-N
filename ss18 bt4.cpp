#include<stdio.h>
struct ttsv{
	int id;
	char name[50];
	int tui;
	char sdt[15];
};

void nhappt(struct ttsv *sv, int n){
	for(int i=0;i<n;i++){
	sv[i].id=i+1;
	printf("sinh vien thu: %d\n", sv[i].id);
	printf("nhap name: ");
	scanf("%s", &sv[i].name);
	printf("nhap tui sv: ");
	scanf("%d", &sv[i].tui);
	getchar();
	printf("nhap sdt: ");
	scanf("%s", &sv[i].tui);
}
}

void inmang(struct ttsv *sv, int n){
	for(int i=0;i<n;i++){
		printf("id: %d", sv[i].id);
		printf("   ho va ten: %s", sv[i].name);
		printf("   age: %d", sv[i].tui);
		printf("   sdt: %s", sv[i].sdt);
		printf("\n");
	}
}
	int main() {
		struct ttsv sv[50];
		int n=5;
		nhappt(sv, n);
		inmang(sv, n);
		return 0;
	}
