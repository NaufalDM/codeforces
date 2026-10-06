#include<stdio.h>
int main()
{
	int t; 
	scanf("%d", &t);
	while(t--)
	{
		int n,count = 0;
		scanf("%d", &n);
		char angka[2005];
		scanf("%s", angka);
		for(int i = 0; i< n/2 ; i++)
		{
			if(angka[i] != angka[n-1-i])
			{
				count+=2;
			}
			else
			{
				break;
			}
		}
		printf("%d\n", n-count);
	}
}
