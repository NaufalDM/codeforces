#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int cmpLL(const void *a, const void *b)
{
    ll x = *(ll *)a;
    ll y = *(ll *)b;
    return (x > y) - (x < y);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        int ok = 0;

        ll na = 2 * b - c;
        if (na > 0 && na % a == 0)
            ok = 1;

        if ((a + c) % 2 == 0)
        {
            ll nb = (a + c) / 2;
            if (nb % b == 0)
                ok = 1;
        }

        ll nc = 2 * b - a;
        if (nc > 0 && nc % c == 0)
            ok = 1;

        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
