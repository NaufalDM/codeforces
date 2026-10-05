#include<stdio.h>
int main()
{
	int n,a,b,c,temp;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d %d", &a, &b,&c);
		if(a>b)
		{
			temp = a; 
			a = b; 
			b=temp;
		}
		if(b>c)
		{
			temp = b;
			b=c;
			c=temp;
		}
		if(a>b)
		{
			temp = a;
			a = b;
			b=temp;
		}
		printf("%d\n", b);
	}
}
