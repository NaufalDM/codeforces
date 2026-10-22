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
    	int a[10];
    	scanf("%d", &a[0]);
    	int min = a[0];
    	for(int i = 1; i<n; i++)
    	{
    		scanf("%d", &a[i]);
    		if(a[i] < min)
    		{
    			min = a[i];
			}
		}
		
		int total = 1;
		int sudah = 0;
		for(int i = 0; i< n; i++)
		{
			if(a[i] == min && sudah == 0)
			{
				a[i]++;
				sudah = 1;
			}
			total *= a[i];
		}
		printf("%d\n", total);
		
	}
    return 0;
}
