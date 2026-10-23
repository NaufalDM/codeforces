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
    	scanf("%d", &a[0]);
    	int bisa = 1;
    	for(int i = 1; i< n; i++)
    	{
    		scanf("%d", &a[i]);
    		for(int j = 0 ; j<i; j++)
    		{
    			if(a[i] == a[j])
    			{
    				bisa = 0;
    				break;
				}
			}
		}
		
		if(bisa == 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
    return 0;
}
