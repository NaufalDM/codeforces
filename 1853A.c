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
    	int a[505];
    	scanf("%d", &a[0]);
    	int beda = 1000000000;
    	int awal = 1;
    	int urut = 1;
    	for(int i = 1; i< n ; i++)
    	{
    		scanf("%d", &a[i]);
    		if(a[i] < a[i-1])
    		{
    			urut = 0;
			}
			int selisih = a[i] - a[i-1];
			if(selisih < beda)
			{
				beda = selisih;
			}
		}
		
		if(urut == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", beda/2 +1);
		}
	}
    return 0;
}
