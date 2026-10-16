#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n,k;
    	int huruf[26] = {0};
    	scanf("%d %d", &n, &k);
    	char string[100005];
    	scanf("%s", string);
    	for(int i = 0; string[i] != '\0' ; i++)
    	{
    		huruf[string[i] - 'a']++;
		}
		int ganjil = 0;
		for(int i = 0; i<26 ; i++)
		{
			if (huruf[i] %2 ==1)
			{
				ganjil++;
			}
		}
		
		if(ganjil <= k +1)
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
