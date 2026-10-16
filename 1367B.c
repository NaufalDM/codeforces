#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
	{
        int n;
        scanf("%d", &n);
        int angka[45];
        
        int x = 0;
        int y = 0;
        for(int i = 0; i<n ; i++)
        {
        	scanf("%d", &angka[i]);
        	if(i%2 != angka[i] %2)
        	{
        		if(i%2 == 1)
        		{
        			y++;
				}
				else
				{
					x++;
				}
			}
		}
		if(x == y)
		{
			printf("%d\n", x);
		}
		else
		{
			printf("-1\n");
		}
	}
}