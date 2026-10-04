#include<stdio.h>
int main()
{
	char an[1005];
	scanf(" %1004[^\n]", an);
	char huruf[26] = {0};
	int total = 0;
	for(int i = 1 ; an[i-1] != '}' ; i++)
	{
		if(an[i] >='a' && an[i] <= 'z')
		{
			if(huruf[an[i] - 'a'] ==0)
			{
				total++;
				huruf[an[i] - 'a'] = 1;
			}
		}
	}
	
	printf("%d", total);
}
