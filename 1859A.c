#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n;
    	scanf("%d", &n);
    	int a[105];
    	int max = 0;
    	for(int i = 0; i< n;i++)
    	{
    		scanf("%d", &a[i]);
    		if(a[i] > max)
    		{
    			max = a[i];
			}
		}
		int totmax = 0;
		for(int i= 0; i<n;i++)
		{
			if(a[i] == max)
			{
				totmax++;
			}
		}
		
		if(totmax == n)
		{
			printf("-1\n");
			continue;
		}
		
		int totb = n-totmax;
		printf("%d %d\n", totb, totmax);
		for(int i = 0; i<n; i++)
		{
			if(a[i] != max)
			{
				printf("%d ", a[i]);
			}
		}
		printf("\n");
		
		for(int i = 0; i<n;i++)
		{
			if(a[i] == max)
			{
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
    return 0;
}
