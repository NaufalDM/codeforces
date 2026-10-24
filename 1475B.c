#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n;
    	scanf("%d" ,&n);
    	if(n%2020 <= n/2020)
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
