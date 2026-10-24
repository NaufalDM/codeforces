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
        ll min = -1;
        for(int i = 0; i<n;i++)
        {
        	ll x;
        	scanf("%lld", &x);
        	if(min == -1 || x<min)
        	{
        		min = x;
			}
		}
		if(min <= n - 1)
		{
			printf("%d\n", n);
		}
		else
		{
			printf("0\n");
		}
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
