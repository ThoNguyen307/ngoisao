#include <stdio.h>
void bangcuuchuong() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);

    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}