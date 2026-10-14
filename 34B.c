#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int harga[105];
    for(int i = 0; i<n; i++)
    {
    	scanf("%d", &harga[i]);
	}
	
	for(int i = 0; i<n; i++)
	{
		for(int j = 0 ; j<n-i-1;j++)
		{
			if(harga[j] > harga[j+1])
			{
				int temp = harga[j];
				harga[j] = harga[j+1];
				harga[j+1] = temp;
			}
		}
	}
	int total = 0;
	for(int i = 0; i<m; i++)
	{
		if(harga[i] < 0)
		{
			total += harga[i];
		}
	}
	
	printf("%d", total * -1);
	return 0;
}
