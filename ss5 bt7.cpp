#include <stdio.h>
int ucln(int a, int b) {
    for (;b!=0;) {
        int luu = b;
        b = a % b;
        a = luu;
    }
    return a;
}
int main() {
    int a, b;
    printf("Nhap vao a, b: ");
    scanf("%d %d", &a, &b);
    printf("ucln cua %d va %d la: %d\n", a, b, ucln(a, b));
    return 0;
}
