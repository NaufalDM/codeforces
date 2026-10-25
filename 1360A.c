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
        int a, b;
        scanf("%d %d", &a, &b);
        if(a>b)
        {
        	int temp = a;
        	a = b;
        	b = temp;
		}
		
		if(2*a <= b)
		{
			printf("%d\n", b*b);
		}
		else
		{
			printf("%d\n", 2*a*2*a);
		}
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
