
#include <stdio.h>
int main()
{
    int son;
    printf("nhap vao 1 son: \n");
    scanf("%d", &son);
    if(son > 0){
        printf("%d la mot so duong", son);
    }
    else{
        printf("%d la mot so am ", son);
    }
    return 0;
}
