#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int cmpLL(const void *a, const void *b)
{
    ll x = *(ll *)a;
    ll y = *(ll *)b;
    return (x > y) - (x < y);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,k;
        scanf("%d %d", &n ,&k);
		int terkecil = 100;
		int totgen = 0;
		for(int i = 0; i<n; i++)
		{
			int x;
			scanf("%d", &x);
			
			int ke_k = (k-x%k)%k;
			if(ke_k < terkecil)
			{
				terkecil = ke_k;
			}
			if(x%2 == 0)
			{
				totgen++;
			}
		}
		int jawaban = terkecil;
		
		if(k==4)
		{
			int perlu = 2 - totgen;
			if(perlu < 0)
			{
				perlu = 0;
			}
			int ganjil = n - totgen;
			if(perlu <= ganjil && perlu < jawaban)
			{
				jawaban = perlu;
			}
		}
		
		printf("%d\n", jawaban);
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
