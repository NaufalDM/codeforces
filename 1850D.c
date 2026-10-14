#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef long long ll;

int angka[200005];

int cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    return (x > y) - (x < y);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n, k;
    	scanf("%d %d", &n, &k);
    	
    	
    	for(int i = 0; i< n; i++)
    	{
    		scanf("%d", &angka[i]);
		}
		qsort(angka, n, sizeof(int), cmp);
		
		int most = 1;
		int banyak = 1;
		int awal = 1;
		int pos1 = 0, pos2 = 0;
		for(int i = 0; i < n-1; i++)
		{
			if(angka[i+1] - angka[i] <= k)
			{
				banyak++;
				if(banyak > most)
				{
					most = banyak;
				}
			}
			else
			{
				banyak = 1;
			}
		}
		printf ("%d\n", n - most);
	}
    return 0;
}
