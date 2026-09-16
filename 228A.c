#include <stdio.h>

int main()
{
    int a, b, c, d;
    int beli = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a == b || a == c || a == d)
        beli++;

    if (b == c || b == d)
        beli++;

    if (c == d)
        beli++;

    printf("%d", beli);

    return 0;
}
