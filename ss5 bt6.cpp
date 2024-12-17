#include<stdio.h>
    int main() {
        int a, b, tong;
        int choice;
        while(1){
        printf("\n");
        printf("\nCALCULATOR\n");
        printf("1. tong 2 so\n");
        printf("2. hieu\n");
        printf("3. tich\n");
        printf("4. thuong 2 so\n");
        printf("5. thoat\n");
        printf("\n");
        
        printf("lua chon cua ban la\n");
        scanf("%d", &choice);
        
        printf("nhap a,b: ");
        scanf("%d %d", &a, &b);
        
            if(choice==5){
                break;
             }else if(choice==1){
                 printf("tong hai so la %d+%d=%d", a, b, a+b);
              }else if(choice==2){
                  printf("hieu 2 so la %d-%d=%d", a, b, a-b);
               }else if(choice==3){
                   printf("tich cua hai so la %d*%d=%d", a, b, a*b);
                }else if(choice==4){
                    printf("thuong cua hai so la %d/%d=%d", a, b, a/b);
            }
        }
        return 0;
    }
