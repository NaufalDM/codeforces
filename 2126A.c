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
        int x;
        scanf("%d", &x);
        int terkecil = 9;
        while(x>0)
        {
        	if(x%10 < terkecil)
        	{
        		terkecil = x%10;
			}
			x/=10;
		}
		printf("%d\n", terkecil);
    }
    return 0;
}
//qsort(a, n, sizeof(int), cmp);
