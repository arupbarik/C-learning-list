#include <stdio.h>

int p(int n, int r) {
    if (r == 0)
        return 1;
    else
        return n * p(n - 1, r - 1);
}

int main() {
    int a, b;
    printf("Enter n then r: ");
    scanf("%d %d", &a, &b);
    printf("P(%d, %d) = %d\n", a, b, p(a, b));
    return 0;
}