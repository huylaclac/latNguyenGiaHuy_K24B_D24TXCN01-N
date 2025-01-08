#include<stdio.h>

struct ttsv{
	int id;
	char name[20];
	int tui;
	char sdt[20]; 
}; 
void inmang(struct ttsv *sv, int n){
	for(int i=0;i<n;i++){
	printf("Id: %d\n", sv[i].id);
	printf("name: %s\n", sv[i].name);
	printf("tui: %d\n", sv[i].tui);
	printf("sdt: %s\n", sv[i].sdt); 
}
} 
void suattsv(struct ttsv *sv, int n, int posid){
	int fine=0; 
	for(int i=0;i<n;i++){
		if(sv[i].id==posid){
			fine=1; 
			printf("\nid: %d\n", sv[i].id);
			printf("name: %s\n", sv[i].name);
			printf("tui: %d\n", sv[i].tui);
			printf("sdt: %s\n", sv[i].sdt);
			
			printf("nhap name moi\n: ");
			scanf("%s", sv[i].name);
			printf("nhap tui  moi: \n");
			scanf("%d", &sv[i].tui); 
			break; 
			} 
		}if(!fine){
		printf("khong ton tai");
}
	} 
 
	int main() {
		struct ttsv sv[50]={
			{1, "lacgia", 2103, "0917617679"},
			{2, "huy", 1231, "0394347455"},
			{3, "lattgia", 3879, "0375140270"},
			{4,  "huylac", 3214, "92832894238"},
			{5, "lacgialac", 7834, "320420348"}			  			  			  						
		}; 
		int n=5; 
    	inmang(sv, n);
		int posid;
		printf("nhap id muon chinh sua: ");
		scanf("%d", &posid);
		suattsv(sv, n, posid);
		printf("mang sau khi duoc sua\n"); 
		inmang(sv, n); 
		return 0; 		
	} 
