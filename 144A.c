#include<stdio.h>
int main()
{
	int t, max = 0, min = 100, posmax = 0, posmin = 0;
	scanf("%d", &t);
	int an[t];
	for(int i = 0; i<t ; i++)
	{
		scanf("%d", &an[i]);
		if(an[i] > max)
		{
			max = an[i];
			posmax = i;
		}
		if(an[i] <= min)
		{
			min = an[i];
			posmin = i;
		}
	}

	int total = posmax + t - posmin - 1;
	if(posmin < posmax)
	{
		total--;
	}
	printf("%d", total);
}
