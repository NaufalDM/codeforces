#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t, a, b;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d", &a, &b);
		int selisih = a -b;
		int total = abs(selisih/10);
		if(selisih%10!= 0)
		{
			total++;
		}
		printf("%d \n", total);
		t--;
	}
	return 0;
	
}
