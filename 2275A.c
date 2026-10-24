#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, r;
        scanf("%d %d %d", &x, &y, &r);
        printf("%d %d\n", x - r, y);
    }
    return 0;
}