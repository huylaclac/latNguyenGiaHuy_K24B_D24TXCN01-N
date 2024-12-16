#include <stdio.h>
int main() {
    int son;
    printf("Nhap vao mot so nguyen bat ki: ");
    scanf("%d", &son);
    if (son % 2 == 0) {
        printf("%d la so chan.\n", son);
    } 
	else {
        printf("%d la so le.\n", son);
    }
    return 0;
}
