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
        int array[105];
        int angka[105] = {0};
        scanf("%d %d", &n, &k);
        for(int i = 0; i<n;i++)
        {
        	scanf("%d", &array[i]);
        	angka[array[i]]++;
		}
		int jawab = 0;
		int ada = 0;
		for(int i = 0; i<=n;i++)
		{
			ada += angka[i]; 
			if(angka[i] == 0 || ada < (jawab +1) *k)
			{
				break;
			}
			jawab++;
		}
		printf("%d\n", jawab);
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);  // 
