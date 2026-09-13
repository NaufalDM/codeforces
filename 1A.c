#include<stdio.h>
int main()
{
	long long m,n,a,bagi1,bagi2,hasil,modulo1,modulo2;
	scanf("%lld %lld %lld", &m, &n , &a);
	
	bagi1 = m/a;
	bagi2 = n/a;
	modulo1 = m%a;
	modulo2 = n%a;
	
	if(modulo1>0)
	{
		bagi1++;
	}
	if(modulo2>0)
	{
		bagi2++;
	}
	hasil = bagi1 * bagi2;
	
	printf("%lld", hasil);
	
	return 0;
}
