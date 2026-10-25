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
    int n;
    scanf("%d", &n);
    int total = n/2;
    printf("%d\n", total);
    int dua = total;
    if(n%2 == 1)
    {
    	dua--;
	}
	while(dua--)
	{
		printf("2 ");
	}
	if(n%2 == 1)
	{
		printf("3\n");
	}
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
