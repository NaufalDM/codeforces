#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int level[106] = {0};
	int p;
	scanf("%d", &p);
	for(int i = 1; i<= p; i++)
	{
		int a;
		scanf("%d", &a);
		level[a] = 1;
	}
	int q; 
	scanf("%d", &q);
	for(int i = 1; i<=q ; i++)
	{
		int b;
		scanf("%d", &b);
		level[b] = 1;
	}
	
	for(int j = 1; j<=t; j++)
	{
		if(level[j] == 0)
		{
			printf("Oh, my keyboard!");
			return 0;
		}
	}
	printf("I become the guy.");
}
