#include<stdio.h>
#include<string.h> 
struct ttsv{
	int id;
	char name[30];
	int age;
	char sdt[15]; 
}; 
void inmang(struct ttsv *sv, int n){
	for(int i=0;i<n;i++){
		printf("\nid: %d\n", sv[i].id); 
		printf("name: %s\n", sv[i].name);
		printf("tui: %d\n", sv[i].age);
		printf("sdt: %s\n", sv[i].sdt ) ;
	} 
} 
void delesv(struct ttsv *sv, int *n, int IDdele){
	int found=0;
	for(int i=0;i< *n;i++){
		if(sv[i].id==IDdele){
			found=1;
			for(int j=i;j<*n-1;j++){
			sv[j]=sv[j+1];
		}
			 (*n)--;
		} 
	}if(!found){
		printf("cai do lam gi co ton tai trong mang");
	} 
} 
	int main(){
		struct ttsv sv[50]={
			{1, "lacgia", 2103, "0917617679"},
			{2, "huy", 1231, "0394347455"},
			{3, "lattgia", 3879, "0375140270"},
			{4,  "huylac", 3214, "92832894238"},
			{5, "lacgialac", 7834, "320420348"}	
		}; 
		int n=5; 
		int IDdele; 
		inmang(sv, n);
		printf("nhap vao id can xoa: "); 
		scanf("%d", &IDdele); 
		delesv(sv, &n, IDdele);
		inmang(sv, n); 
		return 0; 
	} 
