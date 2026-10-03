#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int koin[105];
	int total = 0;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &koin[i]);
		total += koin[i];
	}
	
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-1-i; j++)
		{
			if(koin[j] < koin[j+1])
			{
				int temp = koin[j];
				koin[j] = koin[j+1];
				koin[j+1] = temp;
			}
		}
	}
	
	int ambil = 0;
	int jumlah = 0;
	
	for(int i = 0; i < n; i++)
	{
		ambil += koin[i];
		jumlah++;
		if(ambil > total - ambil)
		{
			break;
		}
	}
	printf("%d\n", jumlah);
}
