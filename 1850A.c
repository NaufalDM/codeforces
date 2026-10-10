#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[4];
		int total=0;
		for(int i = 0; i<3; i++)
		{
			scanf("%d", &a[i]);
			total+= a[i];
		}
		int sepuluh = 0;
		for(int i = 0 ; i<3; i++)
		{
			if(total - a[i] >= 10)
			{
				sepuluh = 1;
			}
		}
		if(sepuluh == 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}