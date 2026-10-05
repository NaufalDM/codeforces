#include<stdio.h>
int main()
{
	int	k,r, jaw;
	scanf("%d %d", &k, &r);
	for(int i = 1; i<10; i++)
	{
		if(k*i%10 == 0 || k*i%10 == r)
		{
			jaw = i;
			break;
		}
	}
	printf("%d", jaw);
}
