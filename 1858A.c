#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int  a,b,c;
    	scanf("%d %d %d", &a,&b,&c);
		
		if(a == b)
		{
			if(c%2 == 0)
			{
				printf("Second\n");
				continue;
			}
			else
			{
				printf("First\n");
				continue;
			}
		}
		else if(a>b)
		{
			printf("First\n");
		}
		else
		{
			printf("Second\n");
		}
	}
	return 0;
}
