#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n>=0)
	{
		printf("%d", n);
		return 0;
	}
	else
	{
		if(n%100/10 > n%10)
		{
			n/=10;
		}
		else
		{
			int u = n%10;
			n = n - n%100/10 *10;
			n/= 10;
			n += u;
		}
		
		printf("%d", n);
		return 0;
	}
}
