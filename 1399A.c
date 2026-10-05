#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int angka[55];
		for(int i = 0; i < n; i++)	
		{
			scanf("%d", &angka[i]);
		}
		for(int i = 0; i < n-1 ; i++)
		{
			for(int j = 0; j<n-1-i; j++)
			{
				if(angka[j] > angka[j+1])
				{
					int temp = angka[j];
					angka[j] = angka[j+1];
					angka[j+1] = temp;
				}
			}
		}
		int aman = 1;
		for(int i = 0; i< n-1; i++)
		{
			if(angka[i+1] - angka[i] > 1)
			{
				aman = 0;
				break;
			}
		}
		if(aman == 1)
			{
				printf("YES\n");
			}
		else 
			{
				printf("NO\n");
			}
	}
}
