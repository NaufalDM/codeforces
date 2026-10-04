#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int h[35], a[35];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &h[i], &a[i]);
	}
	
	int total = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j && h[i] == a[j])
			{
				total++;
			}
		}
	}
	
	printf("%d\n", total);
}
