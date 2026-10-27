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
        int n;
        scanf("%d", &n);
		int faktor = 3;

        while (n % faktor != 0)
        {
            faktor = faktor * 2 + 1;
        }

        printf("%d\n", n / faktor);
    }
    return 0;
}
//qsort(a, n, sizeof(int), cmp);
