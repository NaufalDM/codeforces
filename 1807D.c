#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n,q;
    	scanf("%d %d", &n, &q);
    	long long a[200005];
    	for(int i = 1; i<= n; i++)
    	{
    		scanf("%lld", &a[i]);
		}
    	while(q--)
    	{
    		long long l,r,k, total = 0;
    		scanf("%lld %lld %lld", &l, &r, &k);
    		for(int i = 1; i<= n; i++)
    		{
    			if(i>= l && i<=r)
    			{
    				total += k;
    				continue;
				}
				total += a[i];
			}
			if(total % 2 == 1)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}
    return 0;
}
