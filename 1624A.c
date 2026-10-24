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
    	int a;
    	scanf("%d", &a);
    	int max = a, min = a;
    	for(int i = 1; i< n; i++)
    	{
    		scanf("%d", &a);
    		if(a>max)
    		{
    			max = a;
			}
			else if(a<min)
			{
				min = a;
			}
		}
		printf("%d\n", max-min);
	}
    return 0;
}
