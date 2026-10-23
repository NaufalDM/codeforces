#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	char a;
    	int tota= 0, totb = 0;
    	for(int i = 0; i< 5; i++)
    	{
	    	scanf(" %c", &a);
			if(a == 'A')
			{
				tota++;
			}
			else
			{
				totb++;
			}
		}
		
		if(tota > totb)
		{
			printf("A\n");
		}
		else
		{
			printf("B\n");
		}
	}
    return 0;
}
