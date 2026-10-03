#include<stdio.h>
int main()
{
	int t,a,b;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d" , &a,&b);
		if (a%b==0)
		{
			printf("0");
		}
		else
		{
			for(int i=0;a%b!=0;i++)
			{
				if(a%b==0)
				{
					printf("%d", i);
				}
				a++;
			}
		}
	}
	return 0;
}
