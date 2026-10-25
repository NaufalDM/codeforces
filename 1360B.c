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
    	ll s[55] ;
    	for(int i = 0; i<n;i++)
    	{
    		scanf("%lld", &s[i]);
		}
		qsort(s,n,sizeof(ll),cmpLL);
		
		int terkecil =1000;
		
		for(int i = 0;i<n-1;i++)
		{
			if(s[i+1] - s[i] < terkecil)
			{
				terkecil = s[i+1] - s[i];
			}
		}
		
		printf("%d\n", terkecil);
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
