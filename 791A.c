#include<stdio.h>
int main()
{
	int limak, bob, tahun;
	scanf ("%d %d", &limak , &bob);
	tahun = 0;
	
	while(limak<=bob)
	{
		limak = limak* 3;
		bob = bob * 2;
		tahun++;
	}
	
	printf("%d", tahun);
	return 0;
}
