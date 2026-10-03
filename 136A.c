#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int pemberi[105];
	
	for(int i = 1; i <= n; i++)
	{
		int p;
		scanf("%d", &p);
		pemberi[p] = i;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(i != 1)
		{
			printf(" ");
		}
		printf("%d", pemberi[i]);
	}
	printf("\n");
}
