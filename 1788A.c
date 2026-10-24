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
    	int a[1005];
    	int total2 = 0;
    	for(int i = 0; i<n; i++)
    	{
    		scanf("%d", &a[i]);
    		if(a[i] == 2)
    		{
    			total2++;
			}
		}
		if(total2 %2 == 1)
		{
			printf("-1\n");
			continue;
		}
		
		int mid = total2/2;
		int pos2 = 0;
		for(int i = 0; i<n;i++)
		{
			if(a[i] == 2)
			{
				pos2++;
			}
			if(pos2 == mid)
			{
				printf("%d\n", i+1);
				break;
			}
		}
	}
    return 0;
}
