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
        char a[105];
        int terbanyak = 1;
        int temp = 1;
        scanf("%s", a);
        for(int i = 0;i<n;i++)
	    {
	    	if(i>0 && a[i] == a[i-1])
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
		
		printf("%d\n", terbanyak+1 );
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
// 2 < 4 > 2 > 1