#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (b >= a)
        {
            printf("-1\n");
        }
        else
        {
            int x = b;
            int y = a - b;
            printf("%d\n", x < y ? x : y);
        }
    }
    return 0;
}