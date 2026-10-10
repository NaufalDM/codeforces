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
		char kombinasi[105];
		scanf("%s", kombinasi);
		int berurutan = 0;
		int total = 0;
		int berumax = 0;
		for(int i = 0; i<n; i++)
		{
			if(kombinasi[i] == '.')
			{
				berurutan++;
				total++;
			}
			else
			{
				berurutan = 0;
			}
			
			if(berurutan > berumax)
			{
				berumax = berurutan;
			}
		}
		
		if(berumax >=3)
		{
			printf("2\n");
		}
		else
		{
			printf("%d\n", total);
		}
	}
	return 0;
}
