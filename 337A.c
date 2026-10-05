#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d", &m, &n); 	
	int angka[55];
	for(int i = 0; i< n; i++)
	{
		scanf("%d", &angka[i]);
	}
	
	for(int i = 0; i< n-1; i++)
	{
		for(int j = 0; j<n-1-i; j++)
		{
			if(angka[j]> angka[j+1])
			{
				int temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
	int terkecil = angka[m-1] - angka[0];
	for(int i = 1; i + m - 1 <n; i++)
	{
		int selisih = angka[i+m-1] - angka[i];
		if(selisih < terkecil)
		{
			terkecil = selisih;
		}
	}
	
	printf("%d \n", terkecil);
}
