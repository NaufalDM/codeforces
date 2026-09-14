#include<stdio.h>
int main()
{
	int stop,out,in;
	scanf("%d",&stop);
	int total=0;
	int cap = 0;
	while (stop>0)
	{
		scanf("%d %d",&out,&in);
		total = total+in-out;
		
		if(total>cap)
		{
			cap=total;
		}
		stop--;
	}
	
	printf("%d",cap);
	
	return 0;
}
