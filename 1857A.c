#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int total = 0;
		for(int i = 0; i < n; i++)
		{
			int a;
			scanf("%d", &a);
			total += a;
		}
		
		if(total % 2 == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
