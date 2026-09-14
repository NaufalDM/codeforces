#include<stdio.h>
int main()
{
	double n,p,i;
	scanf("%lf",&n);
	double tot=0;
	
	for (i=0;i<n;i++)
	{
		scanf("%lf",&p);
		tot = tot + p;
	}
	
	tot=tot/n;
	printf("%f", tot);
}
