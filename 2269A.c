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
        int n,k;
        scanf("%d %d", &n, &k);
        if(k == 1)
        {
        	int hasil = pow(2,n);
        	printf("%d\n", hasil);
        	continue;
		}
		else
		{
			int hasil = pow(2, n-k+1) + 2*(k-1);
			printf("%d\n", hasil);
			continue;
		}
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
