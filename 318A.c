#include<stdio.h>
int main()
{
	long long num, n,k;
	scanf("%lld %lld", &n,&k);
	if(k<=(n+1)/2)
	{
		num=k*2-1;
		printf("%lld",num);
	}
	else
	{
		num=(k - (n + 1) / 2) * 2;
		printf("%lld",num);
	}
	
	return 0;
}
