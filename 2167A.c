#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int a;
    	scanf("%d", &a);
    	int sama = 1;
    	for(int i = 0; i<3;i++)
    	{
    		int x;
    		scanf("%d", &x);
    		if(x != a)
    		{
    			sama = 0;
			}
		}
		if(sama == 1)
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
