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
    int n,t;
    scanf("%d %d",&n, &t);
    t *= n;
    char color;
    while (t--)
    {
        scanf(" %c", &color);
        if(color == 'C' || color == 'M' || color == 'Y')
        {
        	printf("#Color");
        	return 0;
		}
	}
	printf("#Black&White");
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
