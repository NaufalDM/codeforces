#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n;
    	int a;
    	scanf("%d", &n);
    	int c1 = 0, c2 = 0;
    	for(int i = 0; i< n;i++)
    	{
    		int x;
            scanf("%d", &x);
            if (x == 1) c1++;
            else c2++;
		}
		
		int total = c1 + c2 *2;
		
		if(total %2 == 1)
		{
			printf("NO\n");
		}
		else if(c1 == 0 && c2 %2 ==1)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
    return 0;
}
