#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n;
    	scanf("%d", &n);
    	char kombini[55];
    	scanf("%s", kombini);
    	int tutup = 0;
    	int total = 0;
    	for(int i = 0; i< n; i++)
    	{
    		if(kombini[i] == ')')
    		{
    			tutup--;
			}
			else
			{
				tutup++;
			}
			
			if(tutup<0)
			{
				tutup = 0;
				total ++;
			}
		}
		printf("%d\n", total);
	}
	return 0;
}
//	