#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	ll n, a,b;
    	scanf("%lld", &n);
    	a = n/3;
    	b = n/3;
    	if(n%3 == 1)
    	{
    		a++;
		}
		else if(n%3 == 2)
		{
			b++;
		}
		printf("%lld %lld\n", a,b);
	}
    return 0;
}
