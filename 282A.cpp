//282A

#include<stdio.h>
int main()
{
	int n,x,i;
	scanf("%d", &n);
	x = 0;
	
	char x1, x2, x3;
	
	for(i=0;i<n;i++)
	{
		scanf(" %c %c %c", &x1, &x2, &x3);
		if(x1=='+')
		{
			++x;
		}
		else if(x1=='-')
		{
			--x;
		}
		else if(x3=='+')
		{
			x++;
		}
		else if(x3=='-')
		{
			x--;
		}
	}
	printf("%d", x);
	
	return 0; 
}
