#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int kartu[1000];
	for(int i =0; i<t; i++)
	{
		scanf("%d", &kartu[i]);
	}
	
	int i = 0, tots = 0, totd = 0, panjang = t;
	for(int j = 1; j<=panjang; j++)
	{
		if(j%2 != 0)
		{
			if(kartu[i] > kartu[t-1])
			{
				tots += kartu[i];
				i++;
			}
			else
			{
				tots += kartu[t-1];
				t--;
			}
		}
		else
		{
			if(kartu[i] > kartu[t-1])
			{
				totd += kartu[i];
				i++;
			}
			else
			{
				totd += kartu[t-1];
				t--;
			}
		}
	}
	
	printf("%d %d",tots, totd );
	
}
