#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n;
    	scanf("%d", &n);
    	int a;
    	int total = 0;
    	int terkecil = 10000005;
    	for(int i = 0; i<n;i++)
    	{
    		scanf("%d", &a);
    		total += a;
    		if(a<terkecil)
    		{
    			terkecil = a;
			}
		}
		printf("%d\n", total - terkecil*n); 
	}
    return 0;
}
