#include <stdio.h>

int main() {
int arr[100];
int n = 0;
    int choice;
    do {
        printf("\nMENU\n");
       printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
       printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
       printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Nhap vao so phan tu muon nhap (toi da 100): ");
           scanf("%d", &n);
           if (n < 0 || n > 100) {
                printf("So phan tu khong hop le.\n");
               n = 0;
            } else {
               printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("Phan tu thu %d: ", i + 1);
                   scanf("%d", &arr[i]);
                }
                printf("Mang da duoc nhap xong.\n");
            }
        } else if (choice == 2) {
          if (n == 0) {
             printf("Mang hien tai trong.\n");
        } else {
            printf("Mang hien tai: ");
               for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
                }
                printf("\n");
            }
        } else if (choice == 3) {
            if (n >= 100) {
               printf("Mang da day, khong the them phan tu.\n");
           } else {
                int value, pos;
               printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon them (0 den %d): ", n);
               scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    for (int i = n; i > pos; i--) {
                       arr[i] = arr[i - 1];
                    }
                   arr[pos] = value;
                    n++;
                   printf("Them phan tu thanh cong.\n");
                }
            }
        } else if (choice == 4) {
            if (n == 0) {
                printf("Mang hien tai trong.\n");
            } else {
                int pos, value;
              printf("Nhap vi tri muon sua (0 den %d): ", n - 1);
               scanf("%d", &pos);
               if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le.\n");
                } else {
                   printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                 arr[pos] = value;
                    printf("Sua phan tu thanh cong.\n");
               }
            }
        } else if (choice == 5) {
            if (n == 0) {
                printf("Mang hien tai trong.\n");
            } else {
              int pos;
            printf("Nhap vi tri muon xoa (0 den %d): ", n - 1);
            scanf("%d", &pos);
           if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le.\n");
             } else {
                    for (int i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
              }
                   n--;
                 printf("Xoa phan tu thanh cong.\n");
                }
            }
        } else if (choice == 6) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 6);

    return 0;
}

