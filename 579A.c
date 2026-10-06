#include<stdio.h>
int main()
{
	int x, jumlah = 0; 
	scanf("%d", &x);
	while(x>0)
	{
		if(x%2 == 1)
		{
			jumlah++;
		}
		x/=2;
	}
	printf("%d", jumlah);
}
