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
        int n,k,lantai;
        scanf("%d %d", &n, &k);
        if(n<=2)
        {
        	lantai = 1;
		}
		else
		{
			lantai = 1 + (n - 2) / k;
			if((n-2)%k != 0)
			{
				lantai++;
			}
		}
		
		printf("%d\n", lantai);
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
