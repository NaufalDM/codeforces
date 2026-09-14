#include<stdio.h>
int main()
{
	int n,h,a;
	scanf ("%d %d",&n,&h);
	int tot=n;
	
	while (n>0)
	{
		scanf("%d",&a);
		if(a>h)
		{
			tot++;
		}
	n--;
	}
	
	printf("%d",tot	);
	return 0;
}
