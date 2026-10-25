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
        ll a[4];
        int b[4];
        for(int i= 0; i< 4; i++)
        {
        	scanf("%lld", &a[i]);
        	b[i] = a[i];
        	
		}
		qsort(a,4,sizeof(ll), cmpLL);
		
		int benar = 0;
		if(b[0] >= a[2])
		{
			benar++;
		}
		if(b[1] >= a[2])
		{
			benar++;
		}
		
		if(benar == 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
