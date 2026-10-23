	#include <stdio.h>
	#include <string.h>
	
	int main()
	{
	    int t;
	    scanf("%d", &t);
	    while(t--)
	    {
	    	int x,k;
	    	scanf("%d %d", &x,&k);
	    	int total = 0;
	    	int pos[105];
	    	int poss = 0;
	    	while(x>0)
	    	{
	    		for(int i = x; i>=0; i--)
	    		{
	    			if(i%k != 0)
	    			{
	    				pos[poss] = i;
	    				poss++;
	    				x-=i;
	    				total++;
	    				break;
					}
				}
			}
			
			printf("%d\n", total);
			for(int i = 0; i<total;i++)
			{
				printf("%d ", pos[i]);
			}
			printf("\n");
		}
	    return 0;
	}
