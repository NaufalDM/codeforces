#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld", &n);
	int tot = 0,d;
	
	while (n>0)
	{
		d = n%10; //modulo 10 untuk mencari angka terakhir
		if (d==4||d==7)
		{
			tot++;
		}
		n = n/10; // untuk menghilangkan angka terakhir
	}
	
	if (tot==4||tot==7)
	{
		printf("YES");
	}
	else 
	{
		printf("NO");
	}
	return 0;
	
}
