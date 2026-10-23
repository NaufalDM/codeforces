#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int x;
    	scanf("%d", &x);
    	int lewat = x%10 - 1;
    	int total = 0;
    	
    	for(int i = 1;x>0;i++)
    	{
    		total+=i;
    		x/=10;
		}
		
		printf("%d\n", lewat*10 + total);
	}
    return 0;
}
