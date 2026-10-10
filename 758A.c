#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int angka[101];
	int terbesar = 0;
	for(int i = 0; i<n; i++)
	{
		scanf("%d", &angka[i]);
		if(angka[i] > terbesar)
		{
			terbesar = angka[i];
		}
	}
	int total = 0;
	for(int i = 0; i < n; i++)
	{
		total = total + terbesar - angka[i];
	}
	
	printf("%d", total);
}