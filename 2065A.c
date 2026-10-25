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
        char amogu[205];
        scanf("%s", amogu);
        int panjang = strlen(amogu);
        for(int i= 0; i<panjang-2;i++)
        {
        	printf("%c", amogu[i]);
		}
		printf("i\n");
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
