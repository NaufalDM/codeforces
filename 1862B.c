#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int b[200005];
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);

        int cnt = n;
        for (int i = 1; i < n; i++)
            if (b[i] < b[i - 1])
                cnt++;

        printf("%d\n", cnt);
        printf("%d ", b[0]);
        for (int i = 1; i < n; i++)
        {
            if (b[i] < b[i - 1])
                printf("1 ");
            printf("%d ", b[i]);
        }
        printf("\n");
    }
    return 0;
}