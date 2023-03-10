#include <stdio.h>
#include <stdbool.h>

int main(int args, char *argv[]) {
    int n1 = 1, n2 = 2, n3 = 3;
    int r1, r2, r3;
    bool tf = -3;

    r1 = (n2 <= 2) || (n3 > 3);
    r2 = !n3;
    r3 = (n1 > 1) && (n2 < 3);

    printf("%d\n", tf);
    printf("%d > 1 = %d\n", n1, n1 > 1);
    printf("%d, %d, %d\n", r1, r2, r3);
    printf("%d\n", r3 - r2 + r1);

    int a[] = {14, 22, 30, 38};
    printf("%d\n", a[2]);
    printf("%u\n", &a[2]);
    printf("%u\n", a);

    return 0;
}