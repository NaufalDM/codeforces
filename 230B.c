#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	long long angka[t+1];
	for(int i = 0; i<t ; i++)
	{
		scanf("%d", &angka[i]);
		int jumlah = 0;
		for(int j = 1; j<= angka[i]; j++)
		{
			if(angka[i] %j == 0)
			{
				jumlah++;
			}
		}
		if(jumlah == 3)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
