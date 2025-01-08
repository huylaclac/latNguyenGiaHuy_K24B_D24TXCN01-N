#include<stdio.h>
struct ttsv{
	char name[15];
	int tui;
	char sdt[15];
};
	int main() {
		struct ttsv sv ={"Nguyen_Gia_Huy" , 18, "0394347455"};
		printf("%s %d %s ", sv.name,sv.tui,sv.sdt);
		return 0; 
	}
