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
        int n;
        scanf("%d", &n);
        ll total = 0;
        for(int i = 0; i< n;i++)
        {
        	int x;
        	scanf("%d", &x);
        	total += x;
		}
		
		ll r = sqrt(total);
		if(r*r == total)
		{
			printf("YES\n");
		}
		else printf("NO\n");
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
