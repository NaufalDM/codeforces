#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    
    
    for(int i = 2; i*i<= m; i++)
    {
    	if(m%i == 0)
    	{
    		printf("NO");
    		return 0;
		}
	}
	
    for(int i = n+1; i<m; i++)
    {
    	int prima = 1;
    	for(int j = 2; j*j <= i; j++)
    	{
    		if(i%j == 0)
    		{
    			prima = 0;
			}
		}
		if(prima == 1)
		{
			printf("NO");
			return 0;
		}
	}
	
	printf("YES");
	return 0;
}
