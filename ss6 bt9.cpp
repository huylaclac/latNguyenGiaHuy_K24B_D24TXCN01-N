#include<stdio.h>
    int main(){
        int a,b,c;
        int n= 100;
        while(n<=999){
            a=n / 100;
            b=(n / 10) %10;
            c=n % 10;
            if(n==a*a*a+b*b*b+c*c*c){
              printf("Cac so Armstrong co 3 chu sot trong khoang 1k la: %d\n", n);

            }
        n++;
        }
    }
