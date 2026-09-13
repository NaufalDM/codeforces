#include<stdio.h>
int main()
{
	int k,n,w,x,total,hutang,tot;
	scanf("%d %d %d", &k, &n, &w);
	
	tot = 0;

	for(x = 1; x <= w; x++)
	{
    tot = tot + k * x;
	}
	
	total = n - tot;
	
	if (total<0)
	{
		hutang = total * -1;
		printf("%d", hutang);
	}
	else 
	{
		printf("0");
	}
	
	return 0;
}
