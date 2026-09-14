#include <stdio.h>

int lucky(int x)
{
    while (x > 0)
    {
        int digit = x % 10;

        if (digit != 4 && digit != 7)
        {
            return 0;
        }

        x = x / 10;
    }

    return 1;
}

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && lucky(i))
        {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}
