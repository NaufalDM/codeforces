#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

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
    while (t--)
    {
        int n,a,b;
        scanf("%d %d %d", &n, &a, &b);
        int harga1;
        if(n %2 == 0)
        {
        	harga1 = n/2 * b;
		}
		else
		{
			harga1 = n/2 *b +a;
		}
		int harga2 = n*a;
		
		printf("%d\n", harga1<harga2 ? harga1 : harga2);
    }
    return 0;
}
//qsort(a, n, sizeof(int), cmp);
