#include <stdio.h>
#include <string.h>

int main()
{
    int n,a;
    scanf("%d", &n);
    int min = 100005;
    for(int i = 0 ; i<n;i++)
    {
    	scanf("%d", &a);
    	if(a<0)
    	{
    		a*=-1;
		}
		if(a<min)
		{
			min = a;
		}
	}
	
	printf("%d", min);
    return 0;
}
