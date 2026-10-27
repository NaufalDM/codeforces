#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    if (t == 10)
    {
        if (n == 1)
        {
            printf("-1");
        }
        else
        {
            printf("1");
            for (int i = 1; i < n - 1; i++)
            {
                printf("0");
            }
            printf("0");
        }
    }
    else
    {
        printf("%d", t);
        for (int i = 1; i < n; i++)
        {
            printf("0");
        }
    }

    return 0;
}