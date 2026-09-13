#include<stdio.h>
int main()
{
	int n,k,skor,lolos,i,batas;
	scanf("%d %d", &n,&k);
	lolos = 0;
	
	for(i=1;i<=n;i++)
	{
		scanf("%d", &skor);
		if (skor==0)
		{
			break;
		}
		if (i==k)
		{ 	
			batas = skor;
		}
		if (i<=k)
		{
			lolos++;
		}
		else if ( skor == batas )
		{
			lolos++;
		}
		else 
		{
			break;
		}
	}
	
	printf ("%d", lolos);
	return 0;
}
