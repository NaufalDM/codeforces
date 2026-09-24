#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int maks = fmax(fmax(a, b), fmax(c, d));

    if (a != maks) printf("%d ", maks - a);
    if (b != maks) printf("%d ", maks - b);
    if (c != maks) printf("%d ", maks - c);
    if (d != maks) printf("%d ", maks - d);

    return 0;
}