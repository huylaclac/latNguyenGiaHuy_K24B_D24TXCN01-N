#include<stdio.h>
			int kiemtra(int year) {
				if(year%4==0&&year%100!=0 || year%400==0){
					return 1;
				}  
				return 0;
			}
	int main() {
		int month,year,days;
		printf("nhap vao thang ");
		scanf("%d", &month);
		printf("nhap vao year ");
		scanf("%d", &year);
			if(month>0 && month <=12){
				if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
					days=31;
									
				}
			else if(month==4||month==6||month==9||month==11){
				days=30;
				
			   }
		   else	if(month==2){
				if(kiemtra(year)){
				days=29;
			}else 
			days=28;
		            	}
				
			printf("ngay %d thang %d nam %d la hop le", days,month,year);
		}else{
			printf("ngay thang nam khong hop le");
		}
			return 0;
	}
