#include<stdio.h>
int main()
{
	int	n, t;
	scanf("%d %d", &n, &t);
	char baris[105];
	scanf("%s", baris);
	while(t--)
	{
		for (int i = 0; i< n-1; i++)
		{
			if(baris[i] == 'B' && baris[i+1] == 'G')
			{
				baris[i] = 'G';
				baris [i+1] = 'B';
				i++;
			}
		}
	}
	printf("%s", baris);
}
