#include <stdio.h>
void inFibonacci() {
    int n;
    int a = 0, b = 1, next;

    printf("nhập n để in ra dãy Fibonacci nhỏ hơn n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n phải lớn hơn 0 mới in được dãy nha!");
    } else {
        printf("Dãy Fibonacci nhỏ hơn %d là: ", n);
        while (a < n) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
        }
    }
}
