#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int tem = 1;
    long long sum = 0;

    while (m > 0) 
    {
        int a;
        scanf("%d", &a);

        if (a >= tem)
            sum += a - tem;
        else
            sum += (n - tem) + a;

        tem = a;
        m--;
    }

    printf("%lld", sum);
    return 0;
}