#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int x,y;
    	scanf("%d %d", &x, &y);
    	if(x>y)
    	{
    		int temp = x;
    		x = y;
    		y = temp;
		}
		printf("%d %d\n", x,y);
	}
    return 0;
}
