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
    int a[100005];
    int terbanyak = 1;
    int temp = 1;
    for(int i = 0;i<t;i++)
    {
    	scanf("%d", &a[i]);
    	if(i>0 && a[i] > a[i-1])
    	{
    		temp++;
		}
		else
		{
			temp =1;
		}
		
		if(temp > terbanyak)
		{
			terbanyak = temp;
		}
	}
	printf("%d", terbanyak);
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
