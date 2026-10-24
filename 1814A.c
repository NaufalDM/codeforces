#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	ll n,k;
    	scanf("%lld %lld", &n, &k);
    	 if (n % 2 == 0)
            printf("YES\n");
        else if (k % 2 == 0)
            printf("NO\n");
        else if (n >= k)
            printf("YES\n");
        else
            printf("NO\n");
	}
    return 0;
}