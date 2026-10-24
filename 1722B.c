#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char a[105], b[105];
        scanf("%s", a);
        scanf("%s", b);

        int sama = 1;
        for (int i = 0; i < n; i++)
        {
            char x = a[i], y = b[i];
            if (x == 'G') x = 'B';
            if (y == 'G') y = 'B';
            if (x != y)
                sama = 0;
        }

        if (sama)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}