#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long angka;
		scanf("%lld", &angka);
		long long hasil = (angka+1)/2 -1;
		printf("%lld\n", hasil);
	}
}
