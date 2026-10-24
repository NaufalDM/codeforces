#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int beda = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a != b)
            beda = 1;
    }

    if (beda)
        printf("Happy Alex\n");
    else
        printf("Poor Alex\n");

    return 0;
}