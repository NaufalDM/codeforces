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
char s[100005];
int urut[100005];

int main()
{
    scanf("%s", s);
    urut[0] = 0;
    for(int i = 1; s[i] !='\0'; i++)
    {
    	urut[i] = urut[i-1] + (s[i] == s[i-1]);
	}
	int m;
	scanf("%d", &m);
	while(m--)
	{
		int l,r;
		scanf("%d %d", &l, &r);
		printf("%d\n", urut[r-1] - urut[l-1]);
	}
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
