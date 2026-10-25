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
        int a[200005];
        int angka[200005] ={0};
        for(int i = 0; i< n; i++)
        {
        	scanf("%d", &a[i]);
        	angka[a[i]]++;
		}
		int ketemu = 0;
		for(int i= 1 ; i<=n;i++)
		{
			if(angka[i] >=3)
			{
				printf("%d\n", i);
				ketemu = 1;
				break;
			}
		}
		if(ketemu == 0)
		{
			printf("-1\n");
		}
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
