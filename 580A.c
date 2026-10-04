#include<stdio.h>
int main()
{
	int t,total = 1,tempt = 1,a1;
	scanf("%d", &t);
	scanf("%d", &a1);
	for(int i = 1; i< t; i++)
	{
		int angka;
		scanf("%d", &angka);
		
		if(angka >= a1)
		{
			tempt++;
		}
		else
		{
			tempt = 1;
		}
		a1= angka;
		
		if(tempt > total)
		{
			total = tempt;
		}
	}
	
	printf("%d", total);
}
