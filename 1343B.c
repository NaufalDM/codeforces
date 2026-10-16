#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int m = n / 2;

        if(m % 2 != 0)
        {
            printf("NO\n");
            continue;
        }

        printf("YES\n");

        int i;

        for(i = 1; i <= m; i++)
        {
            printf("%d ", i * 2);
        }

        for(i = 1; i < m; i++)
        {
            printf("%d ", i * 2 - 1);
        }

        printf("%d\n", 3 * m - 1);
    }

    return 0;
}