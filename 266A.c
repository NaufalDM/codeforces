#include<stdio.h>
int main()
{
	int n,i,hapus;
	scanf("%d", &n);
	
	char sebelumnya,sekarang;
	scanf(" %c", &sebelumnya);
	hapus = 0;
	
	for (i=1;i<n;i++)
	{
		scanf(" %c", &sekarang);
		
		if(sekarang==sebelumnya)
		{
			hapus++;
		}
		sebelumnya=sekarang;
	}
	printf("%d", hapus);
	return 0;
}
